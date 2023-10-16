/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file arithmetic_operators.cc
  * @author Christian Buch Plantada alu0101672731@ull.edu.es
  * @date Oct 15 2023
  * @brief 
  * @bug There are no known bugs
  */

#include <iostream>


int main() {

int a = 7;
int b = 3;

std::cout<< 7 << " + " << 3 << " = " << (a + b) <<std::endl;
std::cout << a << " - " << b << " = " << (a - b) << std::endl;
std::cout << a << " * " << b << " = " << (a * b) << std::endl;
std::cout << a << " / " << b << " = " << (a / b) << std::endl;
std::cout << a << " % " << b << " = " << (a % b) << std::endl;

return 0;

}
