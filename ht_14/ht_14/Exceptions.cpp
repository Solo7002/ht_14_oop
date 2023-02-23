#include "Exceptions.h"

PublicationException::PublicationException()
{
	name = "nn";
}

PublicationException::PublicationException(string name)
{
	this->name = name;
}




BookException::BookException()
{
	name = "nn";
}

BookException::BookException(string name)
	:PublicationException(name)
{
	
}

string BookException::showMessage() const
{
	return "Book Exception: "+name+"; Error string without any symbols";
}





EditionYearException::EditionYearException()
{
	name = "nn";
}

EditionYearException::EditionYearException(string name)
	:PublicationException(name)
{

}

string EditionYearException::showMessage() const
{
	return "Year Exception: " + name + "; Error! Undefined year! You can't write that year!";
}
