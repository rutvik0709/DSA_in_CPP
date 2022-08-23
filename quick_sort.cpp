#include<bits/stdc++.h>
using namespace std;
void swap(int arr[],int i,int j){
    int temp;
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int partition(int arr[],int low,int high){
    int pivot = arr[high];
    int i = low-1;
    for (int j = low; j < high; j++)
    {
        if(arr[j] < pivot){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,high);
    return i+1;
    

}
void quickSort(int arr[],int low,int high){
    if(low<high){
        int pi = partition(arr,low,high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }

}
int main(){
    int arr[]={15,32,12,27,4};
    quickSort(arr,0,4);
    for (int i = 0; i < 5; i++)  
    {
        cout << arr[i]<<" ";
    }
    
}