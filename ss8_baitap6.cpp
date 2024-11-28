#include <stdio.h>
int main(){
	int array[3][3]={
	{23, 41, 1},
	{1, 13, 15},
	{5, 7, 8}
	};
	int tong=0;
	printf("cac phan tu tren duong cheo la: ");
	for(int i = 0; i < 3; i++){
			printf("%d ", array[i][i]);
			tong += array[i][i];
	}
	printf("\ntong: %d", tong);
	return 0;
}
