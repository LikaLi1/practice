#include <iostream>
#include <string>

void task_1() {
    std::cout << "Enter number: ";
    int a;
    std::cin >> a;

    if (a >= 10 && a <= 99) {
        std::cout << "Your number is positive and double digit" << std::endl;
    } else {
        std::cout << "Your number is not positive and double digit" << std::endl;
    }
}

void task_2(){
    std::cout << "You need to calculate the value of x in the equation: ax^2 + bx + c = 0" << std::endl;
    
    std::cout << "Enter number: ";
	double a;
    std::cin >> a;
	std::cout << "Enter number: ";
	double b;
    std::cin >> b;
    std::cout << "Enter number: ";
	double c;
    std::cin >> c;

    if(a == 0){
        std::cout << "Since a = 0, the equation takes the form: bx + c = 0" << std::endl;
    } else if(b == 0){
        std::cout << "Since b = 0, the equation takes the form: ax^2 + c = 0" << std::endl;
    } else if(c == 0){
        std::cout << "Since c = 0, the equation takes the form: ax^2 + bx = 0" << std::endl;
    }

    double D = pow(b, 2) - 4 * a * c;
    std::cout << "D = " << D << std::endl;
    if(D > 0){
        double sqrt_D = sqrt(D);
        std::cout << "D > 0 " << std::endl;
        std::cout << "D = " << sqrt_D << std::endl;
        double x1 = (-b + sqrt_D) / (2 * a);
        double x2 = (-b - sqrt_D) / (2 * a); 
        std::cout << "x1 = " << x1 << std::endl;
        std::cout << "x2 = " << x2 << std::endl;
    } else if(D == 0){
        std::cout << "D = 0 " << std::endl;
        double x3 = - b / (2 * a);
        std::cout << "x3 = " << x3 << std::endl;
    } else if(D < 0){
        std::cout << "Your D < 0 that no roots" << std::endl;
    }
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
    for(char a : pass){
        if(a >= '0' && a <= '9'){
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
    std::cout << "Enter x: ";
    int x;
    std::cin >> x;

    std::cout << "Enter y: ";
    int y;
    std::cin >> y;

    std::cout << "Enter the coordinates of the first corner of the rectangle x1: ";
    int x1;
    std::cin >> x1;
    std::cout << "Enter the coordinates of the first corner of the rectangle y1: ";
    int y1;
    std::cin >> y1;
    std::cout << "Enter the coordinates of the second corner x2: ";
    int x2;
    std::cin >> x2;
    std::cout << "Enter the coordinates of the second corner y2: ";
    int y2;
    std::cin >> y2;

    double minX;
    if(x1 < x2){
        minX = x1;
    } else {
        minX = x2;
    }

    double maxX;
    if(x1 > x2){
        maxX = x1;
    } else {
        maxX = x2;
    }

    double minY;
    if(y1 < y2){
        minY = y1;
    } else {
        minY = y2;
    }

    double maxY;
    if(y1 > y2){
        maxY = y1;
    } else {
        maxY = y2;
    }

    if (x >= minX && x <= maxX && y >= minY && y <= maxY) {
        std::cout << "Point (" << x << ", " << y << ") included into a rectangle" << std::endl;
    } else {
        std::cout << "Point (" << x << ", " << y << ") not included in the rectangle" << std::endl;
    }
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
