#include <stdio.h>
int f(int n, int k, int t[]){
	int c = 0;
	for(int i=0; i<k; i++) c += t[i];
    
    int max = c;
    
    for(int i=k; i<n; i++){
        c = c - t[i-k] + t[i];
        if(c > max) max = c;
    }
    
    return max;
}

int main() {
	int n, k;
	scanf("%d %d", &n, &k);
    
	int t[n];
	for(int i=0; i<n; i++) scanf("%d", &t[i]);
	printf("%d", f(n, k, t));
    
	return 0;
}
