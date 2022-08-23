#include<bits/stdc++.h>
using namespace std;
void swap(int arr[],int a,int b){
    int temp;
    temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;   
}
void bubbleSort(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j+1]<arr[j]){
                swap(arr,j+1,j);
            }
        }
        
    }
    
}
int main(){
    int n = 5;
    int arr[n]={5,1,3,2,4};
    bubbleSort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}