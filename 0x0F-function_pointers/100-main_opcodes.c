#include <stdio.h>
#include <stdlib.h>

void print_opcodes_of_main(int number_of_bytes) {
    char command[100];
    snprintf(command, sizeof(command), "objdump -d -j .text ./main | grep 'main>' -A %d | awk '{print $2}'", number_of_bytes / 2);

    FILE* fp = popen(command, "r");
    if (fp == NULL) {
        printf("Error executing objdump command.\n");
        return;
    }

    printf("Output format:\n");

    char opcode[3];
    while (fscanf(fp, "%s", opcode) != EOF) {
        printf("%s ", opcode);
    }

    printf("\n");
    pclose(fp);
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Usage: %s number_of_bytes\n", argv[0]);
        return 1;
    }

    int number_of_bytes = atoi(argv[1]);
    if (number_of_bytes <= 0) {
        printf("Invalid number of bytes.\n");
        return 1;
    }

    print_opcodes_of_main(number_of_bytes);

    return 0;
}
