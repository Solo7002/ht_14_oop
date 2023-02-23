#include "Magazine.h"

Magazine::Magazine()
{
	name = "nn";
	author = "nn";
	year = 2023;
}

Magazine::Magazine(string name, string autor, int year)
	:Publication(name, autor, year)
{
}

void Magazine::addSt(string st)
{
	arr.push_back(st);
}

void Magazine::delSt(string st)
{
	int index = -1;
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] == st)
		{
			index = i;
		}
	}
	if (index != -1)
	{
		arr.erase(arr.begin() + index);
	}
}

void Magazine::show() const
{ 
	cout << "\t" << type() << "\n";
	cout << "Name: " << name << "\n";
	cout << "Autor: " << author << "\n";
	cout << "Yeat: " << year << "\n";
	cout << "\n";
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << "\n";
	}
}

string Magazine::type() const
{
	return "Magazine";
}
