#pragma once
#include "Publication.h"
#include<vector>
#include<algorithm>
using std::vector;

class Magazine : public Publication
{
	vector<string>arr;
public:
	Magazine();
	Magazine(string name, string autor, int year);

	void addSt(string st);
	void delSt(string st);

	void show()const;
	string type()const;
};

