#pragma once
#include<iostream>
#include"Magazine.h"
#include"Library.h"
#include"Publication.h"

class Library
{
	string name;
	vector<Publication*>arr;
public:
	Library();
	Library(string name);

	void addPublication(Publication* obj);
	void delPublication(string name);
	int findName(string name);
	void findbyName(string name);

	void show_info()const;
};

