#include <iostream>

void findMax(int a, int b){
    if(a > b){
    std::cout << "The largest number is: " << a << std::endl;
} if (b > a){
    std::cout << "The largest number is: " << b << std::endl;
    }
}
    
int main(){
    findMax(20,40);
    return 0;  
}
