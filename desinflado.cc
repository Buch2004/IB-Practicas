/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file desinflado.cc
  * @author Christian Buch Plantada alu0101672731@ull.edu.es
  * @date Oct 15 2023
  * @brief by entering a character in uppercase returns the same character in lowercase
  * @bug There are no known bugs
  */

#include <iostream>

int main() {

char letra_mayuscula;

std::cin>> letra_mayuscula;

if (letra_mayuscula >= 'A' && letra_mayuscula <= 'Z') {
 
char letra_minuscula = letra_mayuscula + ('a' - 'A');

  std::cout << "Entrada  Salida\n";  // \n carácter de nueva línea,es decir cambia de línea, se consigue con Alt+92  
        std::cout << "   " << letra_mayuscula << "       " << letra_minuscula << std::endl;

} else {

  std::cout<< "Introduzca una letra mayúscula";
 }

}
