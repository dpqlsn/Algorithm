#include <stdio.h>
int main(void){
    int h, m;
    scanf ("%d %d", &h, &m);

    m -=45;
    if (m < 0) {
        h=(h-1+24) % 24;
        m +=60;
    }
    printf ("%d %d", h, m);
    return 0;
}