#pragma once
#include"Publication.h"

class Book : public Publication 
{
	string resume;
public:
	Book();
	Book(string name, string autor, int year, string resume);

	void setResume(string resume);
	string getResume()const;

	void show()const override;
    string type()const override;
};

