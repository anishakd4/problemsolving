#include<iostream>
using namespace std;

int main(){
    int i=10;//if i is stored at memory location 700 then a entry saying i is int and stored at memory location 
    // 700 in the symbol table. symbol table is created at compile time
    cout<<&i<<endl; //addressses are hexdecimals 16 base numbers

    int * p = &i; //p is a pointer to a integer
    cout<<p<<endl;

    cout<<(*p)<<endl; //derefrence pointer

    float f = 10.2;
    float *pf = &f; 
    cout<<pf<<endl;

    double d = 122.32;
    double *pd = &d; 
    cout<<pd<<endl;

    //generally all type of pointers will take 8 bytes or 4bytes(closeley linked to 64 or 32 bit but that is also
    //not sure) 
    //but it can differ again depends on compiler
    cout<<sizeof(p)<<endl; 
    cout<<sizeof(pf)<<endl;
    cout<<sizeof(pd)<<endl;

    cout<<i<<endl;
    cout<<(*p)<<endl;

    i++;
    cout<<i<<endl;
    cout<<(*p)<<endl;

    (*p)++;
    cout<<i<<endl;
    cout<<(*p)<<endl;

    cout<<"**********"<<endl;

    int * q = p;
    *q = 45;
    cout<<i<<endl;
    cout<<(*p)<<endl;
    cout<<(*q)<<endl;

    cout<<"++++++++++++++"<<endl;

    int j;
    cout<<"j== "<<j<<endl;

    // //This part may or may not give error as it is pointing to some garbage address which can be critical memory
    // and may be possible that we don't have access to that.
    // int *m;
    // cout<<m<<endl;
    // cout<<"m== "<<(*m)<<endl;
    // (*m)++;
    // cout<<"m== "<<(*m)<<endl;

    // int *r = 0; //null pointer
    // cout<<"r== "<<(r)<<endl;
    // cout<<"r== "<<(*r)<<endl; //will give error
    
    //segmentation fault means as we are trying to access something of which we don't have access


    cout<<"**************** Pointer arithmetic"<<endl;
    int x = 5;
    int *k = &x;
    cout<<(*k)<<endl;
    k = k + 1; //It will point to the starting of next 4 bytes
    cout<<(*k)<<endl;
    k = k + 2; //It will move 8 bytes ahead;
    cout<<(*k)<<endl;

    return 0;
}