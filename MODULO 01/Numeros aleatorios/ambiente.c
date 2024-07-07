#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){

srand(time(NULL));
int n = rand() %10;//gera de 1 a 9
printf("O numero e (%d)", n);
}