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
    std::ios_base::sync_with_stdio(false);
        std::wcout.imbue(std::local("en_US.UTF-8"));
    std::wcin.imbue(std::local("en_US.UTF-8"));
#endif
    std::wcout << L"Введите первое число: ";
    int a;
    std::wcin >> a;

    std::wcout << L"Введите второе число: ";
    int b;
    std::wcin >> b;

    int start = (a < b) ? a : b;
    int end = (a > b) ? a : b;
    int interval = start;

    std::wcout << L"Интервал начинается с " << start << L" и до " << end << L": ";

    while(interval <= end){
        std::wcout << interval << L"; ";
        ++interval;
    }

    std::wcout << std::endl;

    return 0;
}

