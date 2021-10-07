#include <stdio.h>
#include <stdlib.h>

int main(){
    int mat[3][3] = {{4,9,2},{3,5,7}, {8,1,6}};
    int mat2[3][3] = {{4,9,1},{3,7,5}, {8,2,6}};
    
    if(isMagicSquare(mat) == 1)
        printf("Mat is Magic Square\n");
    else
        printf("Mat is Not a Magic Square\n");
    
    if(isMagicSquare(mat2) == 1)
        printf("Mat2 isMagic Square\n");
    else
        printf("Mat2 is Not a Magic Square\n");

    int arr[3][3];
    srand(time(NULL));

    int count = 0;
    while(isMagicSquare(arr) == 0){
        int used[10] = {0,0,0,0,0,0,0,0,0,0};
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                int x = (rand() % 9) + 1;
                while(used[x] == 1){
                    x = (rand() % 9) + 1;
                }
                used[x] = 1;
                arr[i][j] = x;
            }
        }
        count++;
    }
    printf("\n");

    for(int i = 0; i < 3; i++){
         printf("[ ");
        for(int j = 0; j < 3; j++){
            printf("%d ", arr[i][j]);
        }
        printf("]\n");
    }
    printf("\nTotal Number of Squares Generated: %d\n", count);
}

int isMagicSquare(int mat[3][3]){
    int isMagicNumber = 1;

    //calc rows
    for(int i = 0; i < 3; i++){
        if(mat[i][0] + mat[i][1] + mat[i][2] != 15)
            isMagicNumber = 0;
    }

    //calc cols
    for(int i = 0; i < 3; i++){
        if(mat[0][i] + mat[1][i] + mat[2][i] != 15)
            isMagicNumber = 0;
    }

    //check diags
    if(mat[0][0] + mat[1][1] + mat[2][2] != 15)
        isMagicNumber = 0;

    if(mat[2][0] + mat[1][1] + mat[0][2] != 15)
        isMagicNumber = 0;

    return isMagicNumber;
}
