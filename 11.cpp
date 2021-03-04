/*11.Escreva uma função MulViaAdd() que recebe dois números como parâmetros. 
 * O primeiro parâmetro pode ser um número real e o segundo parâmetro deve ser 
 * um número  inteiro.  A  função  deve  retornar  a  multiplicação  entre  os  
 * parâmetros, porém, a multiplicação deve ser feita usando apenas a operação de 
 * adição.
 * DATA(dd/mm/yyyy): 1/03/2020
 * Compilador : g++ 8.3 
 * Sistema Operacional : Debian (buster)
 * Opc. de compilação(g++): g++ -Wall -Wextra -Werror 1.cpp -o prg
 * Para executar (UNIX) ./prg.out
 * Para executar (NT) ./prg.exe
*/

#include "ED_I.h"

int main(){
   std::setlocale(LC_ALL,"pt-br_UTF-8");
   float *res = nullptr;
   int N2 = 0;
   float N1 = (float) 0;
   std::cout << "Digite um número real\n";
   std::cin >> N1;
   std::cout << "Digite outro número inteiro\n";
   std::cin >> N2;
   res = MulViaAdd(&N1,&N2);
   std::cout << *res;
   std::cout << "\n";
}


float *MulViaAdd(float *n1,int *n2){
   int i = 0;
   float *res = nullptr;
   float tmp = 0; 
   for(i = 0;i<*n2;i++){
      tmp += *n1;
   }
   res = &tmp;
   return res;
}
