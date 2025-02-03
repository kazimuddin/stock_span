#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

 void countingSort(vector<string>& arr, int index) {
    int n = arr.size();
    vector<string> output(n);
    int count[26] = {0};

     for (int i = 0; i < n; i++) {
        count[arr[i][index] - 'a']++;
    }

     for (int i = 1; i < 26; i++) {
        count[i] += count[i - 1];
    }

     for (int i = n - 1; i >= 0; i--) {
        output[count[arr[i][index] - 'a'] - 1] = arr[i];
        count[arr[i][index] - 'a']--;
    }

     for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

 void radixSort(vector<string>& arr, int wordLength) {
     for (int i = wordLength - 1; i >= 0; i--) {
        countingSort(arr, i);
    }
}

int main() {
    int N;
    cin >> N;
    vector<string> arr(N);
    
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int wordLength = arr[0].size();  
    radixSort(arr, wordLength);

     for (const string& str : arr) {
        cout << str << " ";
    }
    
    return 0;
}

