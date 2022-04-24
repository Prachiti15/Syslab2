#include <windows.h>

int WINAPI WinMain(HINSTANCE  hInstance, HINSTANCE preInstance,LPSTR cmd, int cmdshow)

          {
              printf("HINSTANCE =%d",hInstance);

              MessageBox(0,"First Program","hii",MB_OK);
              return 0;
          }