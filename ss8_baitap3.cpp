#include <stdio.h>
int main(){
	int n;
	
	do{
	printf("nhap vao 1 so nguyen trong khoang[0, 100]: ");
	scanf("%d", &n);
	}while(n < 0 || n > 100);
	
	int array[n][n]={};
	int length = sizeof(array)/sizeof(array[0]);
	
	for (int i = 0; i < length; i++){
		for (int j = 0; j < length; j++){
			printf("%d ", array[i][j]);
		}
	printf("\n");
	}
	return 0;
}
