#include <stdio.h>
#include <stdlib.h>
#define MAX_FILE_NAME 100
#include "magic_square.h"

int getlines(char filename[MAX_FILE_NAME]);
int isMagicSquare(int ** square, const int n);

int main(){  

    //define our file variable
    FILE *f;  
    char filename[MAX_FILE_NAME];
    printf("Enter file name: ");
    scanf("%s", filename);
    
    // ##! n function which gets the number of lines
    int n = getlines(filename);

    // Open the file 
    f = fopen(filename, "r");


    int i, j;
    // Allocating a matrix for storing the magic square
    // as an array of pointers, where each pointer is a row 
    int **square = (int **) malloc(sizeof(int*) * n);
    for (i = 0; i < n; i++) {
        square[i] = (int *) malloc(sizeof(int) * n);

        // I'm reading the integers as I go, so I don't have to loop over the same things twice
        for (j = 0; j < n; j++) {
            fscanf(f, "%d", &square[i][j]);
        }
    }    

    int isMS = isMagicSquare(square, n);
    if (isMS != 0) {
        printf("It is a magic square!\n");
    } else {
        printf("It is not a magic square :(\n");
    }


    // Freeing each row separately before freeing the array of pointers
    for (i = 0; i < n; i++) {
        free(square[i]);
    }
    free(square);


    // Close the file
    fclose(f);

    // I'm not sure what I would write to an output, so I won't
    return 0;
}  


int getlines(char filename[MAX_FILE_NAME]) {
    FILE *fp;
    fp = fopen(filename, "r");
    
    int ch_read;
    int count = 0;

    while( (ch_read = fgetc(fp)) != EOF)
    {
        if (ch_read == '\n'){
            count++;
        }
    }

    printf("No. lines, %d\n", count);
    fclose(fp); 
    return count;
}
