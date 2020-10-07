//a simple c++ tool for ejeting cd tray on a laptop or a pc
//tool author: krishpranav

//imports
#include <stdio.h>
#include <Windows.h>

using namespace std;

int main(){
    mciSendString("set cd audio tray open", NULL, NULL, NULL);
    printf("cd tray opened successfully")
    getchar();
    return EXIT_SUCESS;
}