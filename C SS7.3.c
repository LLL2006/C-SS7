#include <stdio.h>

int main() {
    int arr[5] = {1, 7, 3, 9, 5};
    int soChan = 0;

    printf("Cac so chan trong mang la:\n");
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            soChan++;
        }
    }

    if (!soChan) {
        printf("Mang khong chua so chan.");
    }

    printf("\n");
    return 0;
}

