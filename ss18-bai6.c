#include <stdio.h>

struct SinhVien {
	int id;
	char name[20];
	int age;
	char phoneNumber[15];
};


int main(){
	int size=5;
	struct SinhVien students[50];
	int i;
	for (i=0;i<size;i++){
		students[i].id=i+1;
		printf("sinh vien thu %d \n",i+1);
		printf("ten :  ");
		fgets(students[i].name,20,stdin);
		printf("tuoi : ");
		scanf("%d",&students[i].age);
		fflush(stdin);
		printf("sdt : ");
		fgets(students[i].phoneNumber,15,stdin);
	}
	
	for (i=0;i<size;i++){
		printf("sinh vien thu %d \n",i+1);
		printf("id : %d \n",students[i].id);
		printf("ten : %s \n",students[i].name);
		printf("tuoi : %d \n",students[i].age);
		printf("sdt : %s \n",students[i].phoneNumber);
	}
	printf("moi ban nhap thong tin sinh vien can them \n");
	students[size].id=size+1;
	printf("ten :  ");
	fgets(students[size].name,20,stdin);
	printf("tuoi : ");
	scanf("%d",&students[size].age);
	fflush(stdin);
	printf("sdt : ");
	fgets(students[size].phoneNumber,15,stdin);
	size++;
	for (i=0;i<size;i++){
		printf("sinh vien thu %d \n",i+1);
		printf("id : %d \n",students[i].id);
		printf("ten : %s \n",students[i].name);
		printf("tuoi : %d \n",students[i].age);
		printf("sdt : %s \n",students[i].phoneNumber);
	}
		
	return 0;
}


