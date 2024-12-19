#include <stdio.h>

struct SinhVien {
	char name[20];
	int age;
	char phoneNumber[15];
};


int main(){
	
	struct SinhVien students[5];
	int i;
	for (i=0;i<5;i++){
		printf("sinh vien thu %d \n",i+1);
		printf("ten :  ");
		fgets(students[i].name,20,stdin);
		printf("tuoi : ");
		scanf("%d",&students[i].age);
		fflush(stdin);
		printf("sdt : ");
		fgets(students[i].phoneNumber,15,stdin);
	}
	
	for (i=0;i<5;i++){
		printf("sinh vien thu %d \n",i+1);
		printf("ten : %s \n",students[i].name);
		printf("tuoi : %d \n",students[i].age);
		printf("sdt : %s \n",students[i].phoneNumber);
	}

	return 0;
}

