#include<iostream>
using namespace std;
union un{
    struct Base{int a; int b; int c;}u;
    long long i;
};
int main(){
    un b;
    b.u.a = 10;
    printf("a: %d, b: %d, c: %d, i:%ll\n", b.u.a, b.u.b, b.u.c, b.i);
    b.u.b = 11;
    printf("a: %d, b: %d, c: %d, i:%ll\n", b.u.a, b.u.b, b.u.c, b.i);
    b.u.c = 12;
    printf("a: %d, b: %d, c: %d, i:%ll\n", b.u.a, b.u.b, b.u.c, b.i);
    b.i = 0;
    printf("a: %d, b: %d, c: %d, i:%ll\n", b.u.a, b.u.b, b.u.c, b.i);
    cout << sizeof(int) << " " << sizeof(unsigned int) << endl; 
    return 0;
}