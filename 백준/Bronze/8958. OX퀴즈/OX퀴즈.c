#include <stdio.h>
int main() {
	int n;
	char c[101]={};
	scanf("%d",&n);
	for(int i=0;i<n;i++) {
		scanf("%s",c);
		int sum = 0;
		int x = 1;
		for(int i=0;c[i]!='\0';i++) {
			if(c[i]=='O') {
				sum += x;
				x++;
			}
			else x = 1;
		}
		printf("%d\n",sum);
	}
	return 0;
}