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
        for(j=0;j<n-i-1;j++)if(arr[j]>arr[j+1])swap(&arr[j],&arr[j+1]);
    }
}
void merge(int arr[],int l,int m,int r){
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;
    int L[n1],R[n2];
    for(i=0;i<n1;i++)L[i]=arr[l+i];
    for(j=0;j<n2;j++)R[j]=arr[m+1+j];
    i=0;
    j=0;
    k=l;
    while(i<n1&&j<n2){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        }else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=R[j];
        j++;
        k++;
    }
}
void merge_sort(int arr[],int l,int r){
    if(l<r){
        int mid=l+(r-l)/2;
        merge_sort(arr,l,mid);
        merge_sort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}
int partition(int arr[], int low, int high){
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<=high-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return i+1;
}
void quick_sort(int arr[],int low,int high){
    if(low<high){
        int pi=partition(arr,low,high);
        quick_sort(arr,low,pi-1);
        quick_sort(arr,pi+1,high);
    }
}
int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array items (space seperated): ");
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    printf("Enter sort method:\n\n1) Insertion Sort\n2) Selection Sort\n3) Bubble Sort\n4) Merge Sort\n5) Quick Sort\n\nEnter your choice: ");
    int oper;
    scanf("%d",&oper);
    switch(oper){
        case 1:
            insertion_sort(arr,n);
            break;
        case 2:
            selection_sort(arr,n);
            break;
        case 3:
            bubble_sort(arr,n);
            break;
        case 4:
            merge_sort(arr,0,n-1);
            break;
        case 5:
            quick_sort(arr,0,n-1);
            break;
        default:
            printf("Invalid sort selected.");
            return 0;
    }
    bubble_sort(arr,n);
    printf("Array after sort: ");
    for(int i=0;i<n;i++)printf("%d ",arr[i]);
    return 0;
}