#pragma once 

#include<iostream>
#include<string>
#include<clocale>
#include<climits>
#include<cerrno>
#include<cstring>
#include<cstdlib>
#include<cmath>
#define LINE 256
#define L_LONG long long
#define MAX 92
#define SIZE_FIB 93
#define TRUE 1
#define FALSE 0
/*
 * ex = exercício 
*/ 
void swap(long *n1,long *n2); //ex 1
void is_even(int *num,int *cond); // ex 2
void slope_intercept_eqn(long *X,long *Y,long *cond); // ex 5
/*
 * As duas funções abaixo são soluções do exercício 6
*/

void iter_fact(long long *N,long long *res); 
long long recurs_fact(long long N,long long *RES); 
int min(int *Arr,int size); // ex 7
int max(int *Arr,int size); // ex 7
L_LONG fib(L_LONG *A,L_LONG size,L_LONG N); // ex 8
void print_revrs(int *A,int size); // ex 9 
void qck_sort(int *A,int bgn,int end);
int to_separate(int *A,int p,int r);
float *MulViaAdd(float *n1,int *n2);
int *Min(int *n1,int *n2);
int *Max(int *n1,int *n2);
int VowelsCount(const std::string word,int n_vowels);
int AreCirclesColliding(int *x1,int *x2,int *r1,int *y1,int *y2,int *r2);
