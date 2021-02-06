//a simple c++ tool for ejecting a cd tray on a pc or laptop
//tool author: krishpranav
//use this for fun purpose
//github.com/krishpranav

//imports
#include <Windows.h>
#include <stdio.h>

using namespace std;

//main function
int main() {
	//function to open the cd tray
	msiSendString("set cdaudio tray open", NULL, NULL, NULL);
	//it will print after the cd tray opened
	printf("cd tray opened successfully");
	getchar();
	return EXIT_SUCCESS;
}