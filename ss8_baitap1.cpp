#include <stdio.h>
int main(){
	int array[5]={42, 51, 72, 1, 25};
	
	for (int i = 4; i >= 0; i--){
		printf("%d ", array[i]);
	}
	return 0;
}
