//a simple c++ tool for ejecting cd tray on a pc or a laptop
//tool name: cd-tray-ejecter
//language used: c++
//tool author: krishpranav

#include <stdio.h>
#include <Windows.h>

using namespace std;

int main(){
  msiSendString("set cdaudio tray open", NULL, NULL, NULL);
  printf("The Cd Tray Opened SuccessFully")
  getchar();
  return EXIT_SUCCESS;
}
