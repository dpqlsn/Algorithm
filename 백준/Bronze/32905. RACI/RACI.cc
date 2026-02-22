#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    char s[5];
    int valid = 1;

    for(int i = 0; i < n; i++) {
        int countA = 0;
        for(int j = 0; j < m; j++) {
            scanf("%s", s);
            if(s[0] == 'A') countA++;
        }
        if(countA != 1) {
            valid = 0;
        }
    }

    if(valid) printf("Yes");
    else printf("No");

    return 0;
}