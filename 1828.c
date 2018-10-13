#include <stdio.h>
#include <string.h>
#define pedra 1
#define papel 2
#define tesoura 3
#define lagarto 4
#define spock 5
int str2codigo(char A[])
{
    if(strcmp(A, "pedra") == 0)
        return pedra;
    if(strcmp(A, "papel") == 0)
        return papel;
    if(strcmp(A, "tesoura") == 0)
        return tesoura;
    if(strcmp(A, "lagarto") == 0)
        return lagarto;
    if(strcmp(A, "Spock") == 0)
        return spock;
}
int verganhador(int S, int R)
{
    int ganhador = 0;
    if(S == tesoura && R == papel)
        ganhador = 1;
    else if(S == papel && R == pedra)
        ganhador = 1;
    else if(S == pedra && R == lagarto)
        ganhador = 1;
    else if(S == lagarto && R == spock)