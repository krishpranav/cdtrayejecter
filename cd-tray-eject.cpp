//a simple c++ tool for ejecting cd tray
//tool author: krishpranav
//use this tool for legal purpose
//tool name: cdtrayejecter

//imports
#include <stdio.h>
#include <Windows.h>

using namespace std;

int main(){
    msiSendString("set cdaudio tray open", NULL, NULL, NULL);
    printf("cd tray opened successfully")
    getchar();
    return EXIT_SUCCESS;
}
