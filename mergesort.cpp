#include<bits/stdc++.h>

#define loop( i, start, end) for(int i = start; i < end; i++)

using namespace std;

void merge(int arr[], int start, int mid, int end){
    int i = start, j = end, k = 0;
    
}

void mergesort(int arr[], int start, int end){
    if(start < end){
        int mid = (start+end)/2;
        mergesort(arr, start, mid);
        mergesort(arr, mid+1,end);
        merge(arr, start, mid, end);
    }
}

int main(){
    int n; cin >> n;
    int arr[n];
    loop(i, 0, n) cin >> arr[i];
    int sum = 0;
    mergesort(arr, 0, n);
    return 0;
}