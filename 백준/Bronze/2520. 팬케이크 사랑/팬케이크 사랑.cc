#include <stdio.h>
#include <math.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int m, y, su, sa, f;
        int b, s, c, w;
        
        getchar();
        
        scanf("%d %d %d %d %d", &m, &y, &su, &sa, &f);
        
        scanf("%d %d %d %d", &b, &s, &c, &w);
        
        double xm = (double)m / 8;
        double xy = (double)y / 8;
        double xsu = (double)su / 4;
        double xsa = (double)sa / 1;
        double xf = (double)f / 9;
        
        double x = fmin(fmin(fmin(fmin(xm, xy), xsu), xsa), xf);
        int maxb = (int)(x * 16);
        
        int maxp = min(maxb, b + s / 30 + c / 25 + w / 10);
        
        printf("%d\n", maxp);
    }
    
    return 0;
}
