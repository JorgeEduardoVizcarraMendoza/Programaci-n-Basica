#include <iostream>  // Biblioteca para entrada y salida

using namespace std;

int main() {
    string nombre;

    cout << "¿Cómo te llamas? ";
    getline(cin, nombre);  // Lee una línea completa con espacios

    cout << "Hola, " << nombre << "! Bienvenido a Dev-C++." << endl;

    return 0;
}