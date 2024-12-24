#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fptr;
    fptr = fopen("test.txt", "r");
    if (fptr == NULL) {
        printf("khong ton tai file !");
        return 1;
    }

    char character[200];
    if (fgets(character, sizeof(character), fptr) != NULL) {
        printf("dong dau tien cua test.txt: %s", character);
    } else {
        printf("khong thay file");
    }

    fclose(fptr);
    printf("\nfile thanh cong");
    return 0;
}

