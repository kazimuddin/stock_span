#include <iostream>
#include  <vector>
using namespace std;
void insert(vector<int>&arr, int n){
	cout << "Enter the elements of the array : ";
	for(int i = 0; i < n ; i++){
		cin >> arr[i];
	}
}
int linearsearch(const vector<int>& arr  ){
	cout << "Enter the number to search : ";
	int target; cin >> target;
	for(int i = 0; i < arr.size() ; i++){
		if(arr[i] == target){
			return i;
		}
	}
	return -1;
	
}
int main(){
	cout << "Enter the size of the array : " ;
	int n; cin >> n;
	if(n <= 0){
		cout << "Invalid array size" << endl;
		return 0;
	}
	vector<int> arr(n);
	insert(arr,n);
	int ans = linearsearch(arr);
	if(ans != -1){
		cout << "Element found at index : " << ans;
	}else{
		cout << "Not found ";
	}
	
	
	return 0;
}
