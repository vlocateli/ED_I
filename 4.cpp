/*
 * Escreva um algoritmo que leia um número e indique se o número é 
 * par ou ímpar.
 * Nome: Victor Seixas Locateli 
 * TIA: 4192498-3
 * DATA(dd/mm/yyyy): 26/02/2020
 * Compilador : g++ 8.3 
 * Sistema Operacional : Debian (buster)
 * Opc. de compilação(g++): g++ -Wall -Wextra -Werror 1.cpp -o prg
 * Para executar (UNIX) ./prg.out
 * Para executar (NT) ./prg.exe
 */ 

#include "ED_I.h"
int main(){
   std::setlocale(LC_ALL,"pt-br_UTF-8");
   static int num = 0;
   static int cond = 0;
   std::cout << "Digite um numero\n";
   std::cin >> num;
   is_even(&num,&cond);
   std::cout << num << " é " <<  (cond ? "Par\n" : "Impar\n"); 

}

void is_even(int *num,int *cond){
     (*num % 2 == 0 ? *cond = 1 : *cond = 0);
}

