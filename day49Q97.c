//Print the initials of aname
#include <stdio.h>

int main() {
    char first, middle, last;

    printf("Enter initials: ");
    scanf(" %c %c %c", &first, &middle, &last);

    printf("Initials: %c.%c.%c\n", first, middle, last);

    return 0;
}
