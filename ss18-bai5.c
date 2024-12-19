#include <stdio.h>

struct SinhVien {
	int id;
	char name[20];
	int age;
};

int findStudents(struct SinhVien students[], int id );

int main(){
	int index;
	
	struct SinhVien students[50];
	int i;
	for (i=0;i<5;i++){
		students[i].id=i+1;
		printf("sinh vien thu %d \n",i+1);
		printf("ten :  ");
		getchar();
		fgets(students[i].name,20,stdin);
		printf("tuoi : ");
		scanf("%d",&students[i].age);
	}
	printf("nhap id cua sinh vien muon sua thong tin ");
	scanf("%d",&index);
	int check = findStudents(students,index);
	if (check==-1){
		printf("khong tim thay sinh vien ");
	} else {
		printf("nhap ten moi ");
		getchar();
		fgets(students[index].name,20,stdin);
		printf("nhap tuoi moi ");
		scanf("%d",&students[index].age);
	}
	
	for (i=0;i<5;i++){
		printf("sinh vien thu %d \n",i+1);
		printf("id : %d \n",students[i].id);
		printf("ten : %s \n",students[i].name);
		printf("tuoi : %d \n",students[i].age);
	}

	return 0;
}
int findStudents(struct SinhVien students[], int id ){
	for (int i=0;i<5;i++){
		if (students[i].id==id){
			return i;
		}
	}
	return -1;
}


