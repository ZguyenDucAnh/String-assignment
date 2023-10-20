#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//Kiem tra xem co la chuoi chuan khong
int StandardString(char *st){
	int len = strlen(st);
	if(st[0] == ' ' || st[len - 1] == ' '){
	return 0;
	}
	return 1;
}
int main(){
	char st[1000];
	printf("Enter a sentence: "); gets(st);
	printf("\nyou entered: "); puts(st);
	if(StandardString(st)){
		printf("\nThis is standard string");
	}else{
		printf("\nThis is not standard string");
	}
	return 0;
}

/* Vidu: 
Hello -> chuoi chuan

*/
/* Vidu: 
 Hello     -> Khong la chuoi chuan

*/