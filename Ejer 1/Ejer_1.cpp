#include <iostream>
#include <cmath>

namespace Matematicas {
    int suma(int a, int b) {
        return a + b;
    }
    int resta(int a, int b) {
        return a - b;
    }
    int multiplicacion(int a, int b) {
        return a * b;
    }
    double division(double a, double b) {
        return a / b;
    }
    int cuadrado(int a) {
        return a * a;
    }
    double logaritmo(int a) {
        return log(a);
    }
}

int main() {
    std::cout << "Suma: " << Matematicas::suma(5, 3) << std::endl;
    std::cout << "Resta: " << Matematicas::resta(5, 3) << std::endl;
    std::cout << "Multiplicacion: " << Matematicas::multiplicacion(5, 3) << std::endl;
    std::cout << "Division: " << Matematicas::division(5, 3) << std::endl;
    std::cout << "Cuadrado: " << Matematicas::cuadrado(5) << std::endl;
    std::cout << "Logaritmo: " << Matematicas::logaritmo(5) << std::endl;
    return 0;
}