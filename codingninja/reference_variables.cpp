#include<iostream>
using namespace std;

void increment(int& i){
    i++;
}

//system can clear memory after function call but we are still accessing it from main. so we should be cautious.
// warning: reference to stack memory associated with local variable 'a' returned
int& f(int n){
    int a = n;
    return a;
}

//system can clear memory after function call but we are still accessing it from main. so we should be cautious.
int* f2(int n){
    int a = n;
    return &a;
}

int main(){
    int i=10;
    int& j=i;

    //int &k; //declaration of reference variable 'k' requires an initializer
    //k = i;

    cout<<(&i)<<endl;
    cout<<(&j)<<endl;

    i++;
    cout<<i<<endl;
    cout<<j<<endl;

    increment(i);
    cout<<i<<endl;

    int& k = f(i);

    return 0;
}