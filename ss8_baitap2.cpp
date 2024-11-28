#include <stdio.h>
int main(){
	int array[5]={42, 51, 72, 1, 25};
	int length = sizeof(array)/sizeof(array[0]);
	int n;
	int check=0;
	printf("nhap vao mot phan tu bat ky: ");
	scanf("%d", &n);
	for (int i = 0; i < length; i++){
		if(n == array[i]){
			printf("vi tri phan tu trong mang la array[%d]", i);
			check=1;
			break;
		}else if(check == 0 && i == length - 1){
			printf("phan tu khong ton tai trong mang");
		}
	}
	return 0;
}
