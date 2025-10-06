#include <iostream>


void task_1(){
  std::cout << "Enter number: ";
  int num = 0;
  std::cin >> num;

  switch (num)
  {
  case 1:
    std::cout << "Monday" << std::endl;
    break;

  case 2:
    std::cout << " Tuesday" << std::endl;
  break;

  case 3:
    std::cout << "Wednesday" << std::endl;
  break;

  case 4:
    std::cout << "Thursday" << std::endl;
  break;

  case 5:
    std::cout << "Friday" << std::endl;
  break;

  case 6:
    std::cout << "Saturday" << std::endl;
  break;

  case 7:
    std::cout << "Sunday" << std::endl;
  break;
  
  default:
    std::cout << "Error" << std::endl; 
    break;
  }
}

void task_2(){
  std::cout << "Enter symbol('+'; '-'; '/'; '*'): ";
  char sym;
  std::cin >> sym;

  switch (sym)
  {
  case '+':
    std::cout << "Addition" << std::endl;
    break;

  case '-':
    std::cout << "Subtraction" << std::endl;
    break;

  case '/':
    std::cout << "Division" << std::endl;
    break;

  case '*':
    std::cout << "Multiplication" << std::endl;
    break;
  
  default:
    std::cout << "Error" << std::endl; 
    break;
  }
}

void task_3(){
  std::cout << "Enter grade: ";
  int grade = 0;
  std::cin >> grade;

  switch (grade)
  {
  case 1:
    std::cout << "Terrible" << std::endl;
    break;
  
  case 2:
    std::cout << "Badly" << std::endl;
    break;

  case 3:
    std::cout << "Good" << std::endl;
    break;

  case 4:
    std::cout << "Cool" << std::endl;
    break;

  case 5:
    std::cout << "Nice" << std::endl;
    break;
  
  default:
    std::cout << "Erorr" << std::endl;
    break;
  }
}


void task_4(){
  std::cout << "Enter first number: ";
  int a;
  std::cin >> a;
  std::cout << "Enter second number: ";
  int b;
  std::cin >> b;
  std::cout << "Enter symbol: ";
  char sym;
  std::cin >> sym;

  switch (sym)
  {
  case '+':
    std::cout << "a + b = " << a + b << std::endl;
    break;
  
  case '-':
    std::cout << "a - b = " << a - b << std::endl;
    break;

  case '/':
    std::cout << "a / b = " << a / b << std::endl;
    break;

  case '*':
    std::cout << "a * b = " << a * b << std::endl;
    break;

  default:
    std::cout << "Erorr" << std::endl;
    break;
  }
}


void task_5(){
  std::cout << "Enter the month number to find out how many days it has: ";
  int num;
  std::cin >> num;

  switch (num)
  {
  case 1:
    std::cout << "This month has 31 days" << std::endl;
    break;

  case 2:
    std::cout << "This month has 28 days" << std::endl;
    break;

  case 3:
    std::cout << "This month has 31 days" << std::endl;
    break;

  case 4:
    std::cout << "This month has 30 days" << std::endl;
    break;

  case 5:
    std::cout << "This month has 31 days" << std::endl;
    break;

  case 6:
    std::cout << "This month has 30 days" << std::endl;
    break;

  case 7:
    std::cout << "This month has 31 days" << std::endl;
    break;

  case 8:
    std::cout << "This month has 31 days" << std::endl;
    break;

  case 9:
    std::cout << "This month has 30 days" << std::endl;
    break;

  case 10:
    std::cout << "This month has 31 days" << std::endl;
    break;

  case 11:
    std::cout << "This month has 30 days" << std::endl;
    break;

  case 12:
    std::cout << "This month has 31 days" << std::endl;
    break;
  
  default:
    std::cout << "Erorr" << std::endl;
    break;
  }

}


void task_6(){
  std::cout << "Enter the first character of the country name: ";
  char sym;
  std::cin >> sym;

  switch (sym)
  {
  case 'R':
    std::cout << "Countries that begin with the letter 'R': Russia, Rwanda, Romania, Republic of Korea" << std::endl;
    break;

  case 'M':
    std::cout << "Countries that begin with the letter 'M': Mauritius, Mauritania, Madagascar, Malawi, Malaysia, Mali, Maldives, Malta, Morocco" << std::endl;
    break;

  case 'N':
    std::cout << "Countries that begin with the letter 'N': Namibia, Nauru, Nepal, Niger, Nigeria, Netherlands, Nicaragua, New Zealand" << std::endl;
    break;
  
  default:
  std::cout << "Erorr" << std::endl;
    break;
  }
}


void task_7(){
  std::cout << "Select the next action: 1. Start; 2. Setting; 3. Exit" << std::endl;
  std::cout << "Enter number: ";
  int num;
  std::cin >> num;

  switch (num)
  {
  case 1:
    std::cout << "1. Start" << std::endl;
    break;
  
  case 2:
    std::cout << "2. Setting" << std::endl;
    break;

  case 3:
    std::cout << "3. Exit" << std::endl;
    break;

  default:
    std::cout << "Erorr" << std::endl;
    break;
  }
}


void task_8(){
  std::cout << "Enter month number: ";
  int a;
  std::cin >> a;
  
  switch (a)
  {
  case 1:
  case 2:
  case 12:
    std::cout << "Winter" << std::endl;
    break;

  case 3:
  case 4:
  case 5:
    std::cout << "Sprin" << std::endl;
    break;

  case '6'...'8':
    std::cout << "Summer" << std::endl;
    break;

  case 9:
  case 10:
  case 11:
    std::cout << "Autumn" << std::endl;
    break;

  default:
    std::cout << "Erorr" << std::endl;
    break;
  }
}


void task_9(){
  std::cout << "Enter rainbow color number"; 
  int color;
  std::cin >> color;

  switch (color)
  {
  case 1:
    std::cout << "Red" << std::endl;
    break;

  case 2:
    std::cout << "Orange" << std::endl;
    break;

  case 3:
    std::cout << "Yellow" << std::endl;
    break;

  case 4:
    std::cout << "Green" << std::endl;
    break;

  case 5:
    std::cout << "Naive blue" << std::endl;
    break;

  case 6:
    std::cout << "Blue" << std::endl;
    break;

  case 7:
    std::cout << "Violet" << std::endl;
    break;
  
  default:
    std::cout << "Erorr" << std::endl;
    break;
  }
}



void task_10(){
  std::cout << "Enter symbol: ";
  char sym;
  std::cin >> sym;

  switch (sym)
  {
  case 'A'...'Z':
    std::cout << "Capital letter" << std::endl;
    break;

  case 'a'...'z':
    std::cout << "Small letter" << std::endl;
    break;

  case '0'...'9':
    std::cout << "Number" << std::endl;
    break;
  
  default:
    std::cout << "Erorr" << std::endl;
    break;
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
