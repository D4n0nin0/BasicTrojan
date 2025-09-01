#include<windows.h>
#pragma comment (lib, "user32.lib")

int main (VOID){
    MessageBox(NULL,
                "The Wold Is Ugly, Im the Darkness",
                "MZ8K",
                MB_ICONEXCLAMATION | MB_OK);
    return 0;
}