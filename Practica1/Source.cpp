//Ejercicio 1
#include <iostream>
#include <cmath>

using namespace std;

class Triangulo {
private:
    double lad1;
    double lad2;
    double hip;

public:
    // Constructor por defecto
    Triangulo() : lad1(0), lad2(0), hip(0) {}

    // Constructor con parámetros
    Triangulo(double l1, double l2) : lad1(l1), lad2(l2) {
        calcularHipotenusa();
    }

    // Metodo para calcular la hipotenusa
    void calcularHipotenusa() {
        hip = sqrt(pow(lad1, 2) + pow(lad2, 2));
    }

    // Metodo para calcular el área
    double calArea() const {
        return (lad1 * lad2) / 2;
    }

    // Metodo para mostrar la información 
    void mostrar() const {
        cout << "El lado 1 es: " << lad1 << endl;
        cout << "El lado 2 es: " << lad2 << endl;
        cout << "La hipotenusa es: " << hip << endl;
        cout << "El area es: " << calArea() << endl;
        cout << "------------------------" << endl;
    }

    // Metodos de acceso para obtener los lados y la hipotenusa
    double getLado1() const {
        return lad1;
    }

    double getLado2() const {
        return lad2;
    }

    double getHipotenusa() const {
        return hip;
    }

    // Metodos de modificación para establecer los lados
    void setLado1(double l1) {
        lad1 = l1;
        calcularHipotenusa();
    }

    void setLado2(double l2) {
        lad2 = l2;
        calcularHipotenusa();
    }
};

int main() {
    double lad1_1, lad2_1;
    cout << "Primer objeto " << endl;
    cout << "Ingresar primer lado " << endl;
    cin >> lad1_1;
    cout << "Ingresar segundo lado " << endl;
    cin >> lad2_1;

    double lad1_2, lad2_2;
    cout << "Segundo objeto " << endl;
    cout << "Ingresar primer lado " << endl;
    cin >> lad1_2;
    cout << "Ingresar segundo lado " << endl;
    cin >> lad2_2;

    Triangulo triangulo1(lad1_1, lad2_1);
    Triangulo triangulo2(lad1_2, lad2_2);

    triangulo1.mostrar();
    triangulo2.mostrar();

    

    return 0;
}


  





