#include <iostream>
#include "Datastore.h"
#include <cpr/cpr.h>
#include"rapidjson/document.h"

using namespace rapidjson;

int main() {

	/*cout << r.text << endl;
	cout << r.status_code << std::endl;*/

	DataStore ds("127.0.0.1", 8081);

	cout << ds.getUri() << endl;

	auto datastore = cpr::Get(cpr::Url{ ds.getUri() });
	
	ds.setJson(datastore.text);

	cout << ds.getJson()<<endl;
	
	
	
	return 0;
}