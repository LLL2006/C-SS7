#include <stdio.h>
int main() {
	int n[5];
	
	for(int i=1;i<=5;i++){
		printf("Hay nhap vao phan tu %d: \n",i);
		scanf("%d",&n[i]);
	}
	for(int i=1;i<=5;i++){
		printf("Phan tu thu %d la: %d\n",i, n[i]);
	}

	
	return 0;
}
