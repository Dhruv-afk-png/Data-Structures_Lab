/*You are tasked with writing a program that sorts an array using the Merge Sort algorithm. 
The program should read the elements of the array, display them before and after sorting.*/

#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int curr_size = 1; curr_size <= n - 1; curr_size = 2 * curr_size) {
        for(int left_start = 0; left_start < n - 1; left_start += 2 * curr_size) {

            int mid = left_start + curr_size - 1;
            if(mid >= n - 1)
                continue;

            int right_end = left_start + 2 * curr_size - 1;
            if(right_end > n - 1)
                right_end = n - 1;

            int n1 = mid - left_start + 1;
            int n2 = right_end - mid;

            int L[n1], R[n2];

            for(int i = 0; i < n1; i++)
                L[i] = arr[left_start + i];

            for(int j = 0; j < n2; j++)
                R[j] = arr[mid + 1 + j];

            int i = 0, j = 0, k = left_start;

            while(i < n1 && j < n2) {
                if(L[i] <= R[j]) {
                    arr[k] = L[i];
                    i++;
                } else {
                    arr[k] = R[j];
                    j++;
                }
                k++;
            }

            while(i < n1) {
                arr[k] = L[i];
                i++;
                k++;
            }

            while(j < n2) {
                arr[k] = R[j];
                j++;
                k++;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
