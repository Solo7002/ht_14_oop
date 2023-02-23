#pragma once
#include<iostream>
#include<string>
using std::cout;
using std::endl;
using std::string;

class PublicationException
{
protected:
	string name;
public:
	PublicationException();
	PublicationException(string name);

	virtual string showMessage()const = 0;
};




class BookException : public PublicationException
{
public:
	BookException();
	BookException(string name);

	string showMessage()const override;
};




class EditionYearException : public PublicationException
{
public:
	EditionYearException();
	EditionYearException(string name);

	string showMessage()const override;
};







