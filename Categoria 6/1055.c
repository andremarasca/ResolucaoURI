#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;
int main() {
    int testcase, cases = 0;
    int A[105];
    scanf("%d", &testcase);
    while(testcase--) {
        int ret = 0;
        int n, i, j;
        scanf("%d", &n);
        for(i = 0; i < n; i++)
            scanf("%d", &A[i]);
        sort(A, A+n);
        int front = 0, rear = n-2;
        int l = (n-1)/2, r = (n-1)/2;
        int B[105] = {};
        B[l] = A[n-1];
        while(front <= rear) {
            B[++r] = A[front++];
            if(front > rear)    break;
            B[--l] = A[front++];
            if(front > rear)    break;
            B[++r] = A[rear--];
            if(front > rear)    break;
            B[--l] = A[rear--];
        }
        for(i = 1; i < n; i++)
            ret += abs(B[i]-B[i-1]);
        front = 1, rear = n-1;
        l = (n-1)/2, r = (n-1)/2;
        B[l] = A[0];