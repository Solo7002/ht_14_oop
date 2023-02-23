#include "Publication.h"

Publication::Publication()
{
	name = "nn";
	author = "nn";
	year = 2023;
}

Publication::Publication(string name, string autor, int year)
{
	if (name.empty())
	{
		throw new BookException(name);
	}
	if (year < 1000)
	{
		throw new EditionYearException(name, year);
	}
	this->name = name;
	this->author = author;
	this->year = year;
}

void Publication::setName(string name)
{
	if (name.empty())
	{
		throw new BookException(name);
	}
	this->name = name;
}

void Publication::setAuthor(string author)
{
	this->author = author;
}

void Publication::setYear(int year)
{
	if (year < 1000)
	{
		throw new EditionYearException(name, year);
	}
	this->year = year;
}

string Publication::getName() const
{
	return name;
}

string Publication::getAuthor() const
{
	return author;
}

int Publication::getYear() const
{
	return year;
}