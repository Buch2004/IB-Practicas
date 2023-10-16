/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file boolean_operators.cc 
  * @author Christian Buch Plantada alu0101672731@ull.edu.es
  * @date Oct 15 2023
  * @brief prints on the screen the truth table of the logical operators (and, or, not) of C++
  * @bug There are no known bugs
  */



#include <iostream>

int main() {
    // Encabezado de la tabla
    std::cout << "A      B      A && B   A || B   !A   !B\n";

    // Valores posibles para A y B (true o false)
    bool A, B;

    // Iterar sobre todos los posibles valores de A y B
    for (A = true; A >= true || B <= true; A = !B, B = !B) {
        // Imprimir valores y resultados de los operadores lógicos
        std::cout << A << "   " << B << "      " << (A && B) << "        " << (A || B) << "    " << !A << "   " << !B << "\n";
    }

    return 0;
}


