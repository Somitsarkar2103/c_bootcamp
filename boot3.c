#include <stdio.h>

int main() {
    int total, hours, minutes, seconds;

    scanf("%d", &total);

    hours = total / 3600;
    minutes = (total % 3600) / 60;
    seconds = total % 60;

    printf("%d hours %d minutes %d seconds", hours, minutes, seconds);

    return 0;
}