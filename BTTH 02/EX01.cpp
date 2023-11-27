 #include <stdio.h>
int main() {
	int a, b;
	int whole, remainder;
	printf("Nhap a,b (-1018 <= a,b <= 1018, b khac 0):");
	scanf("%d %d", &a, &b);
	whole = a/b;
	remainder = a%b;
	printf("%d %d", whole, remainder);
	return 0;
}
