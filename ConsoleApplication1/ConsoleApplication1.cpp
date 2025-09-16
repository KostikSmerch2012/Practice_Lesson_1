#include <iostream>
#include <math.h>
#include <cmath>
#include <string>
#include <clocale>
#include <windows.h>
#include <iomanip>
#include <string>

const double PI = 3.14159265358979323846;

void enter_func(double* a, double* b, double* c) {
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
    double a, b, c;
    enter_func(&a, &b, &c);
    std::cout << a + b << "<- Сумма" << std::endl;
    std::cout << a - b << "<- Разность" << std::endl;
    std::cout << a * b << "<- Произведение" << std::endl;
    if (a != 0 || b != 0) {
        std::cout << a / b << "<- Делелие" << std::endl;
    }
    else {
        std::cout << "Знаменатель не может быть нулём!";
    }
}

void task1_3() {
    double b, c;
    std::cout << "First number: \n";
    std::cin >> b;
    std::cout << "Second number: \n";
    std::cin >> c;
    if (b != 0) {
        std::cout << -c / b << std::endl;
    }
    if (b == 0 && c == 0) {
        std::cout << "x - любой" << std::endl;
    }
    if (b == 0 && c != 0) {
        std::cout << "Нет решений" << std::endl;
    }
}

void task1_4() {
    double a, b, c, D;
    std::cout << "First number: ";
    std::cin >> a;
    std::cout << "Second number: ";
    std::cin >> b;
    std::cout << "Second number: ";
    std::cin >> c;
    D = pow(b, 2) - 4 * a * c;
    if (D < 0) {
        std::cout << "Нет корней" << std::endl;
    }
    if (a != 0 || b != 0 || c != 0) {
        std::cout << (-b + pow(D, 0.5)) / (2 * a) << std::endl;
        std::cout << (-b - pow(D, 0.5)) / (2 * a) << std::endl;
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
    double R, r, h;
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
    task1_3();
    return 0;
}