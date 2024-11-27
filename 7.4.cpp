#include<stdio.h>

int main(){
	int a;
	printf("nhap vao so phan tu cua mang : ");
	scanf("%d",&a);
	int phantu[a]={};
	for(int i=0 ; i<=a-1 ; i++){
		printf("nhap vao phan tu trong mang: ",i);
		scanf("%d",&phantu[i]);
	}
	for(int i=0 ; i<a ; i++){
		printf("%d ",phantu[i]);
	}
	
	return 0;
}
