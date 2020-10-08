//a simple c++ tool for ejecting cd tray on a laptop or pc

//imports
#include <Windows.h>
#include <stdio.h>

using namespace std;

int main(){
    mciSendString("set cd audio tray open", NULL, NULL, NULL)
    printf("cd tray opened successfully");
    getchar();
    return EXIT_SUCESS;
}
