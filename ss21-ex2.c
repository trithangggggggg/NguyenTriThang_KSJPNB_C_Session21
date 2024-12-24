#include <stdio.h>

int main() {
	
    FILE *file = fopen("test.txt", "r");
    
    
    if (file == NULL) {
        printf("Khong the mo file.\n");
        return 1;
    }

    char firstChar = fgetc(file);
    if (firstChar != EOF) {
        printf("Ky tu dau tien trong file: %c\n", firstChar);
    } else {
        printf("File rong.\n");
    }


    fclose(file);
    
    
    return 0;
}

