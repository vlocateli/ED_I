/*
 * Escreva um algoritmo que exiba a sequência de Fibonacci com N números, sendo 
 * N 
 * um número informado pelo usuário. A sequência de Fibonacci começa com 1 e
 * 1 e os números subsequentes são obtidos com a soma dos dois números 
 * anteriores: 
 * 1, 1, 2, 3, 5, 8, 13, ...
 * DATA(dd/mm/yyyy): 1/03/2020
 * Compilador : g++ 8.3 
 * Sistema Operacional : Debian (buster)
 * Opc. de compilação(g++): g++ -Wall -Wextra -Werror 1.cpp -o prg
 * Para executar (UNIX) ./prg
 * Para executar (NT) ./prg.exe
*/

#include "ED_I.h"

int main(){
   static L_LONG Arr[SIZE_FIB] = {0};
   static L_LONG n;
   static L_LONG i;
   std::setlocale(LC_ALL,"pt-br_UTF-8");
   std::cout << "Digite o último número da sequência de fibonacci\n";
   std::cin >> n;
   *(Arr + 0) = 0;
   *(Arr + 1) = 1;
   if(n <=  MAX){
      fib(Arr,SIZE_FIB,n);
   }
   else{
      std::cout << "Erro\n" << n << " resultará em overflow aritimético\n";
      std::cout << "Abortando...\n";
      std::exit(1);
   }
   for(i = 0;i<=n;i++){
      if(*(Arr + i) == 0 && i != 0)
         break;
      
      std::cout <<"fib(" << i << ")= " <<  *(Arr + i) << "\n";

   }
}

L_LONG fib(L_LONG *A,L_LONG size,L_LONG N){
   if(*(A + N) == 0 && N != 0){
       *(A + N) = fib(A,size,N-1) + fib(A,size,N-2);
   }
   return *(A+N);
}
