#include <stdio.h>

int main() {
    int n;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        int temp;
        do {
            printf("Nhap phan tu thu %d (la so le): ", i + 1);
            scanf("%d", &temp);
            if (temp % 2 == 0) {
                printf("Phan tu khong hop le. Vui long nhap lai so le.\n");
            }
        } while (temp % 2 == 0);
        arr[i] = temp;
    }

    printf("Mang cac so le da nhap:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

