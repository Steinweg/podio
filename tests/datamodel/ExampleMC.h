#ifndef ExampleMC_H
#define ExampleMC_H
#include "ExampleMCData.h"
#include <vector>
#include "ExampleMC.h"
#include "ExampleMC.h"
#include <vector>
#include "podio/ObjectID.h"

// Example MC-particle
// author: F.Gaede

//forward declarations


#include "ExampleMCConst.h"
#include "ExampleMCObj.h"



class ExampleMCCollection;
class ExampleMCCollectionIterator;
class ConstExampleMC;

class ExampleMC {

  friend ExampleMCCollection;
  friend ExampleMCCollectionIterator;
  friend ConstExampleMC;

public:

  /// default constructor
  ExampleMC();
  ExampleMC(double energy,int PDG);

  /// constructor from existing ExampleMCObj
  ExampleMC(ExampleMCObj* obj);
  /// copy constructor
  ExampleMC(const ExampleMC& other);
  /// copy-assignment operator
  ExampleMC& operator=(const ExampleMC& other);
  /// support cloning (deep-copy)
  ExampleMC clone() const;
  /// destructor
  ~ExampleMC();

  /// conversion to const object
  operator ConstExampleMC () const;

public:

  const double& energy() const;
  const int& PDG() const;

  void energy(double value);

  void PDG(int value);


  void addparents(ConstExampleMC);
  unsigned int parents_size() const;
  ConstExampleMC parents(unsigned int) const;
  std::vector<ConstExampleMC>::const_iterator parents_begin() const;
  std::vector<ConstExampleMC>::const_iterator parents_end() const;

  void adddaughters(ConstExampleMC);
  unsigned int daughters_size() const;
  ConstExampleMC daughters(unsigned int) const;
  std::vector<ConstExampleMC>::const_iterator daughters_begin() const;
  std::vector<ConstExampleMC>::const_iterator daughters_end() const;



  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleMCObj instance
  void unlink(){m_obj = nullptr;}

  bool operator==(const ExampleMC& other) const {
    return (m_obj==other.m_obj);
  }

  bool operator==(const ConstExampleMC& other) const;

// less comparison operator, so that objects can be e.g. stored in sets.
//  friend bool operator< (const ExampleMC& p1,
//       const ExampleMC& p2 );
  bool operator<(const ExampleMC& other) const { return m_obj < other.m_obj  ; }

  const podio::ObjectID getObjectID() const;

private:
  ExampleMCObj* m_obj;

};



#endif
