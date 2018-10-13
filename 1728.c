#include <stdio.h>
void inversor(char s[], char t[], int *A, int *B, int *C)
{
    int i,j, res = 0;
    for (j = 0; s[j] != '\0'; j++);
    t[j--] = '\0';
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '+' || s[i] == '=')
            t[j - i] = ' ';
        else
            t[j - i] = s[i];
    }
    sscanf(t,"%d %d %d", C, B, A);
}
int main (void)
{
    char s[25];
    char t[25];
    int A, B, C;
    do
    {
        scanf("%s", s);
        inversor(s, t, &A, &B, &C);
        if(A + B == C)
            printf("True\n");