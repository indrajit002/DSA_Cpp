// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// // pass by value 
// void dosomething(int num){

// cout<<num<<endl;
// num+=5;
// cout<<num<<endl;
// num+=5;
// cout<<num<<endl;
// }
// int main(){

// int num ;
// cin>>num;
// dosomething(num);
// 	cout<<num<<endl;
// }

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void dosomething(int &num){
// pass by reference 
cout<<num<<endl;
num+=5;
cout<<num<<endl;
num+=5;
cout<<num<<endl;
}
int main(){

int num ;
cin>>num;
dosomething(num);
	cout<<num<<endl;
}

