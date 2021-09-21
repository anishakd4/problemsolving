#include<iostream>
using namespace std;

int main(){
    int arr[10];
    cout<<arr<<endl;
    cout<<(&arr[0])<<endl;
    arr[0] = 89;
    arr[1] = 97;
    cout<<(*arr)<<endl;
    cout<<(*(arr+1))<<endl;

    int *p = &arr[0];

    cout<<"sizeof(arr)== "<<sizeof(arr)<<endl;
    cout<<"sizeof(p)== "<<sizeof(p)<<endl;

    cout<<"p== "<<p<<endl;
    cout<<"&p== "<<(&p)<<endl;

    cout<<"arr== "<<arr<<endl;
    cout<<"&arr== "<<(&arr)<<endl;

    p = p + 1;
    //arr = arr + 1; //array type 'int [10]' is not assignable because arrray is not assigned extra 8 bytes 
    //to store address like 8 bytes are assigned for pointers. also because symbol table values can't be re-assigned, 
    //once assigned can't be changed


    return 0;
}