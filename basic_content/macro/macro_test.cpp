#include<iostream>
#include<cstdio>
using namespace std;
#define exp(s) printf("test s is:%s\n", s)
#define exp1(s) printf("test s is:%s\n", #s)
#define exp2(s) #s

#define expA(s) printf("expA:%s\n", gc_##s)
#define expB(s) printf("expB:%s\n", gc_   ##   s)
#define gc_hello1 "I am gc_hello1"

#define MAX(a,b) ((a)>(b) ? (a) \
    :(b))
int main(){
    exp("hello");
    exp1(hello);
    string str = exp2(   bac );
    cout<<str<<"   "<<str.size()<<endl;

    string str1 = exp2(  asda      bac );
    cout<<str1<<" "<<str1.size()<<endl;

    const char* gc_hello = "I am gc_hello";
    expA(hello);
    expB(hello1);

    cout<<MAX(3,5)<<endl; 
    return 0;
}