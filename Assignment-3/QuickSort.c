#include<stdio.h>
void printArray(int*A, int n){
    for(int i=0;i<n;i++){
        printf("%d\t", A[i]);
    }
    printf("\n");
}

int partation(int A[], int low, int high){
    int pivot=A[low];
    int i=low+1;
    int j=high;
    int temp;

    while(i<j)
    {
        while(A[i]<=pivot){
            i++;
        }
        while(A[j]>pivot){
            j--;
        }
        if(i<j){
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
    }
    temp=A[low];
    A[low]=A[j];
    A[j]=temp;
    return j;
}

void quickSort(int A[], int low, int high)
{
    int partationIndex;
    if(low<high){
        partationIndex=partation(A, low, high);
        quickSort(A, low, partationIndex-1);
        quickSort(A, partationIndex+1, high);
    }
}
int main()
{
    int A[]={10,7,8,9,1,5,2,4,3,12};
    int n=sizeof(A)/sizeof(A[0]);
    printf("Unsorted array: ");
    printArray(A, n);
    
    quickSort(A, 0, n-1);
    
    printf("Sorted array: ");
    printArray(A, n);
    
    return 0;
}