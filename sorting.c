#include <stdio.h>
void insertion_sort(int arr[], int n){
    int i,j,key;
    for(i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;

    }
}
void swap(int*x,int*y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
void selection_sort(int arr[],int n){
    int i,j,min_i;
    for(i=0;i<n-1;i++){
        min_i=i;
        for(j=i+1;j<n;j++)if(arr[j]<arr[min_i])min_i=j;
        swap(&arr[min_i],&arr[i]);
    }
}
void bubble_sort(int arr[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++)if(arr[j]>arr[j+1])swap(&arr[j],arr[j+1]);
    }
}
int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array items (space seperated): ");
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    insertion_sort(arr,n);
    printf("Array after sort: ");
    for(int i=0;i<n;i++)printf("%d ",arr[i]);
    return 0;
}