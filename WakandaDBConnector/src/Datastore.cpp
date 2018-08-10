#include "Datastore.h"

// Constructor Implementation

DataStore::DataStore(const std::string & inDomain, long inPort):
	m_uri(inDomain),m_port(inPort)

{
	m_url.append(":"+std::to_string(inPort)+"/rest/$catalog");

	
}

// Methods Implementation 