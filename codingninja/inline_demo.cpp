#include<iostream>
using namespace std;

//inline will be copied at compile at the places
inline int max(int a, int b){
    return (a > b) ? a : b;
}
//bigger inline means bigger output file. compiler won't do it for smaller functions

int sum(int arr[], int size, int si=0){
    int sum = 0;
    for(int i=0; i<size; i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main(){
    int a, b;

    cin>>a>>b;

    int c = max(a, b);
    int arr[10];
    int x = sum(arr, 10);
}