#include <iostream>

void task_1(){
	std::cout << "Enter number: ";
	int a;
	std::cin >> a;
	 if(a >= 0){
		std::cout << "Your number is positive" << std::endl;
	 }  else {
		std::cout << "Your number is not positive" << std::endl;
	 }
}

void task_2(){
	std::cout << "Enter number: ";
	int a;
	std::cin >> a;
	if(a % 2 == 0){
		std::cout << "Your number is even" << std::endl;
	} else {
		std::cout << "Your number is not even" << std::endl;
	}
}

void task_3(){
	std::cout << "Enter first number: ";
	int a;
	std::cin >> a;
	std::cout << "Enter second number: ";
	int b;
	std::cin >> b;
	if(a > b){
		std::cout << "a > b: " << (a > b) << std::endl;
	} if(a < b){
		std::cout << "a < b: " << (a < b) << std::endl;
	} if(a == b){ 
		std::cout << "a = b: " << (a == b) << std::endl;
	}
	
}

void task_4(){
	std::cout << "Enter number: ";
	int a;
	std::cin >> a;
	if(a % 5 == 0){
		std::cout << "Divide your number by 5" << std::endl;
	} else {
		std::cout << "Your number is not divisible by 5" << std::endl;
	}
}

void task_5(){
	std::cout << "Enter your age: ";
	int age;
	std::cin >> age;
	if(age >= 18){
		std::cout << "You are already 18" << std::endl;
	} else{
		std::cout << "You are not 18." << std::endl;
	}
}

void task_6(){
	std::cout << "Enter number: ";
	int a;
	std::cin >> a;
	 if(a < 0){
		std::cout << "Your number is negative" << std::endl;
	 }  else {
		std::cout << "Your number is not negative" << std::endl;
	 }
}

void task_7(){
	std::cout << "Enter an ASCII number to check if it is the character 'A': ";
	int a;
	std::cin >> a;
	 if(a == 65){
		std::cout << "Your number = symbol 'A'" << std::endl;
	 }  else {
		std::cout << "Your number != the symbol 'A'" << std::endl;
	 }
}

void task_8(){
	std::cout << "Enter first number: ";
	int a;
	std::cin >> a;
	std::cout << "Enter second number: ";
	int b;
	std::cin >> b;
	if(a >= 0 && b >=0){
		std::cout << "Both numbers entered are positive" << std::endl;
	} else{
		std::cout << "The numbers entered are not positive" << std::endl;
	}
}

void task_9(){
	std::cout << "Enter first number: ";
	int a;
	std::cin >> a;
	std::cout << "Enter second number: ";
	int b;
	std::cin >> b;
	if(a == 0 || b ==0){
		std::cout << "One of the entered numbers is zero." << std::endl;
	} else{
		std::cout << "None of the numbers entered is equal to zero." << std::endl;
	}
}

void task_10(){
	std::cout << "Enter : ";
	int a;
	std::cin >> a;
	 if(a == 10){
		std::cout << "Your number = 10" << std::endl;
	 }  else {
		std::cout << "Your number != 10" << std::endl;
	 }
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
