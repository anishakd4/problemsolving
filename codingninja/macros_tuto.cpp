#include<iostream>
//pre-processor directive
#define PI 3.14 //it will do the magic before compile
using namespace std;

int main(){
    int r;
    cin>>r;

    cout<<(PI*r*r)<<endl;

    return 0;
}