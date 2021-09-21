#include<iostream>

using namespace std;

void learnPointerIntroduction(){
    cout<<"--------learnPointerIntroduction--------"<<endl;
    int m = 90; //m is stored at a address location.
    int n = 80; //n is stored at a address location. Program get to know where m and n are stored 
    //from symbol table. Symbol table is created at compile time. symbol table only tells that 
    //this is the address of m and it is a integer type.

    cout<<"address of m: "<<(&m)<<endl; //address of m. This is in hexadecimal format.
    int *r = &m; //pointers are variables which store addresses of other variable
    cout<<"*r: "<<(*r)<<endl;
    //there will a entry corroesponding to both m and r in the symbol table. 
    //As r being a pointer is also a variable so will require some memory.

    cout<<"sizeof(m): "<<sizeof(m)<<endl; 
    cout<<"sizeof(r): "<<sizeof(r)<<endl; //it gave 8 bytes, but it can be 4 bytes. This is 
    //closely related to 32 bit and 64 bit but this is also not compulsory,

    float f = 45.6;
    float *pf = &f;
    cout<<"pf: "<<(pf)<<endl;
    cout<<"*pf: "<<(*pf)<<endl;

    int i; //garbage value
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    cout<<"--------learnPointerIntroduction--------"<<endl;
}

void learnPointerAritmetic(){
    cout<<"--------learnPointerAritmetic--------"<<endl;
    //Pointer aritmetic
    int a = 10;
    int *s = &a;
    cout<<"s: "<<s<<endl;
    s = s + 1; //it addes 4 to the address location as it is trying to read the next int
    cout<<"s: "<<s<<endl;
    int arr[] = { 10, 20, 30, 40 }; //in symbol table there will be a entry corroesponding 
    //to arr which will be equal to &arr[0]
    cout<<"arr: "<<arr<<endl; //so arr is just the address of arr[0]. 
    //you can treat arr almost as pointer but there are differences.
    cout<<"&arr[0]: "<<(&arr[0])<<endl;
    int *t = arr;
    cout<<(*t)<<endl;
    cout<<(*(t+1))<<endl;//a[i] = *(a+1) system eventually does this. i[a] = *(a+i)
    cout<<(*(t+2))<<endl;//in case arrays pointer increment decrement aritmetic makes sense.
    cout<<(*(t+3))<<endl;
    cout<<"--------learnPointerAritmetic--------"<<endl;
}

void learnArraysAndPointers(){
    cout<<"--------learnArraysAndPointers--------"<<endl;
    int a[] = {10, 2, 3, 4};
    cout<<a<<endl; //a is effectively address a[0]
    cout<<(&a[0])<<endl;
    cout<<(*a)<<endl;
    cout<<(*(a+1))<<endl;
    
    int *q = a;
    cout<<q<<endl;
    cout<<a<<endl;
    cout<<(&q)<<endl;

    int *p = a + 3;
    cout << *p << endl;
    cout<<"sizeof(a): "<<sizeof(a)<<endl; //gives 16 bytes as answer as symbol table 
    //knows its a array and arrry of int and array size is 4
    //arr = arr + 3; //Error. this will add let suppose arr->700 in symbol table. We can't change in 
    //symbol table. Once added in symbol table it can't be changed. Array can't be re-assigned.
    cout<<"sizeof(p): "<<sizeof(p)<<endl;
    cout<<"--------learnArraysAndPointers--------"<<endl;
}

void learnCharactersAndPointers(){
    cout<<"--------learnCharactersAndPointers--------"<<endl;
    //Arrays vs char array
    int arr1[] ={1, 2, 3, 4};
    char b[] = "abc";
    cout<<"arr1: "<<arr1<<endl;
    cout<<"b: "<<b<<endl;
    //char *c = &b[0]; //this is also valid
    char *c = b;
    cout<<"c: "<<(c)<<endl;

    char c1 = 'a';
    char *pc = &c1;
    cout<<"c1: "<<c1<<endl;
    cout<<"pc: "<<pc<<endl;

    char str[] = "abcde"; //a temp memory with string literal "abcde\0" will be created then a 
    //new memory is create where data is copied from temp memory.
    char *pstr = "abcde";// a temp memory with string literal "abcde\0" will be created.
    //In this case pointer will point to a temp memory with the string literal 
    //Pointing to Read only space. You might try to change it.
    //It might give error ot it might not.
    //warning: conversion from string literal to 'char *' is deprecated. 
    cout<<"--------learnCharactersAndPointers--------"<<endl;
}

void print(int *p){
    cout<<"printp *p: "<<(*p)<<endl;
}

void incrementPointer(int *p){
    p = p + 1;
}

void increment(int *p){
    (*p)++;
}

//array gets passed as pointer. Here it is a pointer not an array.
//warning: sizeof on array function parameter will return size of 'int *' instead of 'int []'
int sum(int arr[], int size){
    cout<<"sizeof(arr): "<<sizeof(arr)<<endl;
    return 0;
}

//if array gets passed as pointer then lets use pointers itself
int sum2(int *arr, int size){
    int ans = 0;
    for(int i=0; i<size; i++){
        ans = ans + arr[i];
    }
    return ans;
}

void learnsPointersAndFunctions(){
    cout<<"--------learnsPointersAndFunctions--------"<<endl;
    int u = 10;
    int *v = &u;
    print(v);
    cout<<"v: "<<v<<endl;
    incrementPointer(v);
    cout<<"v: "<<v<<endl;
    cout<<"(*v): "<<(*v)<<endl;
    increment(v);
    cout<<"(*v): "<<(*v)<<endl;

    int arr4[10];
    cout<<"sizeof(arr4): "<<sizeof(arr4)<<endl;
    sum(arr4, 10);
    cout<<"sum2arr: "<<sum2(arr4, 10)<<endl;
    cout<<"sum2arr: "<<sum2(arr4 + 3, 7)<<endl; //we can pass part of array using pointers
    cout<<"--------learnsPointersAndFunctions--------"<<endl;
}

void increment1(int **p){
    p = p + 1;
}

void increment2(int **p){
    *p = *p + 1;
}

void increment3(int **p){
    **p = **p + 1;
}

void learnDoublePointers(){
    cout<<"--------learnDoublePointers---------"<<endl;
    int i=10;
    int *p = &i;
    int **p2 = &p;

    cout<<p2<<endl;
    cout<<(&p)<<endl;

    cout<<p<<endl;
    cout<<(*p2)<<endl;
    cout<<(&i)<<endl;

    cout<<i<<endl;
    cout<<(*p)<<endl;
    cout<<(**p2)<<endl;

    increment1(p2);
    increment2(p2);
    increment3(p2);
    cout<<"--------learnDoublePointers---------"<<endl;
}

void learnNullPointer(){
    cout<<"--------learnNullPointer---------"<<endl;
    int *p; //garbage address. this gargbage address may be is not belonging to our program scope.
    cout<<p<<endl;
    cout<<(*p)<<endl; //system will try to read int at this garbage address
    (*p)++; //this might not give error or may give error depending on how critical this garbage address is.
    cout<<(*p)<<endl;

    int *q = 0; //null pointer
    cout<<q<<endl;
    cout<<(*q)<<endl;
    (*q)++; //segmentation fault means we trying to access memory to which we don't have access to
    cout<<(*q)<<endl;
    cout<<"--------learnNullPointer---------"<<endl;
}

int main(){

    learnPointerIntroduction();

    learnPointerAritmetic();

    learnArraysAndPointers();

    learnCharactersAndPointers();

    learnsPointersAndFunctions();

    learnDoublePointers();

    learnNullPointer();

    return 0;
}