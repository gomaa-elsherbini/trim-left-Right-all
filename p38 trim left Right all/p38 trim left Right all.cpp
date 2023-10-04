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

string TrimLeftString(string str)
{
	/*int i = 0;
	while (str[i] == ' ')
	{
		i++;
	}*/
	//str.erase(0, i);
	for (int i = 0; i < str.length(); i++)
	{
		if(str[i] != ' ')
			return str.substr(i, str.length()-i);
	}
	return "";
}
string TrimRightString(string str)
{
	//int size= str.length() - 1;
	//int i = 0;
	//while (str[size-i] == ' ')
	//{
	//	i++;
	//}
	////str.erase(str.length()-i, str.length());
	for (int i = str.length()-1; i >=0 ; i--)
	{
		if (str[i] != ' ')
			return str.substr(0, (i + 1));
	}
	return "";
}
string TrimAllString(string str)
{
	return TrimRightString(TrimLeftString(str));
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
	//string str = readString();
	string str = "    Mohammad Abu-Hadhoud    ";

	
	//TrimRightString(str, ' ');
	//TrimAllString(str, ' ');

	cout << "\n================================================\n";
	cout << "Trim Left  = " << TrimLeftString(str) <<endl;
	cout << "Trim Right = " << TrimRightString(str) << endl;
	cout << "Trim       = " << TrimAllString(str) <<endl;
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