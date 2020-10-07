//imports
//a simple c++ tool for ejecting cd tray
#include <Windows.h>
#include <stdio.h>

using namespace std;

int main()
{
    mciSendString("set cd audio door open", NULL, NULL, NULL);
    printf("Cd Tray Opened SuccessFully")
    getchar();
    return EXIT_SUCESS;
}
