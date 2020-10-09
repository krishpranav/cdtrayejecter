//a simple c++ tool for ejecting cd tray on a laptop or pc
//tool author: krishpranav
//toolname: cd-tray-ejecter

//imports
#include <Windows.h>
#include <stdio.h>

using namespace std;

int main(){
	msiSendString("set cdaudo tray open");
	printf("cd tray opened successfully")
	getchar();
	return EXIT_SUCCESS;
}