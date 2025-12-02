//2d array of int mat[3][3] sum of 2nd row
#include<stdio.h>
int main() {
    int sum = 0;

   int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==1){
                sum += mat[i][j];
            }
        }
    }

    printf("Sum of the 2nd row: %d\n", sum);

    return 0;
}   