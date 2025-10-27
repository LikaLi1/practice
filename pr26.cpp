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
    int num_1;
    int num_2;
    std::wcout << L"Введите первое число: ";
    std::wcin >> num_1;
    std::wcout << L"Введите второе число: ";
    std::wcin >> num_2;

    int start = std::min(num_1, num_2);
    int end = std::max(num_1, num_2);
    int count = end - start + 1;

    for (int i = start; i <= end; ++i) {
        std::wcout << i << " ";
    }
    std::wcout << std::endl;

    std::wcout << count << std::endl;

    std::wcout << std::endl;
        return 0;
}
