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

  bool isValid() const {return m_reader.isValid();}
  void close() {m_reader.closeFile();}

 private:
  podio::ROOTReader m_reader;
  podio::EventStore m_store;
};

}

#endif
