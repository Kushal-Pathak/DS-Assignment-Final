//3.To generate Permutation
#include <stdio.h>
int perm(int n, int r){
    int permutation = 1;
    int start = n - r + 1;
    for (start; start <= n; start++)
    {
        permutation *= start;
    }
    return permutation;
}
void main(){
    int n, r;
    printf("enter n and r: ");
    scanf("%d %d", &n, &r);
    printf("permutation is: %d", perm(n, r));}
