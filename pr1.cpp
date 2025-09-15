#include <iostream>

void greetUser(std::string name){
    
    std::cout << "Hello, " << name << "! Welcome!" << std::endl;
}

int main(){
    std::string name = "kate";
    greetUser(name);
    return 0;
}
