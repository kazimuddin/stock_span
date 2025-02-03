#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> stockSpan(vector<int>& prices, int n) {
    vector<int> span(n);
    stack<int> st;  

    for (int i = 0; i < n; i++) {
        while (!st.empty() && prices[st.top()] <= prices[i]) {
            st.pop();
        }
        
        span[i] = (st.empty()) ? (i + 1) : (i - st.top());
        st.push(i);
    }
    
    return span;
}

int main() {
    int n;
    cin >> n;
    vector<int> prices(n);
    
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    vector<int> result = stockSpan(prices, n);
    
    for (int span : result) {
        cout << span << " ";
    }
    cout << endl;
    
    return 0;
}

