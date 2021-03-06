# flake8: noqa
declarations = {}
implementations = {}
definitions = {}
arguments = {}

# Members
#-----------------------------------
declarations["member_getter"] = "\tconst {type}& {fname}() const;\n"
implementations["member_getter"] = "\tconst {type}& {classname}::{fname}() const {{ return m_obj->data.{name}; }}\n"

declarations["member_builtin_setter"] = "\tvoid {fname}({type} value);\n\n"
implementations["member_builtin_setter"] = "void {classname}::{fname}({type} value){{ m_obj->data.{name} = value; }}\n"
# conceptually getting a non-const ref is a setter:
declarations["member_class_refsetter"] = "\t{type}& {name}();\n"
implementations["member_class_refsetter"] = "\t{type}& {classname}::{name}() {{ return m_obj->data.{name}; }}\n"
declarations["member_class_setter"] = "\tvoid {fname}(class {type} value);\n"
implementations["member_class_setter"] = "void {classname}::{fname}(class {type} value) {{ m_obj->data.{name} = value; }}\n"

# this is inline, don't need the declaration
implementations["const_member_getter"] = "\tconst {type}& Const{classname}::{fname}() const {{ return m_obj->data.{name}; }}\n"

# OneToOneRelations
#-----------------------------------
declarations["one_rel_setter"] = "\tvoid {name}({namespace}::Const{type} value);\n"
implementations["one_rel_setter"]  = "void {classname}::{name}({namespace}::Const{type} value) {{\n"
implementations["one_rel_setter"] += "\tif (m_obj->m_{name} != nullptr) delete m_obj->m_{name};\n"
implementations["one_rel_setter"] += "\tm_obj->m_{name} = new Const{type}(value);\n}}\n"

declarations["one_rel_getter"] = "\tconst {namespace}::Const{type} {name}() const;\n"
implementations["one_rel_getter"] = "\tconst {namespace}::Const{type} {classname}::{name}() const {{\n"
implementations["one_rel_getter"] += "\t\tif (m_obj->m_{name} == nullptr) {{\n"
implementations["one_rel_getter"] += "\t\t\treturn {namespace}::Const{type}(nullptr);\n"
implementations["one_rel_getter"] += "\t\t}}\n"
implementations["one_rel_getter"] += "\t\treturn {namespace}::Const{type}(*(m_obj->m_{name}));\n\t}}"
# this is inline, don't need the declaration
implementations["const_one_rel_getter"] = "\tconst {namespace}::Const{type} Const{classname}::{name}() const {{\n"
implementations["const_one_rel_getter"] += "\t\tif (m_obj->m_{name} == nullptr) {{\n"
implementations["const_one_rel_getter"] += "\t\t\treturn {namespace}::Const{type}(nullptr);\n"
implementations["const_one_rel_getter"] += "\t\t}}\n"
implementations["const_one_rel_getter"] += "\t\treturn {namespace}::Const{type}(*(m_obj->m_{name}));}}"

# Relations
#-----------------------------------
implementations["clear_relations_vec"]  = "\t// clear relations to {name}. Make sure to unlink() the reference data s they may be gone already.\n"
implementations["clear_relations_vec"] += "\tfor (auto& pointer : m_rel_{name}_tmp) {{\n"
implementations["clear_relations_vec"] += "\t\tfor(auto& item : (*pointer)) {{\n"
implementations["clear_relations_vec"] += "\t\t\titem.unlink();\n"
implementations["clear_relations_vec"] += "\t\t}};\n"
implementations["clear_relations_vec"] += "\t\tdelete pointer;\n"
implementations["clear_relations_vec"] += "\t}}\n"
#fg: need to also clear the vector :
implementations["clear_relations_vec"] += "\tm_rel_{name}_tmp.clear();\n"

implementations["clear_relations"]  = "\tfor (auto& item : (*m_rel_{name})) {{ item.unlink(); }}\n"
implementations["clear_relations"] += "\tm_rel_{name}->clear();\n"
implementations["destroy_relations"]  = "\tif (m_rel_{name} != nullptr) {{ delete m_rel_{name}; }}\n"

implementations["prep_writing_relations"]  = "\tfor (auto& obj : m_entries) {{\n"
implementations["prep_writing_relations"] += "\t\tif (obj->m_{name} != nullptr) {{\n"
implementations["prep_writing_relations"] += "\t\t\tm_refCollections[{i}]->emplace_back(obj->m_{name}->getObjectID());\n"
implementations["prep_writing_relations"] += "\t\t}} else {{\n"
implementations["prep_writing_relations"] += "\t\t\tm_refCollections[{i}]->push_back({{-2,-2}});\n"
implementations["prep_writing_relations"] += "\t\t}}\n\t}}\n"

declarations["relation"] = "\tstd::vector<{namespace}::Const{type}>* m_rel_{name}; ///< Relation buffer for read / write\n"
declarations["relation_collection"] = "\tstd::vector<std::vector<{namespace}::Const{type}>*> m_rel_{name}_tmp; ///< Relation buffer for internal book-keeping\n"

implementations["ctor_list_relation"] = ", m_rel_{name}(new std::vector<{namespace}::Const{type}>())"
