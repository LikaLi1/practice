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
    std::wcout<<L"Повторяющееся число" << std::endl << std::endl;
    int num;
    unsigned int numRepeat;
    std::wcout << L"Введите целое число: ";
    std::wcin >> num;
    std::wcout << L"Введите количество раз, сколько его надо повторить: ";
    std::wcin >> numRepeat;
    std::wcout << std::endl;
    std::wcout << L"Последовательность из повторяющегося числа" << std::endl;
    for (unsigned short i = 0; i< numRepeat; ++i){
        std::wcout << num << L", ";
    }
    if (numRepeat > 0){
        std::wcout << num;
    }
    else {
        std::wcout << L"Последовательнось не содержит чисел";
    }
    std::wcout << std::endl << std::endl;
        return 0;
}
