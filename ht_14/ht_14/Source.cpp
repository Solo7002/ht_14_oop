#include<iostream>
#include<string>
#include"Publication.h"
#include"Library.h"
#include"Exceptions.h"
#include"Book.h"
#include"Magazine.h"
#include"Publication.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	int menu;
	string s1, s2, s3;
	int n1;
	string library_name;
	cout << "Input library name: ";
	cin >> library_name;
	Library a(library_name);
	do
	{
		system("cls");
		cout << "1\tShow info\n";
		cout << "2\tAdd Publication\n";
		cout << "3\tDel Publication\n";
		cout << "4\tFind Publication\n";
		cout << "\nInput: ";
		cin >> menu;
		if (menu == 1) 
		{
			system("cls");
			a.show_info();
			system("pause");
		}
		else if (menu == 2)
		{
			system("cls");
			string p_type;
			cout << "Input Publication type(Book, Magazine): ";
			cin >> p_type;
			if (p_type == "Book")
			{
				cout << "Input book name: ";
				cin >> s1;
				cout << "Input book author: ";
				cin >> s2;
				cout << "Input book edit year: ";
				cin >> n1;
				cout << "Input book resume: ";
				cin.ignore();
				getline(cin, s3);
				a.addPublication(new Book(s1, s2, n1, s3));
			}
			else if (p_type == "Magazine")
			{
				cout << "Input magazine name: ";
				cin >> s1;
				cout << "Input magazine author: ";
				cin >> s2;
				cout << "Input magazine edit year: ";
				cin >> n1;
				a.addPublication(new Magazine(s1, s2, n1));
				cout << "S1 = " << s1<<endl;
				string temp_st = "0";
				cin.ignore();
				do
				{
					cout << "Input new string for your magazine, to end input 0";
					cout << "\nInput: ";				
					getline(cin, temp_st);
					if (temp_st != "0")
					{
						a.addStringToMagaz(s1, temp_st);
					}
				} while (temp_st != "0");
			}
			system("pause");
		}
		else if (menu == 3)
		{
			system("cls");
			cout << "Input publication name: ";
			cin >> s1;
			a.delPublication(s1);
			system("pause");
		}
		else if (menu == 4)
		{
			system("cls");
			cout << "Input publication name: ";
			cin >> s1;
			system("cls");
			a.findbyName(s1);
			system("pause");
		}
	} while (menu!=0);
	return 0;
}