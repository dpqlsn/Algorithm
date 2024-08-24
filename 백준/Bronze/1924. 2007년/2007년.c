#include <stdio.h>
int main() {
    int x, y;
    int day = 0;
    int month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char *weekday[] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

    scanf("%d %d", &x, &y);

    for (int i = 0; i < x - 1; i++) {
        day += month[i];
    }
    day += (y - 1);
    printf("%s\n", weekday[(day + 1) % 7]);

    return 0;
}