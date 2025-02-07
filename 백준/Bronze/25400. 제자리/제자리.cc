#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int list1[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &list1[i]);
    }

    int k = 1, cnt = 0;
    
    for (int i = 0; i < n; i++) {
        if (list1[i] == k) {
            k++;
        } else {
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}