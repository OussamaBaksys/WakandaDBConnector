#ifndef DATACLASS_H
#define  DATACLASS_H
#include "Datastore.h"

class DataClass  {

	string m_name;
	string m_uri;
	string m_dataURI;

	public:
		
		DataClass(string const & inURI);
		string getUri();
		string getDatURI();


};


#endif // DATACLASS_H

