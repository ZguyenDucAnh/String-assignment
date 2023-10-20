#include <stdio.h>
#include <string.h>
int main(){
	char str[100];
	printf("Nhap chuoi: "); 	gets(str);
	printf("Chuoi vua nhap la: "); puts(str);
	int length = strlen(str);
	printf("Tong so ky tu co trong chuoi la: %d",length);
	
	
	
	return 0;
}