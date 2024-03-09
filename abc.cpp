#include <windows.h>

int main() {
    // Path to the MP3 file
    LPCWSTR filePath = L"D:\\abc.mp3";

    // Open the MP3 file with the default media player
    ShellExecuteW(NULL, L"open", filePath, NULL, NULL, SW_SHOWNORMAL);

    return 0;
}

