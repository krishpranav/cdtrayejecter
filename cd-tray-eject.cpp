//a simple c++ tool for ejecting cd tray on a laptop or pc
//tool author: krishpranav
//tool name: cd-tray-ejecter
//programming language used: c++

//imports 
#include <Windows.h>
#include <stdio.h>

using namespace std;

int main(){
	msiSendString("set cdaudio tray open", NULL, NULL, NULL);
	printf("cd tray opened successfully")
	getchar();
	return EXIT_SUCCESS;
}
