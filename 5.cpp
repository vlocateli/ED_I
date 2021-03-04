/*
 * Assumindo a equação de reta 3x + y = 8, escreva um algoritmo que 
 * leia os valores para x e y indique se o ponto (x, y)pertence à reta.  
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
   static long x = 0;
   static long y = 0;
   static long cond = 0;
   std::cout << "Digite o valor de X\n";
   std::cin >> x;
   std::cout << "Digite o valor de Y\n";
   std::cin >> y;
   slope_intercept_eqn(&x,&y,&cond);
   std::cout << x << " e " << y <<
      (cond ? " Pertencem a reta\n" : 
       " Não pertencem a reta\n"); 


}


void slope_intercept_eqn(long *X,long *Y,long *cond){
   (3 * *X + *Y == 8 ? *cond = 1 : *cond = 0);
}
