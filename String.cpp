#include<bits/stdc++.h>
using namespace std;
int main(){

string s ;

getline(cin,s);
 
 cout<<"String ="<<s<<endl;
 int len = s.size();
 cout<<"Length ="<<len<<endl;
 s[len -1]='x';
  cout<<s[len -1];
}