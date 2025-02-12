#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n];
	unordered_map<int, int> mpp;
	for(int i = 0; i < n; i++){
	    cin >> arr[i];
	    mpp[arr[i]]++;
	}
	
	for(auto it : mpp){
	    cout << it.first << "->" << it.second << endl;
 	}
	/*
	int hash[13] = {0};
	for(int i = 0; i < n; i++){
	   hash[arr[i]] += 1;  
	}
  */
	
	int q;
	cin >> q;
	while(q--){
	    int c;
	    cin >> c;
	    cout << mpp[c] << endl;
	}
	return 0;

}

/*
Sample Input
6
1 2 4 5 3 2
2
1 2
Your Output
3->1
5->1
4->1
2->2
1->1
1
2
  */
