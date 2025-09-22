#include <iostream>

void task_1(){
	int a = 7;
	int b = 2;
	std::cout << "a / b: " << a / b << std::endl;
	std::cout << "a % b: " << static_cast<float>(a / b) << std::endl;
}

void task_2(){
	std::cout << "Enter integer: ";
	int integer;
	std::cin >> integer;
	std::cout << "integer: " << static_cast<double>(integer); 
}

void task_3(){
	const double GRAVITY = 9.8;
}

void task_4(){
	std::cout << "Enter grade from 1 to 5: ";
    int grade; 
    std::cin >> grade;
	if(grade <=5){
		std::cout << "Grade: " << grade << std::endl;
	} else{
		std::cout << "Enter grade from 1 to 5: ";
	}
    
}

void task_5() {
    std::cout << "Enter number 1: ";
    int number1;
    std::cin >> number1;
    std::cout << "Enter number 2: ";
    int number2;
    std::cin >> number2;
    double mean = (number1 + number2) / 2.0;
    std::cout << "Arithmetic mean: " << mean << std::endl;
}

void task_6(){
	const int MAX_SCORE = 1000;
}

void task_7(){
	char symbol = 'A';
	int num = symbol;
	std::cout << "Symbol: " << num << std::endl;
}

void task_8(){
	std::cout << "Enter fractional number: ";
	int fractional;
	std::cin >> fractional;
}

void task_9(){
	int a = 100; 
	int b = 3; 
	std::cout << "a / b" << static_cast<int>(a / b) << std::endl;
	std::cout << "a / b" << static_cast<double>(a / b) << std::endl;
}

void task_10() {
    double fractional;
    std::cout << "Enter fractional number: ";
    std::cin >> fractional;  
    int integer_part = static_cast<int>(fractional); 
    std::cout << "Integer part: " << integer_part << std::endl;
}

int main(){
	task_1();
	task_2();
	task_3();
	task_4();
	task_5();
	task_6();
	task_7();
	task_8();
	task_9();
	task_10();

	return 0; 

}
