#include <stdio.h>

int main() {
    char names[5][50]; // Array to store 5 names, each with a maximum length of 50 characters

    printf("Enter 5 names:\n");

    for (int i = 0; i < 5; i++) {
        printf("Name %d: ", i + 1);
        scanf("%s", names[i]);
    }

    printf("\nEntered names:\n");

    for (int i = 0; i < 5; i++) {
        printf("%d. %s\n", i + 1, names[i]);
    }

    return 0;
}