#include <iostream>

void task_1(){
	std::cout << "Enter heigth: ";
	int a;
	std::cin >> a; 
	std::cout << "Enter weight: ";
	int b;
	std::cin >> b;
	std::cout << "P = 2 * (a + b) = " << 2 * (a + b) << std::endl;
	std::cout << "S = a * b = " << a * b << std::endl;
}

void task_2(){
	std::cout << "Indicate the amount in rubles: ";
	int ru;
	std::cin >> ru;
	const int dol = 99;
	std::cout << "Translation: " << static_cast<double>(ru / dol) << std::endl;
}

void task_3(){
	int random = std::rand() % 100;
	std::cout << "Guess the random number: ";
	int num;
	std::cin >> num;
	if(random == num){
		std::cout << "True" << std::endl;
	} else{
		std::cout << "Try again" << std::endl;
	}
}

void task_4(){
	std::cout << "Enter symbol: ";
	char symbol;
	std::cin >> symbol;
    std::cout << "Symbol: " << static_cast<int>(symbol) << std::endl;
    std::cout << "Symbol: " << static_cast<int>(symbol + 1) << std::endl;

}

void task_5(){
	std::cout << "Enter min: ";
    int time;
    std::cin >> time;
    std::cout << "It's " << time / 60 << "hour" << std::endl;  
}

void task_6(){
    std::cout << "Enter number: ";
    double number;
    std::cin >> number;
    bool index1 = (number >= 0 && number <= 10);
    bool index2 = (number >= 5 && number <= 15);
    
    if (index1 && index2) {
        std::cout << "The number belongs to intervals simultaneously [0, 10] and [5, 15]" << std::endl;
    } else {
        std::cout << "The number does not belong to both intervals" << std::endl;
    }

}

void task_7(){
	int x = 3; 
	int y = 5;
    std::cout << "x = " << x << ", y = " << y << std::endl;
    
    int z = x; 
    x = y;
    y = z;
    std::cout << "After: x = " << x << ", y = " << y << std::endl;
}

void task_8(){
	std::cout << "Enter number1: ";
	int a;
	std::cin >> a;
	std::cout << "Enter number2: ";
	int b;
	std::cin >> b;
	std::cout << "Enter number3: ";
	int c;
	std::cin >> c;
	std::cout << "Arithmetic mean: " << static_cast<int>((a + b + c )/ 3) << std::endl;
	std::cout << "Arithmetic mean: " << static_cast<float>((a + b + c )/ 3) << std::endl;
}

void task_9(){
	std::cout << "Enter number1: ";
	int a;
	std::cin >> a;
	std::cout << "Enter number2: ";
	int b;
	std::cin >> b;
	std::cout << "a * x + b = 0" << std::endl;
	std::cout << "a * x = - b" << std::endl;
	std::cout << "x = -b / a" << std::endl;
	std::cout << "x = " << -b / a << std::endl;
}

void task_10(){
	std::cout << "Enter your name: ";
	std::string name;
	std::cin >> name;
	std::cout << "Enter your age: ";
	int age;
	std::cin >> age;
	std::cout << "Enter your favourite number: ";
	int num;
	std::cin >> num;
	std::cout << "Hello, " << name << "! Your age is " << age << ", and your favourite number is " << num << std::endl;
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
