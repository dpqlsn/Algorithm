#include <stdio.h>

int main() {
    int array[9];
    int sum = 0;
    
    for (int i = 0; i < 9; i++) {
        scanf("%d", &array[i]);
        sum += array[i];
    }

    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (array[i] > array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (sum - array[i] - array[j] == 100) {
                for (int k = 0; k < 9; k++) {
                    if (k != i && k != j) {
                        printf("%d\n", array[k]);
                    }
                }
                return 0;
            }
        }
    }

    return 0;
}
