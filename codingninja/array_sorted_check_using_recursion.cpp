#include<iostream>

using namespace std;

bool is_sorted(int arr[], int size){
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }

    bool isSmallerSorted = is_sorted(arr + 1, size - 1);
    return isSmallerSorted;
}

int main(){
    int n;
    cin >> n;
  
    int *arr = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool ans = is_sorted(arr, n);
    if(ans){
        cout<<"Sorted"<<endl;
    }else{
        cout<<"Not sorted"<<endl;
    }
    return 0;
}