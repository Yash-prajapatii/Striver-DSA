#include <bits/stdc++.h>
using namespace std;

//selection_sort

void selection_sort(int arr[], int n){
    for(int i = 0; i <= n - 2; i++){
        int mini = i;
        for(int j = i; j <= n - 1; j++){
            if(arr[j] < arr[mini]){
            mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

//bubble_sort

void bubble_sort(int arr[], int n){
    for(int i = n - 1; i >= 0; i--){
        int didSwap = 0;
        for(int j = 0; j <= i - 1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                didSwap = 1;
            }
        }
        if(didSwap == 0)
        break;
    }
}

//insertion_sort

void insertion_sort(int arr[], int n){
    for(int i =0; i <= n - 1; i++){
        int j = i;
        while(j > 0 && arr[j - 1] > arr[j]){
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}

//main function

int main() {
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
	    cin >> arr[i];
	}
  selection_sort(arr, n);
  bubble_sort(arr, n);
	insertion_sort(arr, n);
	for(int i = 0; i < n; i++){
	    cout << arr[i] << " ";
	}
	return 0;

}
/*
Sample Input
6
13 24 20 9 46 52

Your Output
9 13 20 24 46 52 
*/
