#include <stdio.h>
#include <time.h>

int mai(){
time_t t;
time(&t);
struct tm * data;
data = localtime(&t);
int d = data->tm_mday;
int m =data->tm_mon + 1;
int a = data->tm_year + 1900;

printf(" Estamos no dia %i e no mes %i e no ano de %i", d, m, a);

return 0;
}
