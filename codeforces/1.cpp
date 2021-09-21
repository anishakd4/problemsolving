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
 
int main(){
    long long int t;
    cin>>t;
    //t=1;
    for(int i=0; i<t; i++){
        solve(i);
    }
    return 0;
}