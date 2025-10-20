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
        int a = 400;
        int b = 500;
        int c = 900;

        enum Company {watermelon = 0, Golden = 1, Milky = 2};
        int com;

        std::wcout << L"Введите свой выбор: \n\n";
        std::wcout << L"0. Konti Живинка, желейные со вкусом арбуза - цена за один кг 'Konti Живинка, желейные со вкусом арбуза' - 400 рублей \n\n";
        std::wcout << L"1. Konti Золотая лилия - цена за один кг 'Konti Золотая лилия' - 500 рублей\n\n";
        std::wcout << L"2. Milky Way minis - цена за один кг 'Milky Way minis' - 900 рублей\n\n";

        std::wcout << std::endl;

        std::wcin >> com;

        if (com < 0 || com > 2) {
            std::wcout << L"Некорректный выбор. Попробуйте ещё раз.\n";
            continue;
        }

        Company company = static_cast<Company>(com);

        while(com){
            switch (company) {

            case watermelon:
                std::wcout << L"Цена за один килограмм - " << a * 1;
                std::wcout << L"Цена за два килограмма - " << a * 2;
                std::wcout << L"Цена за три килограмма - " << a * 3;
                std::wcout << L"Цена за четыре килограмма - " << a * 4;
                std::wcout << L"Цена за пять килограмм - " << a * 5;
                std::wcout << L"Цена за шесть килограмм - " << a * 6;
                std::wcout << L"Цена за семь килограмм - " << a * 7;
                std::wcout << L"Цена за восемь килограмм - " << a * 8;
                std::wcout << L"Цена за девять килограмм - " << a * 9;
                std::wcout << L"Цена за десять килограмм - " << a * 10;
                break;


            case Golden:
                std::wcout << L"Цена за один килограмм - ";
                std::wcout << L"Цена за два килограмма - ";
                std::wcout << L"Цена за три килограмма - ";
                std::wcout << L"Цена за четыре килограмма - ";
                std::wcout << L"Цена за пять килограмм - ";
                std::wcout << L"Цена за шесть килограмм - ";
                std::wcout << L"Цена за семь килограмм - ";
                std::wcout << L"Цена за восемь килограмм - ";
                std::wcout << L"Цена за девять килограмм - ";
                std::wcout << L"Цена за десять килограмм - ";
                break;

            case Milky:
                std::wcout << L"Цена за один килограмм - ";
                std::wcout << L"Цена за два килограмма - ";
                std::wcout << L"Цена за три килограмма - ";
                std::wcout << L"Цена за четыре килограмма - ";
                std::wcout << L"Цена за пять килограмм - ";
                std::wcout << L"Цена за шесть килограмм - ";
                std::wcout << L"Цена за семь килограмм - ";
                std::wcout << L"Цена за восемь килограмм - ";
                std::wcout << L"Цена за девять килограмм - ";
                std::wcout << L"Цена за десять килограмм - ";
                break;

            default:
                std::wcout << L"Ошибка";
                break;
            }
        }

    return 0;
}
