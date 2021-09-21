#include<iostream>
using namespace std;

int main(){
    string* sp = new string;
    *sp = "anish";
    cout<<sp<<endl;
    cout<<(*sp)<<endl;

    string s = "abc";
    string s1;
    s1 = "def";
    
    cout<<s1<<endl;
    cout<<s<<endl;

    cin>>s;
    cout<<s<<endl;

    cout<<"**************"<<endl;
    getline(cin >> ws,s);
    cout<<s<<endl;

    s = "asdasdasdasdsadas";
    cout<<s<<endl;
    s[0] = 'z';
    cout<<s<<endl;

    s1 = "anish kumar";
    string s2 = s+s1;
    cout<<s2<<endl;
    cout<<s2.size()<<endl;

    cout<<s2.substr(5)<<endl;
    cout<<s2.substr(5, 5)<<endl;
    cout<<s2.find("anish")<<endl;

    return 0;
}