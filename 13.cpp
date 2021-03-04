/*
 *13)Escreva  uma  função  Max()  que  recebe  dois  parâmetros  numéricos  e  retorna  o maior valor *entre eles.
 * DATA(dd/mm/yyyy): 1/03/2020
 * Compilador : g++ 8.3 
 * Sistema Operacional : Debian (buster)
 * Opc. de compilação(g++): g++ -Wall -Wextra -Werror 1.cpp -o prg
 * Para executar (UNIX) ./prg.out
 * Para executar (NT) ./prg.exe
*/

#include "ED_I.h"


int main(){
   int N1 = 20;
   int N2 = 100;
   int *ptr_max = nullptr;
   ptr_max = Max(&N1,&N2);
   std::cout << *ptr_max << "\n";
   
}

int *Max(int *n1,int *n2){
   return *n1 >= *n2 ? n1 : n2;
}
