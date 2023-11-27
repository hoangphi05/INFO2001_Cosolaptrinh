#include <stdio.h>

int main () {
	float Cel, Fer;
	printf ("Nhap do C de chuyen qua do F:\n");
	scanf ("%f", &Cel);
	Fer = ( Cel * 9 / 5 ) + 32;
	printf ("%0.0f do C thanh %0.2f do F", Cel, Fer);
	return 0;
}
