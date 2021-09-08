#include <iostream>
#include <cstring>
#include <time.h>
using namespace std;

int main()
{
	srand(time(NULL));
	//char mystring[] = "string";
	//cout << mystring << " has " << sizeof(mystring) << "characters.\n";
	//for (int i = 0; i < sizeof(mystring); i++)
	//	cout << static_cast<int>(mystring[i]) << " ";
	//mystring[1] = 'p';
	//cout << mystring << endl;
	//char name[255];
	//cout << "Enter your name: ";
	//cin.getline(name, 255);
	//cout << name << endl;
	//char text[] = "Print this!";
	//char dest[50];
	//strcpy_s(dest, text);
	//cout << dest << endl;

	//char name[15] = "Artem";
	//cout << "My name is " << name << endl;
	//cout << name << " has " << strlen(name) << " letters.\n";
	//cout << name << " has " << sizeof(name) << " characters in the array.\n";

	//char name;
	//int a = 97;
	//for (int i = 0; i < 26; i++)
	//{
	//	name = (char)a++;
	//	cout << name << " ";
	//}

	char name[27];
	for (int i = 0; i <= 27; i++)
		name[i] = rand() % 26 + 65;

		
	return 0;
}