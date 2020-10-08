//a simple c++ tool for ejecting cd tray on a pc or a laptop
//tool author: krish pranav


//imports
#include <Windows.h>
#include <stdio.h>

using namespace std;

int main(){
<<<<<<< HEAD
	mciSendString("set cdaudio tray open", NULL, NULL, NULL);
	printf("cd tray opened successfully")
	getchar();
	return EXIT_SUCCESS;
	
	
=======
    mciSendString("set cdaudio tray open", NULL, NULL, NULL)
    printf("cd tray opened successfully");
    getchar();
    return EXIT_SUCCESS;
>>>>>>> 80a1e5ba916c418b4994d38ff2441d3a61cf1b80
}

