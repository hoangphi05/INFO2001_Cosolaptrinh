#include <stdio.h>
int main(){
	//Input
	int a, b, c;
	//Process
	printf("Nhap so nguyen a, b, c (0< |a|, |b|, |c|< 109):");
	scanf("%d %d %d", &a, &b, &c);
	//Output
	int S = a*(b+c)+b*(a+c); 
	printf("Phuong trinh S bang : %d", S);
	return 0;
}
