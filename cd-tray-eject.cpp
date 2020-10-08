//a simple c++ tool for ejecting cd tray on a pc or a laptop
//tool author: krish pranav


//imports
#include <Windows.h>
#include <stdio.h>

using namespace std;

int main(){
	mciSendString("set cdaudio tray open", NULL, NULL, NULL);
	printf("cd tray opened successfully")
	getchar();
	return EXIT_SUCCESS;
	
	
}

