#include<iostream>
using namespace std;
#pragma pack(8)
class A{
    char c;
    long b;
};

class B{
    char c;
    A a;
    long long b;
};
class C{};
class D{
    long a;
};
int main(){
    cout << sizeof(C) << endl;
    cout << sizeof(D) << endl;
    cout << sizeof(B) << endl;
    cout << sizeof(long long) << endl;
    cout << sizeof(long) << endl;
}
#pragma pack()