#include<iostream>
using namespace std;
int main(void){
    int a, b, c;
    cin >> a >> b;
    c = b;
    b = a;
    a = c;
    cout << a << ' ' << b << endl;
    return 0;
}