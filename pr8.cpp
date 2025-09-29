#include <iostream>

void task_1(){
	std::cout << "Enter number: ";
	int a;
	std::cin >> a;
	 if(a >= 0){
		std::cout << "Your number is positive" << std::endl;
	} if(a == 0){
    std::cout << "Your number is 0" << std::endl;
  } else {
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
		std::cout << "a > b: " << a << std::endl;
	} if(b > a){
		std::cout << "b > a: " << b << std::endl;
	}
}

void task_4(){
	std::cout << "Enter grade from 1 to 5: ";
	int grade;
  std::cin >> grade;
  if(grade <= 2 && grade >=1){
    std::cout << "Unsatisfactory" << std::endl;
  } else if(grade <= 5 && grade >=3){
    std::cout << "Satisfactory and above" << std::endl;
  } else {
    std::cout << "Doesn't Exist" << std::endl;
  }
}

void task_5(){
	std::cout << "Enter symbol: ";
  char sym1;
	char sym[] = {'a', 'e', 'i', 'o', 'u', '\0'};
  std::cin >> sym1;
  bool Vowel = false; 

  for (int i = 0; sym[i] != '\0'; ++i){
    if(sym1 == sym[i]){
      Vowel = true;

      break;
    } 
  }

    if(Vowel){
      std::cout << "Vowel" << std::endl;
    } else {
      std::cout << "Not a vowel" << std::endl;
    }
  
}

void task_6(){
	std::cout << "Enter year: ";
	int year;
  std::cin >> year;
  if((year % 4 == 0 && year % 100 == 0) || (year % 400 == 0)){
    std::cout << "Leap year" << std::endl;
  } else{
    std::cout << "The year is not a leap year" << std::endl;
  }
}

void task_7(){
	std::cout << "Enter first number: ";
	int a;
	std::cin >> a;
	std::cout << "Enter second number: ";
	int b;
  std::cout << "a + b: " << a + b << std::endl;
  std::cout << "a - b: " << a - b << std::endl;
  std::cout << "a * b: " << a * b << std::endl;
  std::cout << "a / b: " << a / b << std::endl;
}

void task_8(){
	std::cout << "Enter number: ";
	int a;
  std::cin >> a;
  if(a >= 10 && a <= 20){
    std::cout << "Belongs to the interval [10, 20]" << std::endl;
  } else {
    std::cout << "Does not belong to the interval [10, 20]" << std::endl;
  }
}

void task_9(){
	std::cout << "Enter the month number: ";
	int a;
  std::cin >> a;
  if(a == 12 || a == 1 || a == 2){
    std::cout << "It's winter!" << std::endl;
  } if(3 <= a >=5){
    std::cout << "It's spring!" << std::endl;
  } if(6 <= a >=8){
    std::cout << "It's summer!" << std::endl;
  } else{
    std::cout << "It's autumn!" << std::endl;
  }
}

void task_10(){
	std::cout << "Enter the three-digit number: ";
	int a;
  std::cin >> a;
  if(a < 100 || a > 999){
    std::cout << "Enter the three-digit number: " << std::endl;
    return;
  }

  int orig = a;
  int b = 0;

  while (a != 0){
    int num = a % 10;
    b = b * 10 + num;
    a /=10;
  }
  if(orig == b){
    std::cout << "The number is symmetrical" << std::endl;
  } else{
    std::cout << "The number is not symmetrical" << std::endl;
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
