//4.To generate Combination
#include <stdio.h>
int factorial(int n){
    if(n==0)
        return 1;
    else
        return n*factorial(n-1);}

void main(){
    int n,r,combination;
    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);
    combination = factorial(n)/(factorial(r)*factorial(n-r));
    printf("Comnination is: %d", combination);}
