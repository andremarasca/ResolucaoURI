#include <stdio.h>
char deixa_maiuscula(char c)
{
    if('a' <= c && c <= 'z')
        return (c - 'a' + 'A');
    return c;
}
char deixa_minuscula(char c)
{
    if('A' <= c && c <= 'Z')
        return (c - 'A' + 'a');
    return c;
}
int main (void)
{
    char c;
    int e = 1;
    while(scanf("%c", &c) != EOF){
        if(c == '\n')
        {
            e = 1;
            printf("\n");
        }
        else{
            if(e == 1){
                if(c != ' '){
                    e = 3;
                    printf("%c", deixa_maiuscula(c));
                }
                else