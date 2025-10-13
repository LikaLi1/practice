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
    std::wcout << L"Введите номер недели: \n\n";
    int number;
    std::wcin >> number;

    switch (number) {
    case 0:
        std::wcout<< L"Понедельник \n\n";
        break;

    case 1:
        std::wcout<< L"Вторник \n\n";
        break;

    case 2:
        std::wcout<< L"Четверг \n\n";
        break;

    case 3:
        std::wcout<< L"Пятница \n\n";
        break;

    case 4:
        std::wcout<< L"Суббота \n\n";
        break;

    case 5:
        std::wcout<< L"Воскресенье \n\n";
        break;

    case 6:
        std::wcout<< L"Понедельник \n\n";
        break;
    default:
        std::wcout<< L"Ошибка \n\n";
        break;
    }


        std::wcout << L"Введите номер месяца: \n\n";
        int mounth;
        std::wcin >> mounth;

            switch (mounth) {
        case 0:
            std::wcout<< L"Январь \n\n";
            break;

        case 1:
            std::wcout<< L"Февраль \n\n";
            break;

        case 2:
            std::wcout<< L"Март \n\n";
            break;

        case 3:
            std::wcout<< L"Апрель \n\n";
            break;

        case 4:
            std::wcout<< L"Май \n\n";
            break;

        case 5:
            std::wcout<< L"Июнь \n\n";
            break;

        case 6:
            std::wcout<< L"Июль \n\n";
            break;

        case 7:
            std::wcout<< L"Август \n\n";
            break;

        case 8:
            std::wcout<< L"Сентябрь \n\n";
            break;

        case 9:
            std::wcout<< L"Октябрь \n\n";
            break;

        case 10:
            std::wcout<< L"Ноябрь \n\n";
            break;

        case 11:
            std::wcout<< L"Декабрь \n\n";
            break;
        default:
            std::wcout<< L"Ошибка \n\n";
            break;
        }
        switch (mounth) {
        case 12: case 1: case 2:
            std::wcout<< L"Зима \n\n";
            break;

        case 3: case 4: case 5:
            std::wcout<< L"Весна \n\n";
            break;

        case 6: case 7: case 8:
            std::wcout<< L"Лето \n\n";
            break;

        case 9: case 10: case 11:
            std::wcout<< L"Осень \n\n";
            break;

        default:
            std::wcout<< L"Ошибка \n\n";
            break;
        }

        std::wcout << L"Введите размер отрезка в миллиметрах: ";
        int segment;
        std::wcin >> segment;

        enum SizeOn {millimeter = 0, centimeter = 1, decimeter = 2, meter = 3, kilometer = 4};
        int sizeInput;

        std::wcout << L"Введите единицу измерения(0 - миллиметр; 1 - сантиметр; 2 - дециметр; 3 - метр; 4 - километр): ";
        std::wcin >> sizeInput;

        if (sizeInput < millimeter || sizeInput > kilometer){
            std::wcout<< L"Ошибка \n\n";
            return 1;
        }

        SizeOn size = static_cast<SizeOn>(sizeInput);

        double converted = 0.0;
        switch (size) {
        case millimeter:
            converted = segment / 1000.0;
            std::wcout << L"Вы выбрали миллиметры" << converted << L"мм\n";
            break;

        case centimeter:
            converted = segment / 10.0;
            std::wcout << L"Вы выбрали сантиметры" << converted << L"см\n";
            break;

        case decimeter:
            converted = segment / 100.0;
            std::wcout << L"Вы выбрали дециметры" << converted << L"дц\n";
            break;

        case meter:
            converted = segment / 1000.0;
            std::wcout << L"Вы выбрали метры" << converted << L"м\n";
            break;

        case kilometer:
            converted = segment * 1000.0;
            std::wcout << L"Вы выбрали километры" << converted << L"км\n";
            break;

        default:
            std::wcout<< L"Ошибка \n\n";
            break;
        }
    
        enum Suit {spades = 0, clubs = 1, diamonds = 2, hearts = 3};

        std::wcout << L"Введите масть карты (0 - пики, 1 - трефы, 2 - бубны, 3 - черви): ";
        int suitInput;
        std::wcin >> suitInput;

        if (suitInput < 0 || suitInput > 3) {
            std::wcout << L"Ошибка\n";
            return 1;
        }

        Suit suit = static_cast<Suit>(suitInput);

        std::wcout << L"Введите достоинство карты (2-10, 11 - валет, 12 - дама, 13 - король, 14 - туз): ";
        int rank;
        std::wcin >> rank;

        if (rank < 2 || rank > 14) {
            std::wcout << L"Ошибка\n";
            return 1;
        }

        std::wstring suitName;
        switch (suit) {
        case spades:
            suitName =  L"Пик";
            break;

        case clubs:
            suitName = L"Треф";
            break;

        case diamonds:
            suitName = L"Бубен";
            break;

        case hearts:
            suitName = L"Червей";
            break;

        default:
            std::wcout << L"Ошибка";
            return 1;
            break;
        }


        std::wstring rankName;

            switch(rank) {
            case 2:
                rankName = L"Двойка";
                break;

            case 3:
                rankName = L"Тройка";
                break;

            case 4:
                rankName = L"Четверка";
                break;

            case 5:
                rankName = L"Пятерка";
                break;

            case 6:
                rankName = L"Шестерка";
                break;

            case 7:
                rankName = L"Семерка";
                break;

            case 8:
                rankName = L"Восьмерка";
                break;

            case 9:
                rankName = L"Девятка";
                break;

            case 10:
                rankName = L"Десятка";
                break;

            case 11:
                rankName = L"Валет";
                break;

            case 12:
                rankName = L"Дама";
                break;

            case 13:
                rankName = L"Король";
                break;

            case 14:
                rankName = L"Туз";
                break;

            default:
                std::wcout << L"Ошибка";
                return 1;
                break;
            }

            std::wcout << rankName << L" " << suitName << std::endl;


    std::wcout<<L"ДОБРО ПОЖАЛОВАТЬ В C++\n\n";
    return 0;
    }
