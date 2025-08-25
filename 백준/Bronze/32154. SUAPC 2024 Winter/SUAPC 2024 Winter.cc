#include <stdio.h>

int main() {
    int rank_num;
    scanf("%d", &rank_num);

    int count;
    char letters[11];

    if(rank_num == 1) {
        count = 11;
        char temp[] = {'A','B','C','D','E','F','G','H','J','L','M'};
        for(int i=0; i<count; i++) letters[i] = temp[i];
    }
    else if(rank_num == 2 || rank_num == 3) {
        count = 9;
        char temp[] = {'A','C','E','F','G','H','I','L','M'};
        for(int i=0; i<count; i++) letters[i] = temp[i];
    }
    else if(rank_num == 4) {
        count = 9;
        char temp[] = {'A','B','C','E','F','G','H','L','M'};
        for(int i=0; i<count; i++) letters[i] = temp[i];
    }
    else if(rank_num >= 5 && rank_num <= 9) {
        count = 8;
        char temp[] = {'A','C','E','F','G','H','L','M'};
        for(int i=0; i<count; i++) letters[i] = temp[i];
    }
    else if(rank_num == 10) {
        count = 8;
        char temp[] = {'A','B','C','F','G','H','L','M'};
        for(int i=0; i<count; i++) letters[i] = temp[i];
    }
    else {
        printf("Invalid rank\n");
        return 0;
    }

    printf("%d\n", count);
    for(int i=0; i<count; i++) {
        printf("%c ", letters[i]);
    }
    printf("\n");

    return 0;
}
