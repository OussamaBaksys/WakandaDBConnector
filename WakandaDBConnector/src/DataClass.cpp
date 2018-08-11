#include"DataClass.h"

DataClass::DataClass(string const& inName, string const & inURI, string const& inDataUri):
	m_name(inName),m_uri(inURI),m_dataURI(inDataUri)
{
	cout << " --------- Constructing ---->> " << m_name << "  DataClass -------" << endl;
}

string DataClass::getUri()
{
	return m_uri;
}

string DataClass::getDataURI()
{
	return m_dataURI;
}

