#include <stdio.h>

int main () {
	int i, n, sum = 0;
	printf ("Nhap so nguyen duong n:\n");
	scanf ("%d", &n);
	for ( i=1; i<=n; i++){
	    sum += i;
	}
	printf ("Tong cac so tu 1 den %d la: %d", n, sum);
	return 0;
}
