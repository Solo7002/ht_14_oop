#include "Library.h"

Library::Library()
{
	name = "nn";
}

Library::Library(string name)
{
	this->name = name;
}

void Library::addPublication(Publication* obj)
{
	arr.push_back(obj);
}

void Library::delPublication(string name)
{
	int index = findName(name);
	if (index != -1)
	{
		arr.erase(arr.begin() + index);
	}
}

int Library::findName(string name)
{
	int index = -1;
	for (int i = 0; i < arr.size(); i++)
	{
		if (this->name == name)
		{
			index = i;
			break;
		}
	}
	return index;
}

void Library::findbyName(string name)
{
	int index = findName(name);
	if (index != -1)
	{
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ #" << index + 1 << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		arr[index]->show();
	}
	else
	{
		cout << "\nError! Undefined name!\n";
	}
}

void Library::show_info() const
{
	cout << "Name of library: " << name << "\n\n";
	cout << "\tList of Publications\n";
	for (int i = 0; i < arr.size(); i++)
	{
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ #" << i + 1 << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		arr[i]->show();
	}
}
