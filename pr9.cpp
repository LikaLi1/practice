#include <iostream>

void task_1(){
	std::cout << "Enter number: ";
	int a;
	std::cin >> a;
	 if(a >= 0 && a % 10){
		std::cout << "Your number is positive and double digit" << std::endl;
	} else {
		std::cout << "Your number is not positive" << std::endl;
	}
}

void task_2(){
  std::cout << "Enter number: ";
	int a;
	
}

void task_3(){
	std::cout << "Enter password: ";
	std::string pass;
	std::cin >> pass;

    if (pass.length() < 8) {
        std::cout << "The password must be at least 8 characters" << std::endl;
        return;
    }

    bool num = false;
    for(){
        if(){
            num = true;
            break;
        }
    }

    if(num){
        std::cout << "Password verified!" << std::endl;
    } else{
        std::cout << "The password must contain at least one number" << std::endl;
    }
}


void task_4(){
	std::cout << "Enter side 1: ";
	int a;
	std::cin >> a;
    std::cout << "Enter side 2: ";
	int b;
	std::cin >> b;
    std::cout << "Enter side 3: ";
	int c;
	std::cin >> c;
    if(a + b > c || a + c > b || b + c > a){
        std::cout << "The triangle exists" << std::endl;
    } else {
        std::cout << "Triangle doesn't exist" << std::endl;
    }
}

void task_5(){
	std::cout << "Enter side 1: ";
	int a;
	std::cin >> a;
    std::cout << "Enter side 2: ";
	int b;
	std::cin >> b;
    std::cout << "Enter side 3: ";
	int c;
	std::cin >> c;

    if(pow(a, 2) + pow(b, 2) == pow(c, 2)){
        std::cout << "The triangle is right-angled" << std::endl;
    } else {
        std::cout << "The triangle is not a right triangle" << std::endl;
    }
}

void task_6(){
	std::cout << "Enter first number: ";
	int a;
	std::cin >> a;
    std::cout << "Enter second number: ";
	int b;
	std::cin >> b;
    std::cout << "Enter symbol(+, -, *, /): ";
    char sym;
    std::cin >> sym;

    if(sym == '+'){
        std::cout << "a + b = " << a + b << std::endl;
    } else if(sym == '-'){
        std::cout << "a - b = " << a - b << std::endl;
    } else if(sym == '*'){
        std::cout << "a * b = " << a * b << std::endl;
    }else if(sym == '/'){
        std::cout << "a / b = " << a / b << std::endl;
    } else if(sym == '/' && a == 0 && b == 0){
        std::cout << "Error! You can't divide by 0" << std::endl;
    } else {
        std::cout << "Invalid operator!" << std::endl;
    }
}

void task_7(){
	std::cout << "Enter side 1: ";
	int a;
	std::cin >> a;
  std::cout << "Enter side 2: ";
	int b;
	std::cin >> b;
  std::cout << "Enter side 3: ";
	int c;
	std::cin >> c;
  if(a == b && b == c){
    std::cout << "The triangle is equilateral" << std::endl;
  } else if(a == b || a == c || b == c) {
    std::cout << "Isosceles triangle" << std::endl;
  } else {
    std::cout << "Scalene triangle" << std::endl;
  }
}

void task_8(){

    std::cout << "Enter weight and height: ";
    int weight;
    int height;
    std::cin >> weight >> height;

	std::cout << "Enter x: ";
	int x;
	std::cin >> x;
    std::cout << "Enter y: ";
	int y;
	std::cin >> y;

}

void task_9(){
	std::cout << "Enter month number: ";
	int mon;
	std::cin >> mon;
  if(mon == 12){
    std::cout << "Capricorn" << std::endl;
  } else if(mon == 1){
    std::cout << "Aquarius" << std::endl;
  } else if(mon == 2){
    std::cout << "Fish" << std::endl;
  } else if(mon == 3){
    std::cout << "Aries" << std::endl;
  } else if (mon == 4){
    std::cout << "Taurus" << std::endl;
  } else if(mon == 5){
    std::cout << "Twins" << std::endl;
  } else if(mon == 6 ){
    std::cout << "Twins" << std::endl;
  } else if(mon == 7){
    std::cout << "Lion" << std::endl;
  } else if(mon == 8){
    std::cout << "Virgo" << std::endl;
  } else if(mon == 9){
    std::cout << "Scales" << std::endl;
  } else if(mon == 10){
    std::cout << "Scales" << std::endl;
  } else if(mon == 11){
    std::cout << "Sagittarius" << std::endl;
  }
}

void task_10(){
    std::cout << "Enter year: ";
    int year;
    std::cin >> year;

    bool leap = false;

    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)){
        leap = true;
    }

    if(leap){
        std::cout << "The year is a leap year";
        if(year % 4 == 0){
            std::cout << "This is the year of the Olympic games" << std::endl;
        } }else{
        std::cout << "The year is not a leap year" << std::endl;
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
