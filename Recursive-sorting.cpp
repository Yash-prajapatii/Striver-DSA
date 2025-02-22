#include<bits/stdc++.h>
using namespace std;

// Recursive InsertionSort

void Rec_is(vector<int>& arr, int i, int n){
    if(i == n)return;
    int j = i;
    while(j > 0 && arr[j - 1] > arr[j]){
        swap(arr[j], arr[j-1]);
        j--;
    }
    Rec_is(arr, i + 1, n);
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    Rec_is(arr, 0, n);
    
    for(int num : arr){
        cout << num << " ";
    }
    cout << "\n";
    return 0;
}

// Recursive BubbleSort

#include<bits/stdc++.h>
using namespace std;

void Rec_bubble(vector<int>& arr, int n){
    if(n == 1)return;
    
    for(int i = 0; i < n - 1; i++){
        if(arr[i] > arr[i + 1]){
            swap(arr[i], arr[i + 1]);
        }
    }
    Rec_bubble(arr, n - 1);
}

//void bubble(vector<int>& arr){
//    Rec_bubble(arr, arr.size());
//}


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    Rec_bubble(arr, n);
    
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
