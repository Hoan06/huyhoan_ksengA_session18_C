#include <stdio.h>

struct SinhVien {
	char name[20];
	int age;
	char phoneNumber[15];
};

int main(){
	
	struct SinhVien std1;
	printf("moi ban nhap ten ");
	fgets(std1.name,20,stdin);
	printf("moi ban nhap tuoi ");
	scanf("%d",&std1.age);
	fflush(stdin);
	printf("moi ban nhap sdt ");
	fgets(std1.phoneNumber,15,stdin);
	printf("ten : %s \n",std1.name);
	printf("tuoi : %d \n",std1.age);
	printf("sdt : %s \n",std1.phoneNumber);
	

	return 0;
}

