#include "Datastore.h"
#include <cpr/cpr.h>
#include"rapidjson/document.h"
#include <assert.h>
#include "DataClass.h"
#include <array>

// Constructor Implementation

DataStore::DataStore(const std::string & inDomain, long inPort):
	m_uri("/rest/$catalog"),m_port(inPort)

{
	m_url = "http://"+ inDomain;
	m_url.append(":"+std::to_string(inPort)+ m_uri);

	auto datastore = cpr::Get(cpr::Url{m_url });

	m_json = datastore.text;


	// Parsing the datastore json 

	rapidjson::Document doc;
	auto obj = doc.Parse(m_json.c_str()).GetObject();

	rapidjson::Value::MemberIterator attributeIterator = doc.FindMember("dataClasses");
	
	const rapidjson::Value& dataClasses = doc["dataClasses"];

	assert(dataClasses.IsArray()); // attributes is an array


	for (rapidjson::Value::ConstValueIterator itr = dataClasses.Begin(); itr != dataClasses.End(); ++itr) {
		
		
		cout << " ----------Parsing the dataStore Scope" << endl<<endl;
		const rapidjson::Value& dataClass = *itr;
		
		assert(dataClass.IsObject()); // each attribute is an object
		
	
		//Initialisation
		string arr[3];
		string name="";
		int k = 0;

		for (rapidjson::Value::ConstMemberIterator itr2 = dataClass.MemberBegin(); itr2 != dataClass.MemberEnd(); ++itr2) {
			
			//std::cout << itr2->name.GetString() << " : " << itr2->value.GetString() << std::endl; // Printing key, value 

			// Saving the name of the DataClass 
			name=dataClass.MemberBegin()->name.GetString();

			//Saving values 
			arr[k] = itr2->value.GetString();
			k++;

			std::cout << "------  End of Data Class Scope -------------------" << std::endl<<endl;
		}
		
		m_dataclasses.insert(std::pair<std::string, DataClass* >("", new DataClass(arr[0],arr[1],arr[2])));

		//for (int i =0; i <= 2; i++)

		//	cout << arr[i]<<"            ----->          element array"<<endl;

		//cout << endl<<"array done ---------------------------------------------------------------here" << endl<<endl;
		////DataClass ds(arr[0], arr[1], arr[2]);
		//
	}

	
}

// Methods Implementation 