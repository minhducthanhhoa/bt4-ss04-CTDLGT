#include<stdio.h>

int main(){
	int n;
	
	do{
		printf("Nhap so phan tu cua mang: ");
		scanf("%d", &n);
	} while (n <= 0 || n > 100);
	
	int arr[n];
	printf("Nhap %d phan tu cua mang: \n", n);
	for(int i = 0; i < n; i++){
		printf("Phan tu thu %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
	
	// S?p x?p m?ng theo th? t? tang d?n (S? d?ng Bubble Sort)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Hoán d?i n?u ph?n t? tru?c l?n hon ph?n t? sau
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    // In ra mang da sap xep
    printf("M?ng sau khi sap xep tang dan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
	return 0;
}

