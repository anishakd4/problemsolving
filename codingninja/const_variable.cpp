#include<iostream>

using namespace std;

void g(const int & a){

}

void f(const int * a){
    
}
int main(){
    const int i = 10; 
    //i=20; //cannot assign to variable 'i' with const-qualified type 'const int'

    //const int j; //default initialization of an object of const type 'const int'

    int j=20;
    const int & k = j;
    //k++; //cannot assign to variable 'k' with const-qualified type 'const int &'

    cout<<k<<endl;
    j++;
    cout<<k<<endl;

    const int j2=45;
    const int& k2 = j;
    //j2++; //error
    //k2++ //error

    const int j3 = 90;
    // int &k3 = j3; //error
    // k3++;

    int const m = 89;
    //int * n = &m; //cannot initialize a variable of type 'int *' with an rvalue of type 'const int *'
    int const * n = &m;

    int q = 89;
    const int * r = &q;
    cout<<(*r)<<endl;
    q++;
    cout<<(*r)<<endl;


    int a = 20;
    int b = 56;
    const int * p4 = &a;
    int * const p5 = &a;
    (*p5)++;
    //p5=&b; error

    const int * const p6 = &a;
    //(*p6)++; //error //read-only variable is not assignable
    //p6 = &b; //error //cannot assign to variable 'p6' with const-qualified type 'const int *const'

    return 0;
}