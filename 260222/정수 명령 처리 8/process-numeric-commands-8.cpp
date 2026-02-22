#include <iostream>
#include <string>
#include <list>

using namespace std;

int N;
string command[10000];
int A[10000];

int main() {
    cin >> N;
    list<int> DLL;
    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push_front" || command[i] == "push_back") {
            cin >> A[i];
            if(command[i] == "push_front"){
                DLL.push_front(A[i]);
            }
            else{
                DLL.push_back(A[i]);
            }
        }
        else if(command[i] == "pop_front" || command[i] == "pop_back"){
            if(command[i] == "pop_front"){
                cout << DLL.front() << endl;
                DLL.pop_front();
            }
            else{
                cout << DLL.back() << endl;
                DLL.pop_back();
            }
        }
        else if(command[i] == "size"){
            cout << DLL.size() << endl;
        }
        else if(command[i] == "empty"){
            cout << (DLL.empty() ? 1 : 0) << endl;
        }
        else{
            if(command[i] == "front"){
                cout << DLL.front() << endl;
            }
            else{
                cout << DLL.back() << endl;
            }
        }
    }

    // Please write your code here.
    return 0;
}
