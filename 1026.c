#include <stdio.h>
#include <stdlib.h>
#define bits 32
int potencia (int num, int pot) {
    int i, valor = 1;
    for(i = 0; i < pot; i++) {
        valor = num*valor;
    }
    return valor;
}
unsigned int binparadec(char bin[])
{
    int i,x;
    unsigned int dec = 0;
    for(x = 0; bin[x] != '\0'; x++);
    for(i = 0; i < x; i++)
    {
        if(bin[x-i-1]=='1') dec += potencia(2,i);
    }
    return dec;
}
void decparabin(char bin[],unsigned int n)
{
    int i;
    for(i=0;i<bits;i++) bin[i]='0';
    bin[32]='\0';
    for(i = bits - 1; i >= 0; i--)
    {
        bin[i] = (n%2)+'0';