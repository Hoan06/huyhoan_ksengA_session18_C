#include <stdio.h>

struct SinhVien {
	char name[20];
	int age;
	char phoneNumber[15];
};

int main(){
	
	struct SinhVien std1={"nguyen huy hoan ",18,"0345146806"
	};
	printf("ten : %s \n",std1.name);
	printf("tuoi : %d \n",std1.age);
	printf("sdt : %s \n",std1.phoneNumber);

	return 0;
}

