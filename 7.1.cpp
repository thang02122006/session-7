#include<stdio.h>

int main(){
	int a;
	int danhsach[5]={1,2,3,4,5};
	for(int i=0 ; i<5 ; i++){
		printf("%d\n",danhsach[i]);
		a=i;
	}
	printf("do dai cau mang la %d",a);
    
	return 0;
}
