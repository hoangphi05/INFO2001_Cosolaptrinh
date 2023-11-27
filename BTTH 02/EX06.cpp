#include <stdio.h>
#include <math.h>

int main () {
	float x1, y1, x2, y2;
	printf ("Nhap toa do x1 y1 x2 y2:\n");
	scanf ("%f %f %f %f", &x1, &y1, &x2, &y2);
	
	float distance = sqrt(pow(x2 - x1, 2)+ pow(y2 - y1, 2));
	
	printf ("Khong cach giua 2 diem la: %0.2f", distance);
	return 0;
}
