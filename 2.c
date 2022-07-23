//2.To find GCD using eucledian and extended eucledian algorithm
#include <stdio.h>
int euclidean(int a, int b){ 
	if (a == 0) 
			return b; 
	else
		return euclidean(b%a, a); 
}
int eeculidean(int a, int b, int* x, int* y){ 
	if (a == 0) { 
		*x = 0; 
		*y = 1; 
		return b; 
	} 
	int x1, y1;
	int gcd = eeculidean(b % a, a, &x1, &y1); 
	*x = y1 - (b / a) * x1; 
	*y = x1; 
	return gcd; 
}
void main(){ 
	int a,b;
    int x=1, y = 1;
	printf("Enter the Value of a and b to find gcd: ");
    scanf("%d  %d", &a,&b);
    printf("GCD of %d and %d using euclidean algorithm is %d\n", a, b, euclidean(a, b));
	printf("GCD of %d and %d using extended euclidean algorithm is %d\n", a, b, eeculidean(a, b, &x, &y)); 
} 
