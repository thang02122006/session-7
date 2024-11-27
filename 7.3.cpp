#include<stdio.h>

int main(){
	int phantu[5]={3,4,5,6,7};
	if(phantu[0]%2==0){
		printf("%d\n",phantu[0]);
		}
    if(phantu[1]%2==0){
     	printf("%d\n",phantu[1]);
     }
    if(phantu[2]%2==0){
	    printf("%d\n",phantu[2]);
	}
	if(phantu[3]%2==0){
    	printf("%d\n",phantu[3]);
    }
	if(phantu[4]%2==0){
    	printf("%d\n",phantu[4]);
    }
    if(phantu[0]%2!=0 && phantu[1]%2!=0 && phantu[2]%2!=0 && phantu[3]%2!=0 && phantu[4]%2!=0){
    	printf("mang khong chua so chan");
	}
    
    
    return 0;
}

	

