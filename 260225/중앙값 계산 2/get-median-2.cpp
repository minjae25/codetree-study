#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int arr[100];
vector<int> newArr;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    for(int i = 0; i < n; i++){
        newArr.push_back(arr[i]);
        sort(newArr.begin(), newArr.end());
        if(i % 2 != 1){
            cout << newArr[newArr.size()/2] << ' ';
        }
    }
    return 0;
}