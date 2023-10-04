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

//void TrimString(string str, char delimeter,enTrim trimType = enTrim::All)
//{
//	if (trimType == enTrim::All)
//	{
//		string word;
//
//		while (str.find(delimeter) != -1)
//		{
//			word = str.substr(0, str.find(delimeter));
//			if (word != "")
//			{
//				cout << word << " ";
//			}
//			str.erase(0, str.find(delimeter) + 1);
//		}
//		if (str != "")
//			cout << str << endl;
//	}
//	else if (trimType == enTrim::Left)
//	{
//		int i = 0;
//		while (str[i] == ' ')
//		{
//			i++;
//		}
//		str.erase(0, i);
//		cout << str << endl;
//	}
//	else if (trimType == enTrim::Right)
//	{
//		int size = str.length() - 1;
//		int i = 0;
//		while (str[size - i] == ' ')
//		{
//			i++;
//		}
//		str.erase(str.length() - i, str.length());
//		cout << str << endl;
//	}
//}

string TrimLeftString(string str, char delimeter)
{
	int i = 0;
	while (str[i] == delimeter)
	{
		i++;
	}
	str.erase(0, i);
	return str;
	//cout << str << endl;
}
string TrimRightString(string str, char delimeter)
{
	int size= str.length() - 1;
	int i = 0;
	while (str[size-i] == delimeter)
	{
		i++;
	}
	str.erase(str.length()-i, str.length());
	return str;
	//cout << str << endl;
}
string TrimAllString(string str, char delimeter)
{
	string word;
	
	str = TrimLeftString(str, delimeter);
	str = TrimRightString(str, delimeter);
	return str;
	/*while (str.find(delimeter) != -1)
	{
		word = str.substr(0, str.find(delimeter));
		if (word != "")
		{
			cout << word << " ";
		}
		str.erase(0, str.find(delimeter) + 1);
	}
	if (str != "")
		cout << str << endl;*/
}
 

int main()
{
	//       Mohammad Abu-Hadhoud @ProgrammingAdvices     
	string str = readString();

	
	//TrimRightString(str, ' ');
	//TrimAllString(str, ' ');

	cout << "\n================================================\n";
	cout << "Trim Left  = "; cout << TrimLeftString(str, ' ')<<endl;
	cout << "Trim Right = "; cout << TrimRightString(str, ' ') << endl;
	cout << "Trim       = "; cout << TrimAllString(str, ' ')<<endl;
	cout << "================================================\n";

	
	//cout << "\n============\n";
	//TrimString(str, ' ');
	//cout << "\n============\n";
	//TrimString(str, ' ', Right);
	//cout << "\n============\n";
	//TrimString(str, ' ', Left);

	system("pause>0");
	return main();

}