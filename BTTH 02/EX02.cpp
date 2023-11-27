#include <stdio.h>
int main(){
	int x, A;
	scanf("%d", &x);
	if (x <= 105){
		A = x*x*x + 3*(x*x) + x + 1;
		printf("Ket qua phuong trinh A la :%d\n", A);
	}else{
	
		printf("Khong thoa man dieu kien\n");
	}
	
	return 0;
}
