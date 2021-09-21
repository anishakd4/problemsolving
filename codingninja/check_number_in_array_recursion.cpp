#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = (low);
 
    for (int j = low; j <= high; j++){
        if (arr[j] < pivot){
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i], &arr[high]);
    return (i);
}

void quickSort(int input[], int low, int high){
    if(low < high){
        int pi = partition(input, low, high);
        quickSort(input, low, pi - 1);
        quickSort(input, pi + 1, high);
    }
}

void quickSort(int input[], int size) {
	quickSort(input, 0, size-1);
}

int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    
    delete [] input;

}