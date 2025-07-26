#include <stdio.h>

int main() {
    int n;
    printf("enter size of array: ");
    scanf("%d",&n);
    
    float avg;
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter element %d :",i);
        scanf("%d",&arr[i]);
        avg += arr[i];
    }
    
    avg /= n;
    
    printf("the average of the array is : %f",avg);

    return 0;
}
