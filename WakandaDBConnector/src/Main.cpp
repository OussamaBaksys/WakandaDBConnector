#include <iostream>
#include "Datastore.h"
#include "DataClass.h"
#include <cpr/cpr.h>
#include"rapidjson/document.h"

using namespace rapidjson;

int main() {

	DataStore ds("127.0.0.1", 8081);


	cout << "----------Testing-------- - "<< endl << endl;

	cout << ds.getDataClass("Person")->getName() << endl;
	cout << ds.getDataClass("Person")->getUri() << endl;
	cout << ds.getDataClass("Person")->getDataURI() << endl;


	cout << ds.getDataClass("Departement")->getName() << endl;
	cout << ds.getDataClass("Departement")->getUri() << endl;
	cout << ds.getDataClass("Departement")->getDataURI() << endl;
	
	
	
	return 0;
}