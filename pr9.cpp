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
	int pass;
	std::cin >> pass;

}

void task_4(){
	
}

void task_5(){
	
}

void task_6(){
	
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
