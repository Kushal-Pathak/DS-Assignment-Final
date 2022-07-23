//6.To implement binary integer addition and multiplication
#include <stdio.h>
int addition(int a, int b){
    int c;
    while(b!=0){
        c = (a & b) << 1;
        a = a^b;
        b = c;
    }
    return a;}

int product(int n1, int n2) {
    int i, res = 0;
    for (i = 0; i < n2; i++)
            res = addition(res, n1);
    return res;}
  
void main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("The addition is %d", addition(a, b));
    printf("\nThe product is %d", product(a, b));
}
