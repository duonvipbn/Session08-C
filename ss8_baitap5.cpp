#include <stdio.h>
int main(){
	int array[3][5]={
	{23, 41, 1, 5, 3},
	{1, 13, 15, 6, 12},
	{5, 7, 8, 1, 6}
	};
	int tong=0;
	//bien trai + phai
	for(int i = 0; i < 3; i++){
		tong += array[i][0];//trai
		tong += array[i][4];//phai
	}
	//bien tren + duoi
	for(int i = 1; i < 4; i++){
		tong += array[0][i];//tren
		tong += array[2][i];//duoi
	}
	
	printf("%d", tong);
	return 0;
}
