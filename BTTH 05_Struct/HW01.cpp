#include <stdio.h>
struct Students {
    char name[50];
    int number;
    float score;
};

struct Students inputStudents() {
    struct Students stu;
    printf("\nNhap ten sinh vien: ");
    fflush(stdin);
    gets(stu.name);
    printf("Nhap ma so sinh vien: ");
    scanf("%d", &stu.number);
    printf("Nhap diem sinh vien: ");
    scanf("%f", &stu.score);
    return stu;
}

struct Students displayStudents () {
	struct Students stu;
	printf("\nThong tin sinh vien:\n");
	printf("Ten: %s\n", stu.name);
	printf("Ma so: %d\n", stu.number);
	printf("Diem: %f\n", stu.score);
	return stu;
}

struct Students updateStudents() {
	struct Students stu;
    printf("\nNhap thong tin sua cho sinh vien:\n");
    printf("Nhap ten sinh vien: ");
    fflush(stdin);
    gets(stu.name);
    printf("Nhap ma so sinh vien: ");
    scanf("%d", &stu.number);

    printf("Nhap diem sinh vien: ");
    scanf("%f", &stu.score);

    return stu;
    
}
int main() {
    struct Students stu;

    int List;
    do {
        printf("\nChon yeu cau:\n");
        printf("1. Nhap thong tin sinh vien\n");
        printf("2. Hien thi thong tin sinh vien\n");
        printf("3. Cap nhat thong tin sinh vien\n");
        printf("0. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &List);

        switch (List) {
            case 1:
                stu = inputStudents();
                break;
            case 2:
            	stu = displayStudents();
                break;
            case 3:
                stu = updateStudents();
                break;
            case 0:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le, vui long chon lai.\n");
        }
    } while (List != 0);

    return 0;
}

