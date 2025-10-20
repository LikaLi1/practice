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
    std::wcout << L"Введите вес конфет(кг): ";
    int weight = 10;

    while (weight > 0) {
        int num;
        std::wcin >> num;

        int a = 400;
        int  b = 500;
        int c = 900;

        enum Company {watermelon = 0, Golden = 1, Milky = 2};
        int com;

        std::wcout << L"Введите свой выбор(Konti Живинка, желейные со вкусом арбуза - 0, Konti Золотая лилия - 1, Milky Way minis - 2): ";
        std::wcin >> com;


        Company company = static_cast<Company>(com);

        switch (company) {
        case watermelon:
            std::wcout << L"Konti Живинка, желейные со вкусом арбуза за " << num << "кг стоит " << a * num;
            break;

        case Golden:
            std::wcout << L"Konti Золотая лилия за " << num << "кг стоит " << b * num;
            break;

        case Milky:
            std::wcout << L"Milky Way minis за " << num << "кг стоит " << c * num;
            break;
        default:
            std::wcout << L"Ошибка";
            break;
        }


    }
    return 0;
}

