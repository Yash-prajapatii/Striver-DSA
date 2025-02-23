#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i] <= pivot && i <= high - 1){
            i++;
        }
        while(arr[j] > pivot && j >= low + 1){
            j--;
        }
        if(i<j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void quicksort(vector<int>& arr, int low, int high){
    if(low < high){
        int pindex = partition(arr, low, high);
        quicksort(arr, low, pindex-1);
        quicksort(arr, pindex+1, high);
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    quicksort(arr, 0 , n-1);
    
    for(int num : arr){
        cout << num << " ";
    }
    cout << "\n";
    return 0;
}

/*
Sample Input
9
3 1 2 4 1 5 2 6 4

Your Output
1 1 2 2 3 4 4 5 6 
*/
