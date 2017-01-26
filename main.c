#include <stdio.h>

int main(void) {
    int N = 0, W = 1, i = 0;
    int A[] = {};
    
    int low = 0, high = N - 1, mid = 0, counter = 0;
    
    while (low <= high && A[mid]!=W) {
        mid = low + ((high - low) / 2);
        if (A[mid] > W)
            high = mid - 1;
        else if (A[mid] < W){
            low = mid + 1;
        }
    }
    i = mid;
    while (A[i]==W){
        counter++;
        i++;
    };
    while (A[mid-1] == W) {
        counter++;
        mid--;
    }
    printf("%d\n", counter);
    return 0;
}
