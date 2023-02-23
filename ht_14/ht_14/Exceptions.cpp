#include "Exceptions.h"

PublicationException::PublicationException()
{
	name = "nn";
}

PublicationException::PublicationException(string name)
{
	this->name = name;
}
