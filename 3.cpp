/*Escreva um algoritmo que leia uma letra e indique se é uma vogal ou consoante
 * Nome: Victor Seixas Locateli 
 * TIA: 4192498-3
 * DATA(dd/mm/yyyy): 25/02/2020
 * Compilador : g++ 8.3 
 * Sistema Operacional : Debian (buster)
 * Opc. de compilação(g++): g++ -Wall -Wextra -Werror 1.cpp -o prg
 * Para executar (UNIX) ./prg.out
 * Para executar (NT) ./prg.exe
*/

#include "ED_I.h"
int main(){
   std::setlocale(LC_ALL,"pt-br_UTF-8");
   static char letter;
   std::cout << "Digite uma letra\n";
   std::cin >> letter;
   while(std::isdigit (letter) ){
      std::cout << "Por favor, digite uma letra\n";
      std::cin >> letter;
   }
   switch(letter){
      case 'A':
      case 'a':
               std::cout << "Vogal\n";
               break;
      
      case 'E':
      case 'e':
               std::cout << "Vogal\n";
               break;
      case 'I':
      case 'i':
               std::cout << "Vogal\n";
               break;
   
      case 'O':
      case 'o':
               std::cout << "Vogal\n";
               break;
      case 'U':
      case 'u':
               std::cout << "Vogal\n";
               break;
     default:
               std::cout << "Consoante\n";
               break;

   }
   return 0;

}
