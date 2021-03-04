/*
 * 12)Escreva  uma  função  Min()  que  recebe  dois  parâmetros  numéricos  
 * e  retorna  o menor valor entre eles.
 * DATA(dd/mm/yyyy): 1/03/2020
 * Compilador : g++ 8.3 
 * Sistema Operacional : Debian (buster)
 * Opc. de compilação(g++): g++ -Wall -Wextra -Werror 1.cpp -o prg
 * Para executar (UNIX) ./prg
 * Para executar (NT) ./prg.exe
*/

#include "ED_I.h"

int main(){
   std::setlocale(LC_ALL,"pt-br_UTF-8");
   int *min = nullptr;
   int n1 = 10;
   int n2 = 2;
   min = Min(&n1,&n2);
   std::cout <<  *min << "\n";
}

int *Min(int *n1,int *n2){
   return *n1 <= *n2 ? n1 : n2;
}

