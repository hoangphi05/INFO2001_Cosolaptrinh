#include <stdio.h>

int main() {
	int a, b;
	
	printf ("Nhap 2 so a va b (b != 0 | -10^19 <= a,b <= 10^19):\n");
	scanf ("%d %d", &a, &b);
	int sum = a + b;
	int difference = a - b;
	int product = a * b;
	float quotient;
	
	if (b != 0 && -10^19 <= a && a <= 10^19 && -10^19 <= b && b <= 10^19) {
		quotient = a / b;
		printf ("Tong, hieu, tich va thuong cua hai so lan luot la:\n %d\n %d\n %d\n %0.2f\n", sum, difference, product, quotient);
	} else {
		printf ("Khong thoa man dieu kien");
	}
	return 0;

}
