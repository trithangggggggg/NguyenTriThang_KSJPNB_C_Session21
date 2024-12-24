#include <stdio.h>
#include <stdlib.h>
int main() {
	char str[50];
	printf("moi ban nhap ky tu : ");
	fgets(str,sizeof(str),stdin);
	FILE *fptr;
	fptr = fopen("vuong.txt","w");
	if (fptr ==NULL){
		printf("KHong co file vuong.txt...!\n");
		return 1;
	}
	fprintf(fptr,"%s",str);
	fclose(fptr);
	printf("da luu file vuong.txt\n"); 
    return 0;
}
