#include <iostream>
#include <cmath>
using namespace std;

int a, b;

bool f(int n){
    if(n == 1){return false;}
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){return false;}
    }
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return (sum % 2 == 0 ? true : false);
}

int main() {
    cin >> a >> b;
    int cnt = 0;
    // Please write your code here.
    for(int i = a; i <= b; i++){
        if(f(i)){cnt++;}
    }
    cout << cnt;
    return 0;
}