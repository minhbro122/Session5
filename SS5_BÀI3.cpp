#include<stdio.h>
int main(){
	int n,tong=0;
	int i=1; 
	printf("nhap vao mot so nguyen duong");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		tong+=i; 
	}
	printf("tong cac so tu 1 den%d ",n);
	printf("la%d",tong); 
	
	
	return 0; 
}
