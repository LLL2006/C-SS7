#include <stdio.h>

int main() {
    int rows, cols;

    printf("Nhap so hang cua mang: ");
    scanf("%d", &rows);
    printf("Nhap so cot cua mang: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Nhap phan tu tai vi tri (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }


    printf("\nCac phan tu nam tren duong bien cua ma tran la:\n");


    for (int j = 0; j < cols; j++) {
        printf("%d ", matrix[0][j]); 
    }
    for (int j = 0; j < cols; j++) {
        if (rows > 1) {
            printf("%d ", matrix[rows - 1][j]); 
        }
    }

    for (int i = 1; i < rows - 1; i++) {
        printf("%d ", matrix[i][0]);
        if (cols > 1) {
            printf("%d ", matrix[i][cols - 1]);
        }
    }

    return 0;
}

