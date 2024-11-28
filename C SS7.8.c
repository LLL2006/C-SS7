#include <stdio.h>

int main() {
    int rows, cols;

    printf("Nhap so hang cua mang: ");
    scanf("%d", &rows);
    printf("Nhsp so cot cua mang: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Nhap phan tu tai vi tri (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMang vua nhap là:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

