#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Cac so nguyen to trong mang la: ");
    for (int i = 0; i < n; i++) {
        int num = arr[i], j;
        if (num < 2) continue;
        for (j = 2; j < num; j++) {
            if (num % j == 0) break;
        }
        if (j == num) printf("%d ", num);
    }
    return 0;
}

