// #include<bits/stdc++.h>
// using namespace std;
// int main(){

//    // program to findiout if you are adult or not 
// 	// adult =>18;

// int age;
// cin>>age;
// if(age >=18){
// 	cout<<"Adult";
// }
// else{

// 	cout<<"Not adult";
// }

// }

// Q2
/*
A school has following rules for grading system:
a. below 25 - F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. 80 to 100 - A
Ask user to enter marks and print the corresponding grade.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){

int marks;
cin>>marks;
// if(num >=80 && num <=100){
// 	cout<<"A";

// }
// else if(num >=60 && num <=79){
// 	cout<<"B";
	
// }else if(num >=50 && num <=59){
// 	cout<<"C";
	
// }else if(num >=45 && num <=49){
// 	cout<<"D";
	
// }else if(num >=25 && num <=44){
// 	cout<<"E";
	
// }else if(num <25){
// 	cout<<"F";
	
// }
if (marks <25) {
cout << "F";
}
else if (marks <= 44){
cout << "E";
}
else if (marks <= 49) {
cout << "D";
}
else if (marks <= 59) {
cout << "C";
}
else if (marks <= 79) {
cout << "B";
}
else if (marks <= 100) {
cout << "A";
}

else{
	cout<<"Enter a valid Mark";}


}







