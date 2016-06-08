#ifndef ExampleMCOBJ_H
#define ExampleMCOBJ_H

// std includes
#include <atomic>
#include <iostream>

// data model specific includes
#include "podio/ObjBase.h"
#include "ExampleMCData.h"

#include <vector>


// forward declarations
class ExampleMC;



class ExampleMCObj : public podio::ObjBase {
public:
  /// constructor
  ExampleMCObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleMCObj(const ExampleMCObj&);
  /// constructor from ObjectID and ExampleMCData
  /// does not initialize the internal relation containers
  ExampleMCObj(const podio::ObjectID id, ExampleMCData data);
  virtual ~ExampleMCObj();

public:
  ExampleMCData data;
  bool isMutable;
  std::vector<ExampleMC>* m_parents;
  std::vector<ExampleMC>* m_daughters;


};



#endif
