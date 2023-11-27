#include <stdio.h>

float calcuArea (int radius){
	float area = 3.14 * radius * radius;
	return area;
}

float calcuPeri (int radius){
	float peri = 2 * 3.14 * radius;
	return peri;
}

int main (){
	int radius;
	printf ("Nhap ban kinh:\n");
	scanf ("%d", &radius);
	float area = calcuArea (radius);
	float peri = calcuPeri (radius);
	printf ("Dien tich va chu vi hinh tron la: %0.2f %0.2f", area, peri);
	return 0;
	
}

