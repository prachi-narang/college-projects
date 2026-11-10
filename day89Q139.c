//Show that enums store integers by printing assigned values.
#include <stdio.h>

enum Color {
    RED,
    GREEN,
    BLUE
};

int main() {
    printf("RED = %d\n", RED);
    printf("GREEN = %d\n", GREEN);
    printf("BLUE = %d\n", BLUE);

    return 0;
}
