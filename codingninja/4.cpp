#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3};
    char b[] = "abc";

    cout<<arr<<endl;
    cout<<b<<endl;

    char *c = &b[0];
    cout<<c<<endl;

    char c1 = 'a';
    char* pc = &c1;

    cout<<c1<<endl;
    cout<<pc<<endl;

    char str[] = "abcde"; //for this first temp memory is created then data is copied to the memory created for array.
    char *pstr = "abcde"; //this is risky as pointer is pointing to the temp memory created for string literal.

    cout<<str<<endl;
    cout<<pstr<<endl;

    return 0;
}