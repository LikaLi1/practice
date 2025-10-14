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
    std::wcout << L"Введите число от 100-999: ";
    int number;
    std::wcin >> number;

    if (number < 100 || number > 999){
        std::wcout << L"Введите верное число: ";
            return 1;
    }

    int first_num = number / 100;
    int double_num = number % 100 ;
    int second_num = double_num % 10;
    int third_num = double_num / 10;


        switch (first_num) {
        case 1:
            std::wcout << L"сто";
            break;

        case 2:
            std::wcout << L"двести";
            break;

        case 3:
            std::wcout << L"тристо";
            break;

        case 4:
            std::wcout << L"четыреста";
            break;

        case 5:
            std::wcout << L"пятьсот";
            break;

        case 6:
            std::wcout << L"шесот";
            break;

        case 7:
            std::wcout << L"семьсот";
            break;

        case 8:
            std::wcout << L"восемсот";
            break;

        case 9:
            std::wcout << L"девятьсот";
            break;

        default:
            std::wcout << L"ошибка /n";
            break;
        }


        if(third_num == 1 && second_num != 0){
            switch (second_num) {

            case 1:
                std::wcout << L"одиннадцать";
                break;

            case 2:
                std::wcout << L"двенадцать";
                break;

            case 3:
                std::wcout << L"тринадцать";
                break;

            case 4:
                std::wcout << L"четырнадцать";
                break;

            case 5:
                std::wcout << L"пятнадцать";
                break;

            case 6:
                std::wcout << L"шестнадцать";
                break;

            case 7:
                std::wcout << L"семнадцать";
                break;

            case 8:
                std::wcout << L"восемнадцать";
                break;

            case 9:
                std::wcout << L"девятнадцать";
                break;

            default:
                std::wcout << L"ошибка /n";
                break;
            }
        } else {
        switch (second_num) {

        case 2:
            std::wcout << L"двадцать";
            break;

        case 3:
            std::wcout << L"тридцать";
            break;

        case 4:
            std::wcout << L"сорок";
            break;

        case 5:
            std::wcout << L"пятьдесят";
            break;

        case 6:
            std::wcout << L"шестьдесят";
            break;

        case 7:
            std::wcout << L"семьдесять";
            break;

        case 8:
            std::wcout << L"восемьдесят";
            break;

        case 9:
            std::wcout << L"девяносто";
            break;

        default:
            std::wcout << L"ошибка /n";
            break;
        }
    }

        switch (third_num) {
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

        default:
            std::wcout << L"ошибка /n";
            break;
        }



        return 0;
    }



