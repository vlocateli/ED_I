/*Dois  círculos  se  sobrepõem (colidem)  se a  soma  dos  seus  raios  é maior  
 * que  ou igual  a  distância  entre  seus  centros.  A  distância  entre  dois  
 * pontos  pode  ser calculada  usando  o  teorema  de  Pitágoras  (c  =√𝑎2+𝑏2).  
 * Escreva uma  função AreCirclesColliding() que recebe seis parâmetros: a 
 * posição 
 * p1(x,y) e o raio r1 do primeiro  círculo  e  a  posição  p2(x,y)  e  o  raio  
 * r2  
 * do  segundo  círculo.  Com  os parâmetros  informados,  a  função  deve  
 * retornar  true  caso  os  círculos  estejam sobrepostos ou false caso 
 * contrário.
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
   int x1 = 2;
   int x2 = 3;
   int r1 = 5;
   int y1 = 5;
   int y2 = 6;
   int r2 = 12;
   int status;
   status = AreCirclesColliding(&x1,&x2,&r1,&y1,&y2,&r2);
   std::cout << ((status) ? "Os círculos estão se colidindo\n" : "Os círculos não estão se colidindo\n");
}

int AreCirclesColliding(int *x1,int *x2,int *r1,int *y1,int *y2,int *r2){
   double sum_radius = 0;
   sum_radius += (double) *r1 + *r2;
   double dist_dots = std::sqrt(pow((*x2 - *x1),2) + pow((*y2 - *y1),2));
   return sum_radius >= dist_dots ? TRUE : FALSE; 
}
