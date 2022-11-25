#include <stdio.h>

void main() {
    int n;
    printf("Enter the size of the Array: ");
    scanf("%d",&n);
    int b[n];
    for(int x=0; x<n; x++) {
        printf("Enter the %d value of array : ", x+1);
        scanf("%d",&b[x]);
    }
    int temp;
    for (int i=0;i<n;i++) {
        for(int j=0; j<n-1; j++) {
            if (b[j] > b[j+1]) {
                temp = b[j];
                b[j]= b[j+1];
                b[j+1] =temp;
            }
        }
    }
    printf("Sorted Array is : ");
    for(int z=0;z<n;z++) {
        printf("%d ",b[z]);
    }
  }
