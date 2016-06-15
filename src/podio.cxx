// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME podio

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "/afs/desy.de/user/s/steinweg/devel/podio/include/podio/CollectionBase.h"
#include "/afs/desy.de/user/s/steinweg/devel/podio/include/podio/CollectionIDTable.h"
#include "/afs/desy.de/user/s/steinweg/devel/podio/include/podio/EventStore.h"
#include "/afs/desy.de/user/s/steinweg/devel/podio/include/podio/ICollectionProvider.h"
#include "/afs/desy.de/user/s/steinweg/devel/podio/include/podio/IReader.h"
#include "/afs/desy.de/user/s/steinweg/devel/podio/include/podio/ObjBase.h"
#include "/afs/desy.de/user/s/steinweg/devel/podio/include/podio/ObjectID.h"
#include "/afs/desy.de/user/s/steinweg/devel/podio/include/podio/PythonEventStore.h"
#include "/afs/desy.de/user/s/steinweg/devel/podio/include/podio/ROOTReader.h"
#include "/afs/desy.de/user/s/steinweg/devel/podio/include/podio/ROOTWriter.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *podiocLcLCollectionBase_Dictionary();
   static void podiocLcLCollectionBase_TClassManip(TClass*);
   static void delete_podiocLcLCollectionBase(void *p);
   static void deleteArray_podiocLcLCollectionBase(void *p);
   static void destruct_podiocLcLCollectionBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::podio::CollectionBase*)
   {
      ::podio::CollectionBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::podio::CollectionBase));
      static ::ROOT::TGenericClassInfo 
         instance("podio::CollectionBase", "invalid", 30,
                  typeid(::podio::CollectionBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &podiocLcLCollectionBase_Dictionary, isa_proxy, 0,
                  sizeof(::podio::CollectionBase) );
      instance.SetDelete(&delete_podiocLcLCollectionBase);
      instance.SetDeleteArray(&deleteArray_podiocLcLCollectionBase);
      instance.SetDestructor(&destruct_podiocLcLCollectionBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::podio::CollectionBase*)
   {
      return GenerateInitInstanceLocal((::podio::CollectionBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::podio::CollectionBase*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *podiocLcLCollectionBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::podio::CollectionBase*)0x0)->GetClass();
      podiocLcLCollectionBase_TClassManip(theClass);
   return theClass;
   }

   static void podiocLcLCollectionBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *podiocLcLCollectionIDTable_Dictionary();
   static void podiocLcLCollectionIDTable_TClassManip(TClass*);
   static void *new_podiocLcLCollectionIDTable(void *p = 0);
   static void *newArray_podiocLcLCollectionIDTable(Long_t size, void *p);
   static void delete_podiocLcLCollectionIDTable(void *p);
   static void deleteArray_podiocLcLCollectionIDTable(void *p);
   static void destruct_podiocLcLCollectionIDTable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::podio::CollectionIDTable*)
   {
      ::podio::CollectionIDTable *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::podio::CollectionIDTable));
      static ::ROOT::TGenericClassInfo 
         instance("podio::CollectionIDTable", "invalid", 79,
                  typeid(::podio::CollectionIDTable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &podiocLcLCollectionIDTable_Dictionary, isa_proxy, 0,
                  sizeof(::podio::CollectionIDTable) );
      instance.SetNew(&new_podiocLcLCollectionIDTable);
      instance.SetNewArray(&newArray_podiocLcLCollectionIDTable);
      instance.SetDelete(&delete_podiocLcLCollectionIDTable);
      instance.SetDeleteArray(&deleteArray_podiocLcLCollectionIDTable);
      instance.SetDestructor(&destruct_podiocLcLCollectionIDTable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::podio::CollectionIDTable*)
   {
      return GenerateInitInstanceLocal((::podio::CollectionIDTable*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::podio::CollectionIDTable*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *podiocLcLCollectionIDTable_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::podio::CollectionIDTable*)0x0)->GetClass();
      podiocLcLCollectionIDTable_TClassManip(theClass);
   return theClass;
   }

   static void podiocLcLCollectionIDTable_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *podiocLcLPythonEventStore_Dictionary();
   static void podiocLcLPythonEventStore_TClassManip(TClass*);
   static void delete_podiocLcLPythonEventStore(void *p);
   static void deleteArray_podiocLcLPythonEventStore(void *p);
   static void destruct_podiocLcLPythonEventStore(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::podio::PythonEventStore*)
   {
      ::podio::PythonEventStore *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::podio::PythonEventStore));
      static ::ROOT::TGenericClassInfo 
         instance("podio::PythonEventStore", "invalid", 375,
                  typeid(::podio::PythonEventStore), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &podiocLcLPythonEventStore_Dictionary, isa_proxy, 0,
                  sizeof(::podio::PythonEventStore) );
      instance.SetDelete(&delete_podiocLcLPythonEventStore);
      instance.SetDeleteArray(&deleteArray_podiocLcLPythonEventStore);
      instance.SetDestructor(&destruct_podiocLcLPythonEventStore);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::podio::PythonEventStore*)
   {
      return GenerateInitInstanceLocal((::podio::PythonEventStore*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::podio::PythonEventStore*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *podiocLcLPythonEventStore_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::podio::PythonEventStore*)0x0)->GetClass();
      podiocLcLPythonEventStore_TClassManip(theClass);
   return theClass;
   }

   static void podiocLcLPythonEventStore_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *podiocLcLObjectID_Dictionary();
   static void podiocLcLObjectID_TClassManip(TClass*);
   static void *new_podiocLcLObjectID(void *p = 0);
   static void *newArray_podiocLcLObjectID(Long_t size, void *p);
   static void delete_podiocLcLObjectID(void *p);
   static void deleteArray_podiocLcLObjectID(void *p);
   static void destruct_podiocLcLObjectID(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::podio::ObjectID*)
   {
      ::podio::ObjectID *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::podio::ObjectID));
      static ::ROOT::TGenericClassInfo 
         instance("podio::ObjectID", "podio/ObjectID.h", 6,
                  typeid(::podio::ObjectID), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &podiocLcLObjectID_Dictionary, isa_proxy, 0,
                  sizeof(::podio::ObjectID) );
      instance.SetNew(&new_podiocLcLObjectID);
      instance.SetNewArray(&newArray_podiocLcLObjectID);
      instance.SetDelete(&delete_podiocLcLObjectID);
      instance.SetDeleteArray(&deleteArray_podiocLcLObjectID);
      instance.SetDestructor(&destruct_podiocLcLObjectID);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::podio::ObjectID*)
   {
      return GenerateInitInstanceLocal((::podio::ObjectID*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::podio::ObjectID*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *podiocLcLObjectID_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::podio::ObjectID*)0x0)->GetClass();
      podiocLcLObjectID_TClassManip(theClass);
   return theClass;
   }

   static void podiocLcLObjectID_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrapper around operator delete
   static void delete_podiocLcLCollectionBase(void *p) {
      delete ((::podio::CollectionBase*)p);
   }
   static void deleteArray_podiocLcLCollectionBase(void *p) {
      delete [] ((::podio::CollectionBase*)p);
   }
   static void destruct_podiocLcLCollectionBase(void *p) {
      typedef ::podio::CollectionBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::podio::CollectionBase

namespace ROOT {
   // Wrappers around operator new
   static void *new_podiocLcLCollectionIDTable(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::podio::CollectionIDTable : new ::podio::CollectionIDTable;
   }
   static void *newArray_podiocLcLCollectionIDTable(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::podio::CollectionIDTable[nElements] : new ::podio::CollectionIDTable[nElements];
   }
   // Wrapper around operator delete
   static void delete_podiocLcLCollectionIDTable(void *p) {
      delete ((::podio::CollectionIDTable*)p);
   }
   static void deleteArray_podiocLcLCollectionIDTable(void *p) {
      delete [] ((::podio::CollectionIDTable*)p);
   }
   static void destruct_podiocLcLCollectionIDTable(void *p) {
      typedef ::podio::CollectionIDTable current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::podio::CollectionIDTable

namespace ROOT {
   // Wrapper around operator delete
   static void delete_podiocLcLPythonEventStore(void *p) {
      delete ((::podio::PythonEventStore*)p);
   }
   static void deleteArray_podiocLcLPythonEventStore(void *p) {
      delete [] ((::podio::PythonEventStore*)p);
   }
   static void destruct_podiocLcLPythonEventStore(void *p) {
      typedef ::podio::PythonEventStore current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::podio::PythonEventStore

namespace ROOT {
   // Wrappers around operator new
   static void *new_podiocLcLObjectID(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::podio::ObjectID : new ::podio::ObjectID;
   }
   static void *newArray_podiocLcLObjectID(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::podio::ObjectID[nElements] : new ::podio::ObjectID[nElements];
   }
   // Wrapper around operator delete
   static void delete_podiocLcLObjectID(void *p) {
      delete ((::podio::ObjectID*)p);
   }
   static void deleteArray_podiocLcLObjectID(void *p) {
      delete [] ((::podio::ObjectID*)p);
   }
   static void destruct_podiocLcLObjectID(void *p) {
      typedef ::podio::ObjectID current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::podio::ObjectID

namespace ROOT {
   static TClass *vectorlEpodiocLcLObjectIDgR_Dictionary();
   static void vectorlEpodiocLcLObjectIDgR_TClassManip(TClass*);
   static void *new_vectorlEpodiocLcLObjectIDgR(void *p = 0);
   static void *newArray_vectorlEpodiocLcLObjectIDgR(Long_t size, void *p);
   static void delete_vectorlEpodiocLcLObjectIDgR(void *p);
   static void deleteArray_vectorlEpodiocLcLObjectIDgR(void *p);
   static void destruct_vectorlEpodiocLcLObjectIDgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<podio::ObjectID>*)
   {
      vector<podio::ObjectID> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<podio::ObjectID>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<podio::ObjectID>", -2, "vector", 210,
                  typeid(vector<podio::ObjectID>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEpodiocLcLObjectIDgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<podio::ObjectID>) );
      instance.SetNew(&new_vectorlEpodiocLcLObjectIDgR);
      instance.SetNewArray(&newArray_vectorlEpodiocLcLObjectIDgR);
      instance.SetDelete(&delete_vectorlEpodiocLcLObjectIDgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpodiocLcLObjectIDgR);
      instance.SetDestructor(&destruct_vectorlEpodiocLcLObjectIDgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<podio::ObjectID> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<podio::ObjectID>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpodiocLcLObjectIDgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<podio::ObjectID>*)0x0)->GetClass();
      vectorlEpodiocLcLObjectIDgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpodiocLcLObjectIDgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpodiocLcLObjectIDgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<podio::ObjectID> : new vector<podio::ObjectID>;
   }
   static void *newArray_vectorlEpodiocLcLObjectIDgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<podio::ObjectID>[nElements] : new vector<podio::ObjectID>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpodiocLcLObjectIDgR(void *p) {
      delete ((vector<podio::ObjectID>*)p);
   }
   static void deleteArray_vectorlEpodiocLcLObjectIDgR(void *p) {
      delete [] ((vector<podio::ObjectID>*)p);
   }
   static void destruct_vectorlEpodiocLcLObjectIDgR(void *p) {
      typedef vector<podio::ObjectID> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<podio::ObjectID>

namespace {
  void TriggerDictionaryInitialization_podio_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/afs/desy.de/user/s/steinweg/devel/podio/src",
"/afs/desy.de/project/ilcsoft/sw/x86_64_gcc48_sl6/root/6.06.02/include",
"/afs/desy.de/user/s/steinweg/devel/podio/include",
"/afs/desy.de/project/ilcsoft/sw/x86_64_gcc48_sl6/root/6.06.02/include",
"/afs/desy.de/user/s/steinweg/devel/podio/src/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "podio dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace podio{class CollectionBase;}
namespace podio{class CollectionIDTable;}
namespace podio{class PythonEventStore;}
namespace podio{class __attribute__((annotate("$clingAutoload$podio/ObjectID.h")))  ObjectID;}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$string")))  allocator;
}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "podio dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#ifndef COLLECTIONBASE_H
#define COLLECTIONBASE_H

#include <string>
#include <utility>
#include <vector>

#include "podio/ObjectID.h"

namespace podio {
  // forward declarations
  class ObjectID;
  class ICollectionProvider;
  class CollectionBase;

  typedef std::vector<std::pair<std::string,podio::CollectionBase*>> CollRegistry;
  typedef std::vector<std::vector<podio::ObjectID>*> CollRefCollection;

  //class CollectionBuffer {
  //public:
  //  void* data;
  //  CollRefCollection* references;
  //};

  class CollectionBase {
  public:
    /// prepare buffers for serialization
    virtual void  prepareForWrite() = 0;

    //virtual void  write(CollectionBuffer& buffer) = 0;
    //virtual void  read(CollectionBuffer& buffer) = 0;
    
    /// re-create collection from buffers after read
    virtual void  prepareAfterRead() = 0;

    /// initialize references after read
    virtual bool  setReferences(const ICollectionProvider* collectionProvider) = 0;

    /// set collection ID
    virtual void  setID(unsigned id) = 0;

    /// set I/O buffer
    virtual void  setBuffer(void*) = 0;

    /// get address of the pointer to the I/O buffer
    virtual void* getBufferAddress() = 0;

    /// check for validity of the container after read
    virtual bool isValid() const = 0;

    /// destructor
    virtual ~CollectionBase(){};

    /// clear the collection and all internal states
    virtual void clear() = 0 ;

    /// return the buffers containing the object-relation information
    virtual CollRefCollection* referenceCollections() = 0;
  };

} // namespace

#endif
#ifndef COLLECTIONIDTABLE_H
#define COLLECTIONIDTABLE_H

#include <string>
#include <vector>
#include <mutex>

namespace podio {

  class CollectionIDTable{

  public:

    /// default constructor
    CollectionIDTable() :
      m_collectionIDs(), m_names()
    {};

    /// constructor from existing ID:name mapping
    CollectionIDTable(const std::vector<int> ids, std::vector<std::string> names) :
      m_collectionIDs(ids), m_names(names)
    {};

    /// return collection ID for given name
    int collectionID(const std::string& name) const;

    /// return name for given collection ID
    const std::string name(int collectionID) const;

    /// register new name to the table
    /// returns assigned collection ID
    int add(const std::string& name);

    /// Prints collection information
    void print() const;

  private:
    std::vector<int>              m_collectionIDs;
    std::vector<std::string>      m_names;
    mutable std::recursive_mutex  m_mutex;
  };


} //namespace
#endif
#ifndef ALBERS_EVENTSTORE_H
#define ALBERS_EVENTSTORE_H

#include <string>
#include <vector>
#include <type_traits>
#include <set>

// podio specific includes
#include "podio/CollectionIDTable.h"
#include "podio/ICollectionProvider.h"

/**
This is an *example* event store

The event store holds the object collections.

It is used to create new collections, and to access existing ones.
When accessing a collection that is not yet in the event store,
the event store makes use of a Reader to read the collection.

**/

namespace podio {

  class CollectionBase;
  class IReader;

  class EventStore : public ICollectionProvider {

  public:
    /// Collection entry. Each collection is identified by a name
    typedef std::pair<std::string, CollectionBase*> CollPair;
    typedef std::vector<CollPair> CollContainer;

    EventStore();
    ~EventStore();

    /// create a new collection
    template<typename T>
    T& create(const std::string& name);

    /// access a collection by name. returns true if successful
    template<typename T>
    bool get(const std::string& name, const T*& collection);

    /// access a collection by ID. returns true if successful
    bool get(int id, CollectionBase*& coll) const;

    /// access a collection by name
    /// returns a collection w/ setting isValid to true if successful
    template<typename T>
    const T& get(const std::string& name );

    /// empties collections.
    void clearCollections();

    /// clears itself; deletes collections
    void clear();

    /// set the reader
    void setReader(IReader* reader);

    CollectionIDTable* getCollectionIDTable(){return m_table;};

  private:

    /// get the collection of given name; returns true if successfull
    bool doGet(const std::string& name, CollectionBase*& collection, bool setReferences = true) const;
    /// check if a collection of given name already exists
    bool collectionRegistered(const std::string& name) const;
    void setCollectionIDTable(CollectionIDTable* table){if (m_table!=nullptr) delete m_table; m_table=table;};

    // members
    mutable std::set<int> m_retrievedIDs;
    mutable CollContainer m_collections;
    mutable std::vector<const CollectionBase*> m_failedRetrieves;
    IReader* m_reader;
    CollectionIDTable* m_table;
  };


template<typename T>
T& EventStore::create(const std::string& name) {
  static_assert(std::is_base_of<podio::CollectionBase,T>::value,
    "DataStore only accepts types inheriting from CollectionBase");
  // TODO: add check for existence
  T* coll = new T();
  m_collections.push_back({name,coll});
  auto id = m_table->add(name);
  coll->setID(id);
  return *coll;
}

template<typename T>
bool EventStore::get(const std::string& name, const T*& collection){
  //  static_assert(std::is_base_of<podio::CollectionBase,T>::value,
  //              "DataStore only contains types inheriting from CollectionBase");
  CollectionBase* tmp(0);
  doGet(name, tmp);
  collection = static_cast<T*>(tmp);
  if (collection != nullptr) { return true;}
  return false;
}


template<typename T>
const T& EventStore::get(const std::string& name) {
  const T* tmp(0);
  auto success = this->get(name,tmp);
  if (success==true){
    return *tmp;
  } else {
    tmp = new T();
    m_failedRetrieves.push_back(tmp);
    return *tmp;
  }
}

} //namespace
#endif
#ifndef ICOLLECTIONPROVIDER_H
#define ICOLLECTIONPROVIDER_H

namespace podio {

  class CollectionBase;

  class ICollectionProvider {
  public:
    /// destructor
    virtual ~ICollectionProvider(){};
    /// access a collection by ID. returns true if successful
    virtual bool get(int collectionID, CollectionBase*& collection) const = 0;
  };

} // namespace

#endif
#ifndef IREADER_H
#define IREADER_H

#include <algorithm>
#include <string>
#include <vector>

#include <iostream>

/*

This class has the function to read available data from disk
and to prepare collections and buffers.

*/

namespace podio {

class CollectionBase;
class CollectionIDTable;

class IReader {
  public:
    virtual ~IReader(){};
    /// Read Collection of given name
    /// Does not set references yet.
    virtual CollectionBase* readCollection(const std::string& name) = 0;
    /// Get CollectionIDTable of read-in data
    virtual CollectionIDTable* getCollectionIDTable() = 0;
    //TODO: decide on smart-pointers for passing of objects
};

} // namespace

#endif
#ifndef OBJBASE_H
#define OBJBASE_H

#include <atomic>
#include <iostream>
#include "podio/ObjectID.h"

namespace podio {

  class ObjBase {
  public:

    /// Constructor from ObjectID and initial object-count
    ObjBase(ObjectID id, int i) : id(id) , ref_counter(i) {};

    /// checks whether object is "untracked" by a collection
    /// if yes, increases reference count
    void acquire() {
      if (id.index == podio::ObjectID::untracked) ++ref_counter;
    };

    /// checks whether object is "untracked" by a collection
    /// if yes, decrease reference count and delete itself if count===0
    int release(){
      if (id.index != podio::ObjectID::untracked){ return 1;};
      if (--ref_counter == 0) {
        delete this;
      }
      return 0;
    };

    /// destructor
    virtual ~ObjBase(){};

  public:
    /// ID of the object
    podio::ObjectID id;

  private:
    /// reference counter
    std::atomic<int> ref_counter;

  };

} // namespace

#endif
#ifndef OBJECTID_H
#define OBJECTID_H

namespace podio {

class ObjectID {

public:
  int index; /// index in collection
  int collectionID; /// ID if the collection

  static const int untracked = -1; /// not part of a collection
  static const int invalid   = -2; /// invalid or non-available object
  //static const int transient = -3;

  /// index and collectionID uniquely defines the object.
  /// this operator is necessary for meaningful comparisons in python
  bool operator==(const ObjectID& other) const {return index == other.index &&
						collectionID == other.collectionID; }
};

} // namespace

#endif
#ifndef ALBERS_PYTHONEVENTSTORE_H
#define ALBERS_PYTHONEVENTSTORE_H


#include "podio/EventStore.h"
#include "podio/ROOTReader.h"

namespace podio {

class PythonEventStore {
public:
  /// constructor from filename
  PythonEventStore(const char* filename);

  /// access a collection.
  podio::CollectionBase* get(const char* name);

  /// signify end of event
  void endOfEvent();

  /// go to a given event
  void goToEvent(unsigned ievent);

  /// get number of entries in the tree
  unsigned getEntries() const;

 private:
  podio::ROOTReader m_reader;
  podio::EventStore m_store;
};

}

#endif
#ifndef ROOTREADER_H
#define ROOTREADER_H

#include <algorithm>
#include <map>
#include <string>
#include <vector>

// forward declarations
class TClass;
class TFile;
class TTree;

#include <iostream>

#include "podio/ICollectionProvider.h"
#include "podio/IReader.h"
/*

This class has the function to read available data from disk
and to prepare collections and buffers.

*/


namespace podio {

class EventStore;
class CollectionBase;
class Registry;
class CollectionIDTable;

class ROOTReader : public IReader {
  friend EventStore;
  public:
    ROOTReader() : m_eventNumber(0) {}
    ~ROOTReader();
    void openFile(const std::string& filename);
    void closeFile(){};

    /// Read all collections requested
    void readEvent();

    /// get collection of name/type; returns true if successfull
    template<typename T>
    bool getCollection(const std::string& name, T*& collection);

    /// Read CollectionIDTable from ROOT file
    CollectionIDTable* getCollectionIDTable() {return m_table;}

    /// Returns number of entries in the TTree
    unsigned getEntries() const;

    /// Preparing to read next event
    void endOfEvent();

    /// Preparing to read a given event
    void goToEvent(unsigned evnum);

  private:

    void readCollectionIDTable();

    /// Implementation for collection reading
    CollectionBase* readCollection(const std::string& name);

  private:
    typedef std::pair<CollectionBase*, std::string> Input;
    std::vector<Input> m_inputs;
    std::map<std::string, std::pair<TClass*,TClass*> > m_storedClasses;
    CollectionIDTable* m_table;
    TFile* m_file;
    TTree* m_eventTree;
    unsigned m_eventNumber;
};

template<typename T>
bool ROOTReader::getCollection(const std::string& name, T*& collection){
  collection = dynamic_cast<T*>(readCollection(name));
  if (collection != nullptr) {
    return true;
  } else {
    return false;
  }
}

} // namespace

#endif
#ifndef ROOTWRITER_H
#define ROOTWRITER_H

#include "podio/EventStore.h"

#include <string>
#include <vector>
#include <iostream>

// ROOT specific includes
#include "TTree.h"

// forward declarations
class TFile;

namespace podio {
  class CollectionBase;
  class Registry;

  class ROOTWriter {

  public:
    ROOTWriter(const std::string& filename, EventStore* store);
    ~ROOTWriter();

    template<typename T>
    void registerForWrite(const std::string& name);
    void writeEvent();
    void finish();

  private:
    // members
    std::string m_filename;
    EventStore* m_store;
    TFile* m_file;
    TTree* m_datatree;
    TTree* m_metadatatree;
    std::vector<CollectionBase*> m_storedCollections;

  };

template<typename T>
  void ROOTWriter::registerForWrite(const std::string& name){
    const T* tmp_coll(nullptr);
    m_store->get(name, tmp_coll);
    T* coll = const_cast<T*>(tmp_coll);

    if(coll==nullptr) {
      std::cerr<<"no such collection to write, throw exception."<<std::endl;
    }
    else {
      m_datatree->Branch(name.c_str(), coll->_getBuffer());
      auto colls = coll->referenceCollections();
      if (colls != nullptr){
      int i = 0;
      for(auto& c : (*colls)){
        m_datatree->Branch((name+"#"+std::to_string(i)).c_str(),c);
        ++i;
      }
    }
      m_storedCollections.emplace_back(coll);
    }
  }

} //namespace
#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"podio::CollectionBase", payloadCode, "@",
"podio::CollectionIDTable", payloadCode, "@",
"podio::ObjectID", payloadCode, "@",
"podio::PythonEventStore", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("podio",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_podio_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_podio_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_podio() {
  TriggerDictionaryInitialization_podio_Impl();
}
