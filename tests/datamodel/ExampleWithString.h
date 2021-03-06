#ifndef ExampleWithString_H
#define ExampleWithString_H
#include <string>
#include "ExampleWithStringData.h"
#include <vector>
#include "podio/ObjectID.h"

// Type with a string
// author: Benedikt Hegner

//forward declarations


#include "ExampleWithStringConst.h"
#include "ExampleWithStringObj.h"



class ExampleWithStringCollection;
class ExampleWithStringCollectionIterator;
class ConstExampleWithString;

class ExampleWithString {

  friend ExampleWithStringCollection;
  friend ExampleWithStringCollectionIterator;
  friend ConstExampleWithString;

public:

  /// default constructor
  ExampleWithString();
  ExampleWithString(std::string theString);

  /// constructor from existing ExampleWithStringObj
  ExampleWithString(ExampleWithStringObj* obj);
  /// copy constructor
  ExampleWithString(const ExampleWithString& other);
  /// copy-assignment operator
  ExampleWithString& operator=(const ExampleWithString& other);
  /// support cloning (deep-copy)
  ExampleWithString clone() const;
  /// destructor
  ~ExampleWithString();

  /// conversion to const object
  operator ConstExampleWithString () const;

public:

  const std::string& theString() const;

  void theString(std::string value);




  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithStringObj instance
  void unlink(){m_obj = nullptr;}

  bool operator==(const ExampleWithString& other) const {
    return (m_obj==other.m_obj);
  }

  bool operator==(const ConstExampleWithString& other) const;

// less comparison operator, so that objects can be e.g. stored in sets.
//  friend bool operator< (const ExampleWithString& p1,
//       const ExampleWithString& p2 );
  bool operator<(const ExampleWithString& other) const { return m_obj < other.m_obj  ; }

  const podio::ObjectID getObjectID() const;

private:
  ExampleWithStringObj* m_obj;

};



#endif
