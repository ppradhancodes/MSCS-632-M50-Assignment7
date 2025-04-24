#include <stdio.h>
#include <stdlib.h>

float calculate_mean(int arr[], int n) {
    int sum = 0;
    for(int i=0; i<n; i++) sum += arr[i];
    return (float)sum/n;
}

float calculate_median(int arr[], int n) {
    // Bubble sort implementation
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    return n%2 == 0 ? 
        (arr[n/2-1] + arr[n/2])/2.0 : 
        arr[n/2];
}

int calculate_mode(int arr[], int n) {
    int max_count = 0, mode = arr[0];
    for(int i=0; i<n; i++) {
        int count = 0;
        for(int j=0; j<n; j++) {
            if(arr[j] == arr[i]) count++;
        }
        if(count > max_count || (count == max_count && arr[i] < mode)) {
            max_count = count;
            mode = arr[i];
        }
    }
    return mode;
}
