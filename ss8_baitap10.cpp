#include <stdio.h>
int main(){
	int array[2][10]={
	{1,2,3,4,6,2,9,1,3,6},
	};
	//dem so lan lap cua tung so
	int numLoops;
	for (int i = 0; i < 10; i++){
		numLoops=0;
			for (int j = 0; j < 10; j++){
				if(array[0][i] == array[0][j]){
					numLoops+=1;
				}
			}
		array[1][i]=numLoops;	
	}
	//tim so lap lai nhieu nhat
	int highest=array[1][0];
	for (int i = 0; i < 10; i++){
		if(highest < array[1][i]){
			highest = array[1][i];
		}
	}
	//tim so highest
	for (int i = 0; i < 10; i++){
		if(highest == array[1][i]){
			printf("%d ", array[0][i]);
		}
	}
	
	return 0;
}
