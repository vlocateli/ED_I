/*
 * Escreva um algoritmo que leia 10 números inteiros e, 
 * após a leitura dos números, informe qual é o maior e qual é o menor.
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
   static int Arr[10] = {0};
   static int smllst = INT_MAX;
   static int biggst = INT_MIN;
   static int i = 0;   
   for(i = 0;i<10;i++){
         std::cout << "Digite " <<  i+1 << " número(s)\n";
         std::cin >> Arr[i];
   }
   smllst = min(Arr,10);
   biggst = max(Arr,10);

   if(smllst != INT_MAX)
      std::cout << "Menor encontrado = " <<  min(Arr,10) << "\n";
   else
      std::cout << INT_MAX;
   if(biggst!= INT_MIN)
      std::cout << "Maior encontrado = " <<  max(Arr,10) << "\n";
   else
      std::cout << INT_MIN;


}

int min(int *A,int size){
   int min = INT_MAX;
   int i;
   for(i = 0;i<size;i++){
      if( *(A + i) < min ) {
         min = *(A + i);
      }
   }
   return min;
}

int max(int *A,int size){
   int max = INT_MIN;
   int i;
   for(i = 0;i<size;i++){
      if(A[i] > max){
         max = A[i];
      }
   }
   return max;
}
