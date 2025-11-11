#include <iostream>

int main(){
            for (int i = 1; i <= 4; i++)
            {
                for (int j = 0; j < 4 - i; j++){
                    std::cout << "   " << std::endl;
                }
                for (int k = 0; k < 2 * i - 1; k++){
                    std::cout << " *" << std::endl;
                }
                std::cout << std::endl;
            }
        return 0;
        }
