#include <stdio.h>

int largest(int arr[], int n);

int main() {
    int arr[1000];
    int i, t, n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        for (i = 0; i < n; i++) scanf("%d", &arr[i]);
        printf("%d", largest(arr, n));
        printf("\n");
    }
    return 0;
}


int largest(int arr[], int n) 
{
    int x = arr[0];
    
    for(int i = 1; i < n; i++)
        if(x < arr[i])  x = arr[i];
    return x;
}
