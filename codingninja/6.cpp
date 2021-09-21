#include<iostream>
using namespace std;

//here array gets passed as a pointer not as a array
int sum(int arr[], int size){
    cout<<sizeof(arr)<<endl;
}

int sum2(int *arr, int size){
    int ans = 0;
    for(int i=0; i<size; i++){
        ans = ans + arr[i];
    }
    return ans;
}

int main(){
    int arr[10];
    cout<<sizeof(arr)<<endl;
    cout<<sum2(arr, 10)<<endl;
    cout<<sum2(arr + 3, 7)<<endl;

    return 0;
}