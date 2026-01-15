#include <iostream>

using namespace std;

int a, b;

bool isPerfect(int n){
    return (n % 2 != 0 && n % 10 != 5 && (n % 3 != 0 || n % 9 == 0) ? true : false);
}

int main() {
    cin >> a >> b;
    int cnt{0};
    // Please write your code here.
    for(int i = a; i <= b; i++){
        if(isPerfect(i)){cnt++;}
    }
    cout << cnt;
    return 0;
}