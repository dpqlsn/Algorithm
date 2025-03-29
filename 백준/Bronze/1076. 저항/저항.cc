#include <stdio.h>
#include <string.h>
#include <math.h>

const char *colors[] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};

int get_index(const char *color) {
    for (int i = 0; i < 10; i++) {
        if (strcmp(colors[i], color) == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    char input1[10], input2[10], input3[10];
    scanf("%s %s %s", input1, input2, input3);
    
    int a = get_index(input1);
    int b = get_index(input2);
    int c = get_index(input3);
    
    if (a == -1 || b == -1 || c == -1) {
        printf("Invalid color input\n");
        return 1;
    }
    
    long long result = (a * 10 + b) * pow(10, c);
    printf("%lld\n", result);
    
    return 0;
}
