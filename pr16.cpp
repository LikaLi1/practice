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


        switch (num) {
        case 1:
            std::wcout << L"Вот какие варианты мы можем предложить: \n\n";
            std::wcout << L"Цена за один кг 'Konti Живинка, желейные со вкусом арбуза' - 400 рублей\n\n";
            std::wcout << L"Цена за один кг 'Konti Золотая лилия' - 500 рублей\n\n";
            std::wcout << L"Цена за один кг 'Milky Way minis' - 900 рублей\n\n";
            break;

        case 2:
            std::wcout << L"Вот какие варианты мы можем предложить: \n\n";
            std::wcout << L"Цена за один кг 'Konti Живинка, желейные со вкусом арбуза' - 800 рублей\n\n";
            std::wcout << L"Цена за один кг 'Konti Золотая лилия' - 1000 рублей\n\n";
            std::wcout << L"Цена за один кг 'Milky Way minis' - 1800 рублей\n\n";
            break;

        case 3:
            std::wcout << L"Вот какие варианты мы можем предложить: \n\n";
            std::wcout << L"Цена за один кг 'Konti Живинка, желейные со вкусом арбуза' - 1200 рублей\n\n";
            std::wcout << L"Цена за один кг 'Konti Золотая лилия' - 1500 рублей\n\n";
            std::wcout << L"Цена за один кг 'Milky Way minis' - 2700 рублей\n\n";
            break;

        case 4:
            std::wcout << L"Вот какие варианты мы можем предложить: \n\n";
            std::wcout << L"Цена за один кг 'Konti Живинка, желейные со вкусом арбуза' - 1600 рублей\n\n";
            std::wcout << L"Цена за один кг 'Konti Золотая лилия' - 2000 рублей\n\n";
            std::wcout << L"Цена за один кг 'Milky Way minis' - 3600 рублей\n\n";
            break;

        case 5:
            std::wcout << L"Вот какие варианты мы можем предложить: \n\n";
            std::wcout << L"Цена за один кг 'Konti Живинка, желейные со вкусом арбуза' - 2000 рублей\n\n";
            std::wcout << L"Цена за один кг 'Konti Золотая лилия' - 2500 рублей\n\n";
            std::wcout << L"Цена за один кг 'Milky Way minis' - 4500 рублей\n\n";
            break;

        case 6:
            std::wcout << L"Вот какие варианты мы можем предложить: \n\n";
            std::wcout << L"Цена за один кг 'Konti Живинка, желейные со вкусом арбуза' - 2400 рублей\n\n";
            std::wcout << L"Цена за один кг 'Konti Золотая лилия' - 3000 рублей\n\n";
            std::wcout << L"Цена за один кг 'Milky Way minis' - 5600 рублей\n\n";
            break;

        case 7:
            std::wcout << L"Вот какие варианты мы можем предложить: \n\n";
            std::wcout << L"Цена за один кг 'Konti Живинка, желейные со вкусом арбуза' - 2800 рублей\n\n";
            std::wcout << L"Цена за один кг 'Konti Золотая лилия' - 3500 рублей\n\n";
            std::wcout << L"Цена за один кг 'Milky Way minis' - 6300 рублей\n\n";
            break;

        case 8:
            std::wcout << L"Вот какие варианты мы можем предложить: \n\n";
            std::wcout << L"Цена за один кг 'Konti Живинка, желейные со вкусом арбуза' - 3200 рублей\n\n";
            std::wcout << L"Цена за один кг 'Konti Золотая лилия' - 4000 рублей\n\n";
            std::wcout << L"Цена за один кг 'Milky Way minis' - 7200 рублей\n\n";
            break;

        case 9:
            std::wcout << L"Вот какие варианты мы можем предложить: \n\n";
            std::wcout << L"Цена за один кг 'Konti Живинка, желейные со вкусом арбуза' - 3600 рублей\n\n";
            std::wcout << L"Цена за один кг 'Konti Золотая лилия' - 4500 рублей\n\n";
            std::wcout << L"Цена за один кг 'Milky Way minis' - 8100 рублей\n\n";
            break;

        case 10:
            std::wcout << L"Вот какие варианты мы можем предложить: \n\n";
            std::wcout << L"Цена за один кг 'Konti Живинка, желейные со вкусом арбуза' - 4000 рублей\n\n";
            std::wcout << L"Цена за один кг 'Konti Золотая лилия' - 5000 рублей\n\n";
            std::wcout << L"Цена за один кг 'Milky Way minis' - 9000 рублей\n\n";
            break;

        default:
            std::wcout << L"Ошибка";
            break;
        }




        enum Company {watermelon = 0, Golden = 1, Milky = 2};
        int com;

        std::wcout << L"Введите свой выбор(Konti Zhivinka watermelon-flavored jelly candies - 0, Konti Golden Lily - 1, Milky Way minis - 2): ";
        std::wcin >> com;


        Company company = static_cast<Company>(com);

    }
    return 0;
}

