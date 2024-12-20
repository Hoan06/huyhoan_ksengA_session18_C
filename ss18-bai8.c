#include <stdio.h>

struct SinhVien {
	int id;
	char name[20];
	int age;
};
void addSinhVien (struct SinhVien students[],int index,int *size);

int main(){
    int index;
	int size=5;
	struct SinhVien students[50];
	int i;
	for (i=0;i<size;i++){
		students[i].id=i+1;
		printf("sinh vien thu %d \n",i+1);
		printf("ten :  ");
		fflush(stdin);
		fgets(students[i].name,20,stdin);
		printf("tuoi : ");
		scanf("%d",&students[i].age);
	}
	printf("nhap vi tri ban muon them ");
	scanf("%d",&index);
	if (index>=5 || index<0){
		printf("khong tim thay sinh vien \n");
	} else {
		addSinhVien(students,index,&size);
		printf("nhap ten : ");
		fflush(stdin);
	    fgets(students[index].name,20,stdin);
	    printf("nhap tuoi : ");
	    scanf("%d",&students[index].age);
	}
	
	for (i=0;i<size;i++){
		printf("sinh vien thu %d \n",i+1);
		printf("id : %d \n",students[i].id);
		printf("ten : %s",students[i].name);
		printf("tuoi : %d \n",students[i].age);
	}

	return 0;
}
void addSinhVien (struct SinhVien students[],int index,int *size){
	for (int i=*size;i>index;i--){
		students[i]=students[i-1];
	}
	(*size)++;
}

