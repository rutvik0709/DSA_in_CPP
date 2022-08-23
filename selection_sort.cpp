#include<bits/stdc++.h>
using namespace std;
void swap(int *min, int *x){
    int temp = *min;
    *min=*x;
    *x = temp;
}
void selectionSort(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        int min = i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        if(min!=arr[i]){
            swap(&arr[min],&arr[i]);
        }
    }
    
}
int main(){
    int n=6;
    int arr[n]={3,1,2,4,9,5};
    selectionSort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}