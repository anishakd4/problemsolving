#include<iostream>

using namespace std;

int main(){
    int *p = new int;  //4 bytes on heap and 8 bytes on stack.
    *p = 10;

    cout<<(*p)<<endl;

    int *pa = new int[50]; //200 bytes in the heap and 8 bytes in the stack.

    int n;
    cin>>n;
    int *pa2 = new int[n];
    pa2[0] = 90;

    int i=90; //this memory clears after scope.

    //static memory : auto-release of memory on basis of scope
    //dynamic memory : manual release of memory

    // while(true){
    //     int j =10;
    //     //each i get cleared after each loop
    // }

    // while(true){
    //     int *p = new int;
    //     //*p 8 bytes will be cleared after each loop.  but new int 4 bytes will not be cleared
    // }

    int* q = new int;
    cout<<q<<endl;
    delete q; //4 bytes will be released but *q 8 bytes will be released after scope
    cout<<q<<endl;

    q = new int;
    delete q; //i can do this as may times as i want as q is not deleted, the memory it points to is deleted.

    q = new int[100];
    delete [] q; //array deletetion

    return 0;
}