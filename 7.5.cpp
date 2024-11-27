#include<stdio.h>

int main(){
	int number[5]={4,6,3,7,2};
	int max=number[0];
	int min=number[0];
	for(int i=0 ; i<5 ; i++){
		if(number[i]>max){
			max=number[i];
		}
		if(number[i]<min){
			min=number[i];
		}
	}
	printf("phan tu lon nhat la %d\nphan tu nho nhat la %d",max,min);
	
	return 0;
}
