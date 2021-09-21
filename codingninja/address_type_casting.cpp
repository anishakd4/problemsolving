#include<iostream>
using namespace std;

int main(){
    int i=65;
    char c = i;  //type casting, 1 type of data being casted into another. impicit typecasting as system does this on 
    // its own we dont' have to tell the system about it.

    cout<<c<<endl;

    int *p = &i;
    char *pc = (char *)p;

    cout<<(*p)<<endl;
    //there is something called little endian or big endian. Mostly our system are little endian. last byte is 
    //byte stored first.
    cout<<(*pc)<<endl; 
    cout<<(*(pc+1))<<endl;
    cout<<(*(pc+2))<<endl;
    cout<<(*(pc+3))<<endl;

    return 0;
}