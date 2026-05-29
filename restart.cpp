#include <windows.h>
#include <cstdlib>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    
    ShowWindow(GetConsoleWindow(), SW_HIDE);

    int respon = MessageBoxA(
        NULL, 
        "Apakah Anda yakin ingin memulai ulang (RESTART) komputer sekarang?", 
        "Konfirmasi Restart",                                                  
        MB_OKCANCEL | MB_ICONQUESTION                                          
    );

    if (respon == IDOK) {
        system("c:\\windows\\system32\\shutdown /r /t 0 /f");
    } 

    return 0;
}
