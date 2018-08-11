#ifndef DATACLASS_H
#define  DATACLASS_H
#include "Datastore.h"

class DataClass  {

	string m_name;
	string m_uri;
	string m_dataURI;

	public:
		
		DataClass(string const& inName,string const & inURI,string const& inDataUri);
		string getUri();
		string getDataURI();
		string getName() { return m_name; }


};


#endif // DATACLASS_H

