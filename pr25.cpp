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
    for(wchar_t l = L'A'; l <= L'Z'; ++l){
        std::wcout << static_cast<wchar_t>(l);
    }
    std::wcout << std::endl;
    for(wchar_t l = L'a'; l <= L'z'; ++l){
        std::wcout << static_cast<wchar_t>(l);
    }
    std::wcout << std::endl;
    for(wchar_t r = L'А'; r <= L'Я'; ++r){
        std::wcout << static_cast<wchar_t>(r);
        if (r == L'Е'){
            std::wcout << L'Ё';
        }
    }
    std::wcout << std::endl;
    for(wchar_t r = L'а'; r <= L'я'; ++r){
        std::wcout << static_cast<wchar_t>(r);
        if (r == L'е'){
            std::wcout << L'ё';
        }
    }
    std::wcout << std::endl;
        return 0;
}
