//a simple c++ tool for ejecting cd tray on a traget pc or laptop
//tool author: krishpranav
//tool name: cd-tray-ejecter

//imports
#include <stdio.h>
#include <Windows.h>

using namespace std;

int main(){
  msiSendString("set cdaudio tray open", NULL, NULL, NULL);
  printf("cd tray opened successfully")
  getchar();
  return EXIT_SUCCESS
}
