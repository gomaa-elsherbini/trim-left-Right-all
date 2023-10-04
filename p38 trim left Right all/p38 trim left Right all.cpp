#include <iostream>
#include <string>
using namespace std;


enum enTrim{Right=1, Left=2, All=3};

string readString()
{
	string str;
	cout << "\nEnter a string?\n";
	getline(cin, str);
	return str;
}

void TrimString(string str, char delimeter,enTrim trimType = enTrim::All)
{
	if (trimType == enTrim::All)
	{
		string word;

		while (str.find(delimeter) != -1)
		{
			word = str.substr(0, str.find(delimeter));
			if (word != "")
			{
				cout << word << " ";
			}
			str.erase(0, str.find(delimeter) + 1);
		}
		if (str != "")
			cout << str << endl;
	}
	else if (trimType == enTrim::Left)
	{
		int i = 0;
		while (str[i] == ' ')
		{
			i++;
		}
		str.erase(0, i);
		cout << str << endl;
	}
	else if (trimType == enTrim::Right)
	{
		int size = str.length() - 1;
		int i = 0;
		while (str[size - i] == ' ')
		{
			i++;
		}
		str.erase(str.length() - i, str.length());
		cout << str << endl;
	}
}

void TrimAllString(string str, char delimeter)
{
	string word;

	while (str.find(delimeter) != -1)
	{
		word = str.substr(0, str.find(delimeter));
		if (word != "")
		{
			cout << word << " ";
		}
		str.erase(0, str.find(delimeter) + 1);
	}
	if (str != "")
		cout << str << endl;
}
void TrimLeftString(string str, char delimeter)
{
	int i = 0;
	while (str[i] == ' ')
	{
		i++;
	}
	str.erase(0, i);
	cout << str << endl;
}
void TrimRightString(string str, char delimeter)
{
	int size= str.length() - 1;
	int i = 0;
	while (str[size-i] == ' ')
	{
		i++;
	}
	str.erase(str.length()-i, str.length());
	cout << str << endl;
}
 

int main()
{
	//       Mohammad   Abu-Hadhoud     Programming           Advices          
	string str = readString();
	//TrimAllString(str, ' ');
	//TrimLeftString(str, ' ');
	//TrimRightString(str, ' ');
	cout << "\n============\n";
	TrimString(str, ' ');
	cout << "\n============\n";
	TrimString(str, ' ', Right);
	cout << "\n============\n";
	TrimString(str, ' ', Left);

	system("pause>0");
	return main();

}