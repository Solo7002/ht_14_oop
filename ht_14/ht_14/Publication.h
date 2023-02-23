#pragma once
#include<iostream>
#include<string>
#include"Exceptions.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;

class Publication
{
protected:
	string name;
	string author;
	int year;
public:
	Publication();
	Publication(string name, string autor, int year);

	void setName(string name);
	void setAuthor(string author);
	void setYear(int year);

	string getName()const;
	string getAuthor()const;
	int getYear()const;

	virtual void show()const = 0;
	virtual string type()const = 0;
};

