#include <iostream>

using namespace std;

int a;
int c;
char o;

int add(){
    return a+c;
}
int sub(){
    return a-c;
}
int mul(){
    return a*c;
}
int div(){
    return a/c;
}

int main() {
    cin >> a >> o >> c;

    // Please write your code here.
    if(o == '+'){
        cout << a << " + " << c << " = " << add();
    }
    else if(o == '-'){
        cout << a << " - " << c << " = " << sub();
    }
    else if(o == '*'){
        cout << a << " * " << c << " = " << mul();
    }
    else if(o == '/'){
        cout << a << " / " << c << " = " << div();
    }
    else{cout << "False";}
    return 0;
}