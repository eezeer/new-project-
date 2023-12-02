#include<stdio.h>

int main(){
	int a,b;
	
	printf("donner a :");
	scanf("%d",&a);
	
	printf("donner b :");
	scanf("%d",&b);
	
	//if(a % 2 == 0 && b % 2 == 0 || a % 2 != 0 && b % 2 != 0 ){
	if(a%2==b%2 ){
		printf("%d et %d sont de meme parite",a,b);
	}
	else{
		printf("%d et %d il sont de parite different",a,b);
	} 
		
	return 0;
}
