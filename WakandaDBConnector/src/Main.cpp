#include <iostream>
#include "Datastore.h"
#include <cpr/cpr.h>
#include"rapidjson/document.h"

using namespace rapidjson;

int main() {

	DataStore ds("127.0.0.1", 8081);

	//cout << ds.getJson()<<endl;
	
	
	
	return 0;
}