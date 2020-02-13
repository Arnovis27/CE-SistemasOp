#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <Winuser.h>
using namespace std;

int main()

{
	cout<<"\nAbriendo A5.txt";
	system("notepad.exe  C:\\D3\\D31\\A5.txt");
	//system("notepad.exe  C:\\Users\\Arnovis\\Documents\\UTB\\Sistemas Operativos\\CE-SistemasOp\\D3\\D31\\A5.txt"); Me funciona ASI  
	cout<<"\nCerrando :c";
	return 0;

}