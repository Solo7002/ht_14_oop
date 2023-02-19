#include "Publication.h"

Publication::Publication()
{
	name = "nn";
	author = "nn";
	year = 2023;
}

Publication::Publication(string name, string autor, int year)
{
	this->name = name;
	this->author = author;
	this->year = year;
}

void Publication::setName(string name)
{
	this->name = name;
}

void Publication::setAuthor(string author)
{
	this->author = author;
}

void Publication::setYear(int year)
{
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