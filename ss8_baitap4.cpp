#include <stdio.h>
int main(){
	int array[3][5]={
	{23, 41, 1, 5, 3},
	{1, 13, 15, 6, 12},
	{5, 7, 8, 1, 6}
	};
	int max=array[0][0];
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 5; j++){
			if(max<array[i][j]){
				max=array[i][j];
			}
		}
	}
	printf("phan tu lon nhat trong mang la: %d", max);
	return 0;
}
