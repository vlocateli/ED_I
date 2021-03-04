/*
 * Escreva  um  algoritmo  que  leia 10  números  inteiros  e,  
 * em  seguida,  exiba-os  na ordem inversa que foram inseridas pelo usuário.
 * DATA(dd/mm/yyyy): 25/02/2020
 * Compilador : g++ 8.3 
 * Sistema Operacional : Debian (buster)
 * Opc. de compilação(g++): g++ -Wall -Wextra -Werror 1.cpp -o prg
 * Para executar (UNIX) ./prg
 * Para executar (NT) ./prg.exe
 */
#include "ED_I.h"

int main(){
   int i;
   static int *Arr;
   Arr = (int *) calloc(10,sizeof(int));
   std::setlocale(LC_ALL,"pt-br_UTF-8");
   if(Arr == NULL){
      std::cout << "Não foi possível alocar memória\n";
      std::exit(1);
   }
   for(i = 0;i<10;i++){
      std::cout << "Digite um número\n";
      std::cin >> *(Arr + i);
   }
   print_revrs(Arr,10);
   free(Arr);
}

void print_revrs(int *A,int size){
   int i;
   i = size - 1;
   for(i = size - 1;i >= 0;i--){
      std::cout <<  *(A + i) << " "; 
      if(i != 0 && i % 5 == 0)
         std::cout << "\n";
   }
         std::cout << "\n";
}

