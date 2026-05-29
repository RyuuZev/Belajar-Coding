#include <windows.h>
#include <cstdlib>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    
    ShowWindow(GetConsoleWindow(), SW_HIDE);

    int respon = MessageBoxA(
        NULL, 
        "Apakah Anda yakin ingin mematikan komputer sekarang?", 
        "Konfirmasi Shutdown", 
        MB_OKCANCEL | MB_ICONWARNING
    );

    if (respon == IDOK) {
        system("c:\\windows\\system32\\shutdown /s /t 0 /f");
    } 

    return 0;
}
