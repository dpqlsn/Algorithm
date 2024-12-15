#include <stdio.h>
void merge(int num[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    int L[n1], R[n2];
    
    for (int i = 0; i < n1; i++)
        L[i] = num[left + i];
    for (int i = 0; i < n2; i++)
        R[i] = num[mid + 1 + i];
    
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            num[k] = L[i];
            i++;
        } else {
            num[k] = R[j];
            j++;
        }
        k++;
    }
    
    while (i < n1) {
        num[k] = L[i];
        i++;
        k++;
    }
    
    while (j < n2) {
        num[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int num[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        
        mergeSort(num, left, mid);
        mergeSort(num, mid + 1, right);
        
        merge(num, left, mid, right);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int num[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    mergeSort(num, 0, n - 1);

    for (int i = 0; i < n; i++) {
        printf("%d\n", num[i]);
    }

    return 0;
}