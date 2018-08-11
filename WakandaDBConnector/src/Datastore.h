#ifndef DATASTORE_H
#define DATASTORE_H

#include <string>
#include <map>
#include<iostream>

using std::string;
using std::endl;
using std::cout;
class DataClass;

class DataStore
{

		std::string m_uri;
		std::string m_url;

		std::map < std::string, DataClass* > m_dataclasses;
		
		std::string m_json;
		long m_port;

	public:

	/*
		inAddress 127.0.0.1
		port	8000
		http://127.0.0.1:8081/rest/$catalog
	*/

		// Constructor of the DataStore class 
		DataStore(const std::string& inDomain, long inPort); 

		//Pointer on the Dataclass to get 
		DataClass* getDataClass(const std::string& name) {

			return m_dataclasses[name];
		}
		
		// Methods manipuling attributes 
		string getUrl() { return m_url; }
		void setJson(string const &inJason) { m_json = inJason; }
		string getJson() { return m_json; }
};

#endif // DATASTORE_H