//5.To compute cartesian product of 2 sets.
#include <stdio.h>
void main(){
    int a[10], b[10], n1, n2, i, j;
    printf("Enter size of set A: ");
    scanf("%d", &n1);
    printf("Enter element of set A: ");
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    printf("Enter size of set B: ");
    scanf("%d", &n2);
    printf("Enter element of set B: ");
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            printf("(%d, %d)", a[i], b[j]);
        }
        printf(",");
    }
}
