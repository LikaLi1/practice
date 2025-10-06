#include <iostream>


void task_1(){
  std::cout << "Enter number: ";
  int num;
  std::cin >> num;
 
  std::string result = num % 2 == 0 ? "Even" : "Not even";
  std::cout << result << std::endl;
}

void task_2(){
  std::cout << "Enter first number: "
  int a;
  std::cin >> a;
  std::cout << "Enter first number: "
  int b;
  std::cin >> b;
  
  int min_num = (a < b) ? a : b;
  int max_num = (a > b) ? a : b;

  std::cout << "Minimum: " << min_num << std::endl;
  std::cout << "Maximum: " << max_num << std::endl;
}

void task_3(){
  bool value;
  std::cout << "Enter boolean value: ";
  std::cin >> value;

  std::string result = (value) ? "Yes" : "No";
  std::cout << result << std::endl;
}


void task_4(){
  std::cout << "Enter number: ";
  int num;
  std::cin >> num;

  std::string sign = (num > 0) ? "положительное" : (num == 0) ? "ноль" : "отрицательное";
  std::cout << sign << std::endl;
}


void task_5(){
  std::cout << "Enter symbol: ";
  char sym;
  std::cin >> sym;

  
}

void task_6(){

}


void task_7(){

}


void task_8(){

}


void task_9(){

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
