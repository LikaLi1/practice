#include <iostream>
#ifdef _WIN32
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <io.h>
#include <fcntl.h>
#endif
int main(){
#ifdef _WIN32
    setlocale(LC_ALL, "");
    _setmode(_fileno(stdout), _O_U16TEXT);
    _setmode(_fileno(stderr), _O_U16TEXT);
    _setmode(_fileno(stdin), _O_U16TEXT);
#else
    std::ios_base::sync_with_stdio(false)
        std::wcout.imbue(std::local("en_US.UTF-8"));
    std::wcin.imbue(std::local("en_US.UTF-8"));
#endif
    std::wcout << L"Счётчик от 1 до 10" << std::endl << std::endl;
    for (int i = 1; i <= 10; ++i) {
        std::wcout << i << std::endl;
    }
    std::wcout << std::endl << std::endl;

    std::wcout << L"Счётчик от 10 до 1" << std::endl << std::endl;
    for (int d = 10; d >= 1; --d) {
        std::wcout << d << std::endl;
    }
    std::wcout << std::endl << std::endl;
        return 0;
}
