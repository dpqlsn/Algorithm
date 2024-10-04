#include <stdio.h>
int main() {
    int x, y, w, h;
    
    scanf("%d %d %d %d", &x, &y, &w, &h);
    
    int min_x = x < (w - x) ? x : (w - x);
    int min_y = y < (h - y) ? y : (h - y);
    
    int d = min_x < min_y ? min_x : min_y;
    printf("%d", d);
    
    return 0;
}