#include <stdio.h>

struct SinhVien {
	int id;
	char name[20];
	int age;
};

int findStudents(struct SinhVien students[], char name[],int size );
void deleteSinhVien(struct SinhVien students[],int *size,int checkDelete);

int main(){
	char index[20];
	int size=5;
	struct SinhVien students[50];
	int i;
	for (i=0;i<size;i++){
		students[i].id=i+1;
		printf("sinh vien thu %d \n",i+1);
		printf("ten :  ");
		getchar();
		fgets(students[i].name,20,stdin);
		printf("tuoi : ");
		scanf("%d",&students[i].age);
	}
	printf("nhap ten sinh vien ban muon xoa ");
	getchar();
	fgets(index,20,stdin);
	index[strcspn(index, "\n")] = '\0';
	int check = findStudents(students,index,size);
	if (check==-1){
		printf("khong tim thay sinh vien \n");
	} else {
		deleteSinhVien(students,&size,check);
	}
	
	for (i=0;i<size;i++){
		printf("sinh vien thu %d \n",i+1);
		printf("id : %d \n",students[i].id);
		printf("ten : %s \n",students[i].name);
		printf("tuoi : %d \n",students[i].age);
	}

	return 0;
}
int findStudents(struct SinhVien students[], char name[],int size ){
	for (int i=0;i<size;i++){
		if (strcmp(students[i].name,name)==1){
			return i;
		}
	}
	return -1;
}
void deleteSinhVien(struct SinhVien students[],int *size,int checkDelete){
	for (int i=checkDelete;i<(*size)-1;i++){
		students[i]=students[i+1];
	}
	(*size)--;
	for (int i = 0; i < *size; i++) {
        students[i].id = i + 1;
    }
}

