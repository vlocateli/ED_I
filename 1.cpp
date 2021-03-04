/*
 * 1.Escreva  um  algoritmo  que  leia  dois  números  informados  pelo  
 * usuário.  
 * Cada número deve ser salvo em variáveis distintas, por exemplo, 
 * valor1 e valor
 * 2. 
 * Após ler os dois números, o algoritmo deve trocar o conteúdo das variáveis.
 * Exemplo:  valor1  armazena  o  valor  30  e  valor2  armazena  o  valor  50.  
 * Após  o algoritmo ser executado, a variável valor1 deve armazenar 
 * o valor 50 e a variável valor2 deve armazenar o valor 30.
 * Nome: Victor Seixas Locateli 
 * TIA: 4192498-3
 * DATA(dd/mm/yyyy): 25/02/2020
 * Compilador : g++ 8.3 
 * Sistema Operacional : Debian (buster)
 * Opc. de compilação(g++): g++ -Wall -Wextra -Werror 1.cpp -o prg
 * Para executar (UNIX) ./prg
 * Para executar (NT) ./prg.exe
 * 
*/

#include "ED_I.h"
int main()
{
 static long n1, n2; 
 int i = 0;
 std::setlocale(LC_ALL,"pt-br.UTF-8");
 std::string  line;
 static char *end;
 while(i < 2){
        errno = 0;
        std::cout << "Digite o " << i+1 << " número\n";
        std::getline(std::cin,line); 
        if(i == 0){
              n1 = std::strtol(line.c_str(),&end,10);
        }     
        else if(i == 1){
              n2 = std::strtol(line.c_str(),&end,10);
        }
        const bool range_error = errno == ERANGE; 
        i++;
        if (range_error)
            std::cout << " Range error occurred\n";
 }
 swap(&n1,&n2);
 std::cout << "n1 = " << n1 << "\n" << "n2 = " << n2 << "\n"; 

}
void swap(long *n1,long *n2)
{
   long tmp = 0;
   tmp = *n1;
   *n1 = *n2;
   *n2 = tmp;

}

