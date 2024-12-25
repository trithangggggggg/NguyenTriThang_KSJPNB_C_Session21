#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *file;
    int line_count;

    file = fopen("test2.txt", "w");
    if (file == NULL) {
        printf("Khong the mo file de ghi. Vui long kiem tra lai.\n");
        return 1;
    }

    printf("Nhap so dong ban muon ghi vao file: ");
    scanf("%d", &line_count);
    getchar();

    for (int i = 0; i < line_count; i++) {
        char line_content[256];
        printf("Nhap noi dung cho dong %d: ", i + 1);
        fgets(line_content, sizeof(line_content), stdin);

        size_t len = strlen(line_content);
        if (len > 0 && line_content[len - 1] == '\n') {
            line_content[len - 1] = '\0';
        }

        fprintf(file, "%s\n", line_content);
    }

    fclose(file);
    printf("Ghi du lieu vao file thanh cong.\n");

    file = fopen("test2.txt", "r");
    if (file == NULL) {
        printf("Khong the mo file de doc. Vui long kiem tra lai.\n");
        return 1;
    }

    printf("\nNoi dung trong file test2.txt:\n");
    char line_content[256];
    while (fgets(line_content, sizeof(line_content), file) != NULL) {
        printf("%s", line_content);
    }

    fclose(file);
    printf("\nKet thuc chuong trinh.\n");

    return 0;
}

