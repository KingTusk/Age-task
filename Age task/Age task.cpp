#include <iostream>
int age = 0;

int main()
{
    std::cout << "what is your age? ";
    std::cin >> age;
    if (age > 19) {
        std::cout << "You are an adult.";
    }
    else {
        std::cout << "you are a teenager.";
    }
}
