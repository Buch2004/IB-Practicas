/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P48107-integer-division-and-reminder.cc 
  * @author Christian Buch Plantada alu0101672731@ull.edu.es
  * @date Oct 15 2023
  * @brief prints the integer division
  * @bug There are no known bugs
  */

#include <iostream>

int main() {

int dividendo;
int divisor;

  
  std::cin >> dividendo;
  std::cin >> divisor;

  if (divisor <=0) {
 
    std::cout << "Introduzca un número superior a 0";
    return 1; 
}

int cociente_entero = (dividendo / divisor);
int resto = (dividendo % divisor);

  std::cout << cociente_entero << " " << resto << std::endl;

return 0;

}

