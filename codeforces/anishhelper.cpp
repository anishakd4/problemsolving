#include<iostream>
#include<iomanip>
#include<algorithm>
#include<string>
#include<cstring>
#include<vector>
#include<cmath>
#include <map>
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

void printMyName(string str){
    cout<<str<<endl;
}