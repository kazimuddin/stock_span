#include <iostream>
#include <vector>
using namespace std;
void add(vector<int>& arr , int n){

	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
}

void display(vector<int>& arr) {  // No const
    arr[0] = 100; // Accidental modification
    for (int num : arr) {
        cout << num << " ";
    }
}

int main(){
	int n; cin >> n;
	vector<int> arr(n);
	add(arr,n);
	display(arr);
	return 0;
}
