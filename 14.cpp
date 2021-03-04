/*
 * Escreva  uma  função  VowelsCount()  que  recebe  uma  string  como  
 * parâmetro  e retorna a quantidade de vogais encontradas na string. Considere 
 * que a string é um vetor de caracteres e use o [] para acessar cada caractere 
 * (elemento do vetor).
 * DATA(dd/mm/yyyy): 1/03/2020
 * Compilador : g++ 8.3 
 * Sistema Operacional : Debian (buster)
 * Opc. de compilação(g++): g++ -Wall -Wextra -Werror 1.cpp -o prg
 * Para executar (UNIX) ./prg
 * Para executar (NT) ./prg.exe
 *
*/ 

#include "ED_I.h"

int main(){
   std::setlocale(LC_ALL,"pt-br_UTF-8");
   std::string word;
   int num_vowels = 0;
   std::cout << "Digite uma palavra\n";
   std::getline(std::cin,word);
   num_vowels = VowelsCount(word,num_vowels);
   std::cout << "Número de vogais " << num_vowels << "\n";
   std::cout << word << "\n";
}

int VowelsCount(const std::string word  ,int n_vowels){
   int i;
   for(i = 0; word[i] != '\0';i++){
      switch(word[i]){
         case 'A':
         case 'a':
         case 'E':
         case 'e':
         case 'I':
         case 'i':
         case 'O':
         case 'o':
         case 'u':
         case 'U':
            n_vowels++;
      }
   }  
   return n_vowels;
}
