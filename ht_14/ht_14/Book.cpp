#include "Book.h"

Book::Book()
{
	name = "nn";
	author = "nn";
	year = 2023;
	resume = "nr";
}

Book::Book(string name, string autor, int year, string resume)
	:Publication(name, author, year)
{
	this->resume = resume;
}

void Book::setResume(string resume)
{
	this->resume = resume;
}

string Book::getResume() const
{
	return resume;
}

void Book::show() const
{
	cout << "\t" << type() << "\n";
	cout << "Name: " << name << "\n";
	cout << "Author: " << author << "\n";
	cout << "Resume: " << resume << "\n";
	cout << "Year: " << year << "\n";
}

string Book::type() const
{
	return "Book";
}
