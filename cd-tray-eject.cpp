//a simple c++ tool for ejecting cd tray on a victim pc or laptop
//tool name: krishpranav
//tool name: cd-tray-ejceter

//imports
#include <stdio.h>
#include <Windows.h>

using namespace std;

int main(){
  msiSendString("set cdaudio tray open", NULL, NULL, NULL);
  printf("Cd Tray Opened Successfully!")
  getchar();
  return EXIT_SUCCESS;
}
