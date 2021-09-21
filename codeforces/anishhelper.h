#ifndef ANISHHELPER_H    // To make sure you don't declare the function more than once by including the header multiple times.
#define ANISHHELPER_H

#include<iostream>
#include<iomanip>
#include<algorithm>
#include<string>
#include<cstring>
#include<vector>
#include<cmath>
#include <map>
using namespace std;

long long int min(long long int a, long long int b);
int min(int a, int b);
long long int min(long long int a, long long int b, long long int c);
long long int max(long long int a, long long int b, long long int c);
bool isCaptialAlphabet(char ch);
bool isSmallAlphabet(char ch);
bool isDigit(char ch);
bool isSpace(char ch);
bool isTab(char ch);
void SieveOfEratosthenes(long long int n);
void printMap(map<long long int, long long int> printm);
void printArr(long long int arr[], long long int n);
void printMyName(string str);

#endif