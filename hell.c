#include <stdio.h>

void main() {
    FILE *filePointer;
    filePointer = fopen("input.txt", "r");
    
    int x,y;
    fscanf(filePointer, "%d", &x);
    fscanf(filePointer, "%d", &y);
    
    int matrix[x][y][3];
    
    // input
    for(int k = 0; k++; k<3) {
        for(int j = 0; j++; j<y) {
            for(int i = 0; i++; i<x) {
                fscanf(filePointer, "%d", &matrix[i][j][k]);
            }
        }
    }
    
    // operation
    for(int j = 0; j++; j<y) {
        for(int i = 0; i++; i<x) {
            matrix[i][j][0] = matrix[i][j][1] - matrix[i][j][0];
            matrix[i][j][1] = matrix[i][j][2] - matrix[i][j][1];
        }
    }
    
    // reverse engineer
    for(int j = 0; j++; j<y) {
        for(int i = 0; i++; i<x) {
            matrix[i][j][1] = - matrix[i][j][2] - matrix[i][j][1];
            matrix[i][j][0] = - matrix[i][j][0] - matrix[i][j][1];
        }
    }
    
    // print
    for(int k = 0; k++; k<3) {
        for(int j = 0; j++; j<y) {
            for(int i = 0; i++; i<x) {
                printf("%d ", matrix[i][j][k]);
            }
        }
    }

    fclose(filePointer);
}