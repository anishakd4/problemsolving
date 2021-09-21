#include<iostream>
#include<iomanip>
#include<algorithm>
#include<string>
#include<cstring>
#include<vector>
#include<cmath>
#include <map>
#include<climits>
#include <unordered_map>
//climits for INT_MIN 
using namespace std;

long long int min(long long int a, long long int b){
    if(a < b){
        return a;
    }
    return b;
}
 
int min(int a, int b){
    if(a < b){
        return a;
    }
    return b;
}
 
long long int min(long long int a, long long int b, long long int c){
    long long int mini = a;
    if(b < mini){
        mini = b;
    }
    if(c < mini){
        mini = c;
    }
    return mini;
}

long long int max(long long int a, long long int b, long long int c){
    long long int maxi = a;
    if(b > maxi){
        maxi = b;
    }
    if(c > maxi){
        maxi = c;
    }
    return maxi;
}

bool isCaptialAlphabet(char ch){
    if(ch >= 65 && ch <= 90){
        return true;
    }
    return false;
}

bool isSmallAlphabet(char ch){
    if(ch >= 97 && ch <= 122){
        return true;
    }
    return false;
}

bool isDigit(char ch){
    if(ch >= 48 && ch <= 57){
        return true;
    }
    return false;
}

bool isSpace(char ch){
    if(ch == 32){
        return true;
    }
    return false;
}

bool isTab(char ch){
    if(ch == 9){
        return true;
    }
    return false;
}

bool isnewLine(char ch){
    if(ch == 10){
        return true;
    }
    return false;
}

void SieveOfEratosthenes(long long int n){
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (long long int p = 2; p * p <= n; p++){
        if (prime[p] == true) {
            for (long long int i = p * p; i <= n; i += p){
                prime[i] = false;
            }
        }
    }
 
    for (long long int p = 2; p <= n; p++){
        if (prime[p]){
            cout << p << endl;
        }
    }
}

void printMap(map<long long int, long long int> printm){
    map<long long int, long long int>::iterator itr; 
    for (itr = printm.begin(); itr != printm.end(); ++itr) { 
        cout << itr->first << " == " << itr->second << endl; 
    } 
}

void printArr(long long int arr[], long long int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

long long int binaryToDecimal(long long int n){
    long long int x=0, ans=0, count=0;
    while(n != 0){
        x = n%10;
        n = n/10;
        if(x == 1){
            ans = ans + pow(2, count);
        }
        count++;
    }
    return ans;
}

vector<int> decimalToBinary(long long int n){
    long long int x=0, ans=0;
    vector<int> vec;
    string str = "";
    if(n == 0){
        vec.push_back(0);
    }else{
        while(n != 0){
            x = n%2;
            n = n/2;
            vec.push_back(x);
        }
    }
    return vec;
}

void solve(int t){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    long long int ans = 0;
    int i=0, j=0, m=0, p=0;
    for(i=0; i<n-1; i++){
        int minIndex = i;
        int minValue = arr[i];
        for(j=i; j<n; j++){
            if(arr[j] < minValue){
                minValue = arr[j];
                minIndex = j;
            }
        }

        ans = ans + (minIndex - i + 1);
        m = i;
        p = minIndex;

        while(m < p){
            int temp = arr[m];
            arr[m] = arr[p];
            arr[p] = temp;
            m++;
            p--;
        }
    }
    cout<<"Case #"<<(t+1)<<": "<<ans<<endl;
}

void reverseStringWordWise(char input[]) {
    // Write your code here
    int left = 0, right =0;
    int i=0;
    int count=0;
    
    while(input[i] != '\0'){
        //cout<<input[i]<<endl;
        count++;
        if(input[i] == ' '){
            right = i-1;
            while(left < right){
                int temp = input[left];
                input[left] = input[right];
                input[right] = temp;
                left++;
                right--;
            }
            left = i+1;
            right = i+1;
        }else{
            right++;
        }
        
        i++;
    }
    
    // cout<<left<<" "<<right<<endl;
    right--;
    //cout<<input[left]<<" == "<<input[right]<<endl;
    while(left < right){
        int temp = input[left];
        input[left] = input[right];
        input[right] = temp;
        left++;
        right--;
    }

    left = 0;
    right = count-1;
    while(left < right){
        int temp = input[left];
        input[left] = input[right];
        input[right] = temp;
        left++;
        right--;
    }
}

void spiralPrint(int **input, int nRows, int nCols)
{
    int i; 
    
    int k = 0;
    int m = nRows;
    int l = 0;
    int n = nCols;

    //cout<<"values:  "<<k<<" "<<m<<" "<<l<<" "<<n<<endl;
    
    while (k < m && l < n) {
        //cout<<"anisha"<<endl;
        for(int i=l; i<n; i++){
            cout<<input[k][i]<<" ";
        }
        k++;
        // cout<<endl<<"anisha2"<<endl;
        // cout<<"values:  "<<k<<" "<<m<<" "<<l<<" "<<n<<endl;

        for(int i=k; i<m; i++){
            cout<<input[i][n-1]<<" ";
        }
        n--;
        // cout<<endl<<"anisha3"<<endl;
        // cout<<"values:  "<<k<<" "<<m<<" "<<l<<" "<<n<<endl;

        for(int i=n-1; i>=l; i--){
            cout<<input[m-1][i]<<" ";
        }
        m--;
        // cout<<endl<<"anisha4"<<endl;
        // cout<<"values:  "<<k<<" "<<m<<" "<<l<<" "<<n<<endl;

        for(int i=m-1; i>=k; i--){
            cout<<input[i][l]<<" ";
        }
        l++;
        // cout<<endl<<"anisha5"<<endl;
        // cout<<"values:  "<<k<<" "<<m<<" "<<l<<" "<<n<<endl;
    }
}
 
int main()
{
    int a = 100;
    int *p = &a;
    int **q = &p;
    int b = (**q)++;
    int *r = *q;
    (*r)++;
    cout << a << " " << b << endl;
}