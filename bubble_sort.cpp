#include<iostream>
using namespace std;
int main(){
	int N; cin >> N;
	int arr[N];
	for(int i  = 0; i < N ; i++){
		cin >> arr[i];
	}
	int swaps = 0;
	int passes = 0;
	int flag;
	for(int i = 0; i < N - 1 ; i++){
		flag = 0;
		passes++;
		for(int j = 0; j < N - i - 1 ; j++){
			if(arr[j] > arr[j + 1]){
				swaps++;
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 1;
			}
		}
		if(flag == 0){
			break;
		}
	}
	cout << "Swaps " << swaps  << endl;
	cout << "Passes " << passes <<endl;
	for(int nums : arr){
		cout  << nums << " ";
	}
	return 0;
}
