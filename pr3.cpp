#include <iostream>

void isEven(int a){
    if(a % 2 != 0){
    std::cout << "Not an even number " << a << std::endl;
} if(a % 2 == 0){
    std::cout << "An even number " << a << std::endl;
    }
}
    
int main(){
    isEven(25);
    return 0;  
}
