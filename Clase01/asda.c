#include <stdio.h>

#define MAX_FRIENDS 5

int main() {
    char friends[MAX_FRIENDS][100];

    printf("Enter the names of your friends:\n");

    for (int i = 0; i < MAX_FRIENDS; i++) {
        printf("Friend %d: ", i + 1);
        fgets(friends[i], sizeof(friends[i]), stdin);
    }

    printf("\nYour friennnnds are:\n");

    for (int i = 0; i < MAX_FRIENDS; i++) {
        printf("%d. %s", i + 1, friends[i]);
    }

    return 0;
}