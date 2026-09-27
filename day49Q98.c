//Print initials of a name with the surname displayed in full.
#include <stdio.h>

int main() {
    char first[20], surname[20];

    printf("Enter first name and surname: ");
    scanf("%s %s", first, surname);

    printf("%c. %s", first[0], surname);

    return 0;
}
