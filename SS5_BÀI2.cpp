#include<stdio.h> 
int main(){
	int so_nhap;
	int soCanTim;
	int soLanNhap=0; 
	printf("nhap so can tim");
	scanf("%d",&soCanTim);
	do{
		printf("nhap mot so");
		scanf("%d",so_nhap);
		soLanNhap++; 
	} while(so_nhap!=soCanTim);
	printf("ban da tim thay so can tim",soLanNhap);
	
	
	
	
	return 0; 
}
