/*
 * Escreva um algoritmo que calcule e exiba o 
 * fatorial de um número informado pelo usuário.
 * TIA: 4192498-3
 * DATA(dd/mm/yyyy): 25/02/2020
 * Compilador : g++ 8.3 
 * Sistema Operacional : Debian (buster)
 * Opc. de compilação(g++): g++ -Wall -Wextra -Werror 1.cpp -o prg
 * Para executar (UNIX) ./prg.out
 * Para executar (NT) ./prg.exe
 */

#include "ED_I.h"

int main() {
   long long res = 1;
   long long n = 0;
   std::cout << "Digite um número\n";
   std::cin >> n;
   iter_fact(&n,&res);
   recurs_fact(n,&res);
   std::cout << n << "! " << "= "<<  res << "\n";

}

void iter_fact(long long *N,long long *RES){
   long long i = 0;
   i = *N;
   while(i > 0){
        *RES *= i;
        i--;
   }

}

long long recurs_fact(long long N,long long *RES){
   if(N == 0 || N == 1)
        return *RES = N;
   else{
      *RES = N * recurs_fact((N - 1),RES);
   }
   return *RES;
}
