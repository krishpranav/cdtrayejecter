//a simple c++ tool for ejecting a cd tray on a pc or laptop
//tool author: krishpranav
//use this for fun purpose
//github.com/krishpranav

//imports
#include <Windows.h>
#include <stdio.h>

using namespace std;

int main() {
	msiSendString("set cdaudio tray open", NULL, NULL, NULL);
	printf("cd tray opened successfully\n");
	getchar();
	return EXIT_SUCCESS;
}