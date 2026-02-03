#include <stdio.h>
#include <time.h>

int main() {
    time_t t = time(NULL);
    struct tm *utc = gmtime(&t);

    printf("%d\n", utc->tm_year + 1900);
    printf("%d\n", utc->tm_mon + 1);
    printf("%d\n", utc->tm_mday);

    return 0;
}