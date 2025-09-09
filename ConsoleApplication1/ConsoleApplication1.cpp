#include <iostream>
#include <math.h>
#include <string>
#include <clocale>
#include <windows.h>

void enter_func(int* a, int* b, int* c) {
    std::cout << "First number: ";
    std::cin >> *a;
    std::cout << "Second number: ";
    std::cin >> *b;
    std::cout << "Second number: ";
    std::cin >> *c;
}


void task1_1() {
    std::cout << "Ваше имя: " << std::endl;
}

void task1_2() {
    int a, b, c;
    enter_func(&a, &b, &c);
    std::cout << a + b << "<- Summary" << std::endl;
    std::cout << a - b << "<- Deduction" << std::endl;
    std::cout << a * b << "<- Multiplying" << std::endl;
    if (a != 0 || b != 0 and c != 0) {
        std::cout << a / b << "<- Division" << std::endl;
    }
    else {
        std::cout << "Cant be zero!";
    }
}

void task1_3() {
    double a, b;
    std::cout << "First number: ";
    std::cin >> a;
    std::cout << "Second number: ";
    std::cin >> b;
    if (a != 0) {
        std::cout << -b / a << std::endl;
    }
    else {
        std::cout << "0" << std::endl;
    }
}

void task1_4() {
    double a, b, c, m;
    std::cout << "First number: ";
    std::cin >> a;
    std::cout << "Second number: ";
    std::cin >> b;
    std::cout << "Second number: ";
    std::cin >> c;
    m = pow(b, 2) - 4 * a * c;
    if (m < 0) {
        std::cout << "Нет корней" << std::endl;
    }
    if (a != 0 || b != 0 || c != 0) {
        std::cout << (-b + pow(m, 0.5)) / (2 * a) << std::endl;
        std::cout << (-b - pow(m, 0.5)) / (2 * a) << std::endl;
    }
}



void task15() {
    
}

int main() {
    setlocale(LC_ALL, "Russian");
    task1_4();
    return 0;
}