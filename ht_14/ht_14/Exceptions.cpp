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
	year = 2023;
}

EditionYearException::EditionYearException(string name, int year)
	:PublicationException(name)
{
	this->year = year;
}

string EditionYearException::showMessage() const
{
	string st_year = (const char*)year;
	return "Year Exception: " + name + "; Error! Undefined year! You can't write "+st_year+" year!";
}
