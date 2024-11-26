#include<stdio.h>
int main(){
	int n;
	printf("moi ban nhap vao mot so tu 1-10");
	scanf("%d",&n);
	if(n<1 ||n>10){
		printf("vui long nhap so trong khoang tu 1-10\n");
	} 
	printf("bang cuu chuong cua %d la\n",n);
	for(int  i = 1;i<=10;i++){
		printf("%d x %d = %d\n", n, i, n * i);
	}
	
	
	
	
	return 0; 
}
