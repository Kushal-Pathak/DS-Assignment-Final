//7.To find the meet of two boolean matrix
#include <stdio.h>
void main(){
    int m, n, p, q;
    int first[3][3], second[3][3], meet[3][3], i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);
    printf("Enter the elements of 1st matrix: ");
    for(i = 0; i<m; i++){
        for(j = 0; j<n; j++){
            scanf("%d", &first[i][j]);
        }
    }
    printf("Enter number of rows and columns: ");
    scanf("%d%d", &p, &q);
    printf("Enter the elements of 2nd matrix: ");
    for(i = 0; i<p; i++){
        for(j =0; j<q; j++){
            scanf("%d", &second[i][j]);
        }
    }
    for(i = 0; i<m; i++){
        for(j=0; j<q; j++){
            meet[i][j] = first[i][j] && second[i][j];
        }
    }
    printf("The boolean meet matrix is \n");
    for(i = 0; i<m; i++){
        for(j=0; j<q; j++){
            printf("%d\t", meet[i][j]);
        }
        printf("\n");}
}
