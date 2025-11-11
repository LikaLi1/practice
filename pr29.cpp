#include <iostream>

int main() {
    int distance_first_day = 15;
    int distance = 0;

    std::cout << "Number of days: ";
    int d;
    std::cin >> d;

    for(int day = 1; day <= d; ++day){
         distance =+ distance_first_day;
         distance_first_day += 2;
    }

    std::cout << "The snail crawled: " << distance << std::endl;
    return 0;
}
