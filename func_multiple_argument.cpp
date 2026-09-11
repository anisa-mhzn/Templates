//function templates with multiple argument
#include<iostream>
using namespace std;
template<typename T1, typename T2>  //multiple argument
 
 void display(T1 a, T2 b){  //no return type
 	cout<<a<<" and "<<b<<endl;
 }
 
 int main(){
 	display(5,"anisa");  //integer and string
 	display(5.6f,56);  //float and int
 	return 0;
 }