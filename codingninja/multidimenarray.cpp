#include<iostream>
using namespace std;

int main(){
    int m, n;
    cin>>m>>n;
    int ** p = new int*[m];
    for(int i=0; i<m; i++){
        p[i] = new int[n];
    }

    for(int i=0; i<m; i++){
        delete [] p[i];
    }

    delete [] p;
}