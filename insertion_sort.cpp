#include<bits/stdc++.h>
using namespace std;
void swap(int arr[], int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
void insertionSort(int arr[], int n){
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>arr[j+1]){
            swap(arr,j+1,j);
            j--;
        }
        arr[j+1]=temp;
    }
    
}
int main(){
    int n = 6;
    int arr[n]={8,5,1,6,2,4};
    insertionSort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}