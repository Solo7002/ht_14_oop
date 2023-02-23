#pragma once
#include<iostream>
#include<string>
using std::cout;
using std::endl;
using std::string;

class PublicationException
{
	string name;
public:
	PublicationException();
	PublicationException(string name);

	virtual string showMessage()const = 0;
};














