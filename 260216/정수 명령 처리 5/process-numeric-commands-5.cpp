#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

enum class command{
    push_back,
    pop_back,
    size,
    get
};

unordered_map<string, command> commandList = {
    {"push_back", command::push_back},
    {"pop_back", command::pop_back},
    {"size", command::size},
    {"get", command::get}
};

int main() {
    // Please write your code here.
    int t;
    cin >> t;
    vector<int> dynamicArray;
    for(int i = 0; i < t; i++){
        string input;
        int n;
        cin >> input;
        switch(commandList[input]){
            case command::push_back:
                cin >> n;
                dynamicArray.push_back(n);
                break;
            case command::pop_back:
                dynamicArray.pop_back();
                break;
            case command::size:
                cout << dynamicArray.size() << '\n';
                break;
            case command::get:
                cin >> n;
                cout << dynamicArray[n-1] << '\n';
                break;
        }
    }
    return 0;
}