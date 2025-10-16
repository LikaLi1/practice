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

    std::wcout << L"Введите 10 чисел с клавиатуры: ";
    int c = 10;
    while (c > 0){
        int num;
        std::wcin >> num;

        switch (num) {

        case 1:
            std::wcout << L"один";
            break;

        case 2:
            std::wcout << L"два";
            break;

        case 3:
            std::wcout << L"три";
            break;

        case 4:
            std::wcout << L"четыре";
            break;

        case 5:
            std::wcout << L"пять";
            break;

        case 6:
            std::wcout << L"шесть";
            break;

        case 7:
            std::wcout << L"семь";
            break;

        case 8:
            std::wcout << L"восемь";
            break;

        case 9:
            std::wcout << L"девять";
            break;

        case 10:
            std::wcout << L"десять";
            break;

        default:
            std::wcout << L"ошибка";
            break;
        }
        std::wcout << std::endl;
        --c;
    }
    
    
    std::wcout << L"Сумма чисел от 2 до 5, включая эти числа";
    int a = 0;
    while(2 <= a >= 5 ){
        
    }
        
        
    return 0;
}
