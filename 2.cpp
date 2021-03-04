/*
 * Escreva um algoritmo que leia a distância (em Km) e o tempo (em horas) 
 * que um veículo  percorreu  entre  um  ponto  A  e  um  ponto  B.  
 * Em  seguida,  indique  a velocidade média do veículo durante o trecho 
 * percorrido e se a velocidade média ficou acima do limite de 90 Km/h.
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
 std::setlocale(LC_ALL,"pt-br_UTF-8");
 static long *time = nullptr;
 static std::string line;
 static float  res_dist;
 static long res_time;
 const char *msg1 [2]  = {"Distância percorrida de um ponto A",
                         "Distância percorrida de um ponto B"};
 const char *msg2[2] = {"Tempo percorrido de um ponto A",
    "Tempo percorrido de um ponto B"
 };
 static char *end = nullptr;
 static float *dist = nullptr;
 dist = (float *)calloc(2,sizeof(float));
 time = (long *) calloc(2,sizeof(long));
 if(dist == NULL || time == NULL){
    std::cout << "Não foi possível alocar memória\n";
    std::exit(1);
 }
 static int i;
 while(i < 2){
    std::cout << "Digite a " << *(msg1+i);
    std::cout << "\n";
    std::getline(std::cin,line);
    dist[i] = strtof(line.c_str(),&end);
    std::cout << "Digite o " << *(msg2 + i);
    std::cout << "\n";
    std::getline(std::cin,line);
    time[i] = strtol(line.c_str(),&end,10);
    i++;
 } 
 res_dist = *(dist + 1) - *(dist + 0);
 res_time = *(time + 1) - *(time + 0);
 std::cout << "Velocidade média = " << res_dist / res_time << "\n";
 if(res_dist / res_time > (float) 90)
    std::cout << "A velocidade média ficou acima do limite de 90 KM/H\n";
 
 free(dist);
 free(time);
}



