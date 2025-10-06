#include <iostream>
#include <cctype>

void task_1(){
  std::cout << "Enter number: ";
  int num;
  std::cin >> num;
 
  std::string result = (num % 2 == 0) ? "Even" : "Not even";
  std::cout << result << std::endl;
}

void task_2(){
  std::cout << "Enter first number: ";
  int a;
  std::cin >> a;
  std::cout << "Enter first number: ";
  int b;
  std::cin >> b;

  int max_num = (a > b) ? a : b;

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

  std::string sign = (num > 0) ? "Positive" : (num == 0) ? "Zero" : "Negative";
  std::cout << sign << std::endl;
}


void task_5(){
  std::cout << "Enter symbol: ";
  char sym;
  std::cin >> sym;

  switch (sym)
  {
  case 'a'...'z':
    std::cout << "Your symbol is a small letter" << std::endl;
    break;
  
  default:
  std::cout << "Error" << std::endl;
    break;
  }

  char big_sym = (std::islower(sym)) ? std::toupper(sym) : sym;
  std::cout << "Your meaning is " << big_sym << std::endl;
}

void task_6(){
  std::cout << "Enter amount: ";
  int amount;
  std::cin >> amount;

  std::string money = (amount % 100 == 0) && (amount > 0) ? "Multiple of 100 and positive" : 
                      (amount < 50000) ? "Amount less than 50,000" : 
                      "Error";
  std::cout << money << std::endl;
}


void task_7(){
  std::cout << "Game! Guess the number" << std::endl;

  std::cout << "The computer guessed a number" << std::endl;
  int com_num = 4;

  std::cout << "Enter estimated number: ";
  int num;
  std::cin >> num; 

  std::string guess = (com_num > num) ? "NOOOOO! Less!" : 
                      (com_num == num) ? "You guessed it!" : 
                      "NOOOOO! More!"; 
  std::cout << guess << std::endl;
}


void task_8(){
  std::cout << "Enter city code: ";
    int code;
    std::cin >> code;

    std::cout << "Enter call duration (minutes): ";
    int time;
    std::cin >> time;

    double cost_per_minute;

    switch (code) {
        case 1:
            cost_per_minute = 5.0;
            break;
        case 2:
            cost_per_minute = 4.0;
            break;
        case 3:
            cost_per_minute = 3.0;
            break;
        default:
            std::cout << "Invalid city code." << std::endl;
            return;
    }

    double total_cost = cost_per_minute * time;

    std::cout << "Total call cost: " << total_cost << " rubles" << std::endl;

}


void task_9(){
  double a, b, c;
  std::cout << "Enter lengths of three segments: " << std::endl;
  std::cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {

        int type = 0; 

        if (a == b && b == c) {
            type = 1; 
        } else if (a == b || b == c || a == c) {
            type = 2; 
        } else {
            type = 3; 
        }

    switch (type){
      case 1:
      td::cout << "The triangle is equilateral." << std::endl;
        break;
      case 2:
        std::cout << "The triangle is isosceles." << std::endl;
        break;
      case 3:
        std::cout << "The triangle is scalene." << std::endl;
        break;
      default:
        std::cout << "Unknown type." << std::endl;
        break;
      }
    } else {
        std::cout << "It's not possible to form a triangle with these segments." << std::endl;
    }
}


void task_10(){
  std::cout << "";
  std::string log;
  std::cin >> log;
  std::cout << "";
  std::string pass;
  std::cin >> pass;


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
