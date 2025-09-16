#include <iostream>
#include <math.h>
#include <cmath>
#include <string>
#include <clocale>
#include <windows.h>
#include <iomanip>
#include <string>

const double PI = 3.14159265358979323846;

void enter_func(int* a, int* b, int* c) {
    std::cout << "First number: ";
    std::cin >> *a;
    std::cout << "Second number: ";
    std::cin >> *b;
    std::cout << "Second number: ";
    std::cin >> *c;
}


void task1_1() {
    std::cout << "Ваше имя" << std::endl;
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
    std::cout << "First number: \n";
    std::cin >> a;
    std::cout << "Second number: \n";
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
    if (b == 0 && c == 0) {
        std::cout << "х - Любой" << std::endl;
    }
    if (b == 0 && c != 0) {
        std::cout << "Нет решений" << std::endl;
    }
}



void task1_5() {
    std::string time, lamp, curtains;
    std::cout << "На улице светло? (Y/N): ";
    std::cin >> time;
    std::cout << "Лампа горит? (Y/N): ";
    std::cin >> lamp;
    std::cout << "Шторы открыты? (Y/N): ";
    std::cin >> curtains;
    bool isLight = (time == "Y" && curtains == "Y") || (lamp == "Y");
    std::cout << (isLight ? "Светло" : "Темно") << std::endl;
}


void task1_6() {
    double R, r, h, V;
    std::cout << "Радиус большего основания: " << std::endl;
    std::cin >> R;
    std::cout << "Радиус меньшего основания: " << std::endl;
    std::cin >> r;
    std::cout << "Высота: " << std::endl;
    std::cin >> h;
    if (R <= 0 || r <= 0 || h <= 0) {
        std::cout << "Все значения должны быть положительными" << std::endl;
    }
    if (R < r) {
        std::cout << "R должен быть больше или равен r" << std::endl;
    }
    else {
        std::cout << "V = " << (1.0 / 3.0) * PI * h * (R * R + R * r + r * r) << std::endl;
        double l = sqrt(h * h + (R - r) * (R - r));
        std::cout << "S = " << PI * (R * R + r * r + l * (R + r)) << std::endl;
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    task1_5();
    return 0;
}