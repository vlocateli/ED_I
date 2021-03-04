/*
 * Escreva  um  algoritmo  que  usa  um  vetor  para  armazenar  6  números  
 * inteiros informados  pelo  usuário.  Em  seguida,  ordene  os  elementos  do  
 * vetor  em  ordem crescente.  Por  exemplo, caso  o  vetor  contenha  os  
 * números  {  7,  3,  10,  5,  2,  6  } (nessa  ordem),  ao  final do  código o  
 * vetor  deve  armazenar  {  2,  3,  5,  6,  7,  10  } 
 * (números em ordem crescente).
 * DATA(dd/mm/yyyy): 1/03/2020
 * Compilador : g++ 8.3 
 * Sistema Operacional : Debian (buster)
 * Opc. de compilação(g++): g++ -Wall -Wextra -Werror 1.cpp -o prg
 * Para executar (UNIX) ./prg
 * Para executar (NT) ./prg.exe
*/ 

#include "ED_I.h"

int main()
{
   int *Arr;
   std::setlocale(LC_ALL,"pt-br_UTF-8");
   Arr = (int *) calloc(6,sizeof(int));
   if(Arr == NULL){
      std::cout << "Não foi possível alocar memória\n";
      std::exit(1);
   }
   int i = 0;
   for(i = 0;i<6;i++){
      std::cout << "Digite um número\n";
      std::cin >> *(Arr + i);
   }
   qck_sort(Arr,0,5); 
   for(i = 0;i<6;i++)
      std::cout <<  Arr[i] << " ";
   std::cout << "\n";
   free(Arr);
}
/*
 * separate receives an Array A, the size of array A, and the b(begin of the 
 * Array) of type A[0 ... n - 1] being A[b ... e], thus b = begin of the Array
 * and e = end of Array.
 * The function separates the bigger elements from smaller ones.
*/ 

int to_separate(int *A,int p,int r){
   int c,j,k,t;
   c = A[r];
   j = p;
   for(k = p; k < r;k++){
      if(A[k] <= c){
         t = A[j]; 
         A[j] = A[k]; 
         A[k] = t;
         j++;
      }
   }
   A[r] = A[j]; 
   A[j] = c;
   return j;

}


void qck_sort(int *A,int bgn,int end){
   if(bgn < end){
         int pivot = to_separate(A,bgn,end);
         qck_sort(A,bgn,pivot - 1);
         qck_sort(A,pivot+1,end);
   }
}
