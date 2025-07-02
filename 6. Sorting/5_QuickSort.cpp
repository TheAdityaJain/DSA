#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr,int st,int end){
    int idx = st - 1,pivot = arr[end];

    for(int j = st;j < end;j++){
        if(arr[j] <= pivot){
            idx++;
            swap(arr[j],arr[idx]);
        }
    }

    idx++;
    swap(arr[idx],arr[end]);
    return idx;
}

void quickSort(vector<int> &arr,int st,int end){
    if(st < end){
        int piv = partition(arr,st,end);
        quickSort(arr,st,piv - 1);
        quickSort(arr,piv + 1,end);
    }
}

int main() {
    vector<int> arr = {12,31,35,8,32,17};
    int n = arr.size();

    int st = 0,end = n - 1;
    quickSort(arr,st,end);

    for(int i : arr){
        cout<<i<<" ";
    }
    return 0;
}