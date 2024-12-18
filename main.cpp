
#include <iostream>
#include <cmath>

int main() {
    std::cout << "Hello, World!" << std::endl;

    double radius;
    std::cout << "Введите радиус круга: ";
    std::cin >> radius;

    if (std::cin.fail() || radius < 0) {
        std::cerr << "Неверный ввод. Радиус должен быть положительным числом." << std::endl;
        return 1;
    }

    double area = M_PI * radius * radius;
    std::cout << "Площадь круга с радиусом " << radius << " равна " << area << std::endl;

    return 0;
}

//Я жёстко редактировал этот файл, бухахаха =P
