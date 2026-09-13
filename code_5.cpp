// function templates
//single function that can work with different data types
#include<iostream>
using namespace std;
template<typename T>

T findMax(T x, T y){
	return (x>y)?x:y;
}
int main(){
	cout<<findMax(3,5)<<" IS GREATER(int)"<<endl;
	cout<<findMax(4.7f,2.1f)<<" IS GREATER(float)"<<endl;
	cout<<findMax('a','s')<<" HAS HIGHER ASCII(char)"<<endl;
	return 0;
}