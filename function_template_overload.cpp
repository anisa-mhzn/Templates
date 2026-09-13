//function template vs function overloading
 #include<iostream>
 using namespace std;
 template<typename T>

void swap(T &x,T &y){
	T temp;
	temp=x;
	x=y;
	y=temp;
}
void swap(int &x, int &y){
	int temp=x;
	x=y;
	y=temp;
}
void swap(float &x, float &y){
	float temp=x;
	x=y;
	y=temp;
}
void swap(char &x, char &y){
	char temp=x;
	x=y;
	y=temp;
}
 
int main(){
	int x1=2, x2=3;
 	cout<<"FOR INTEGER"<<endl;
 	cout<<"before swap  "<<"x1="<<x1<<" x2="<<x2<<endl;
 	swap(x1,x2);
 	cout<<"after swap  "<<"x1="<<x1<<" x2="<<x2<<endl;
 	
 	float f1=5.3f,f2=6.7f;
 	cout<<endl<<"FOR FLOAT"<<endl;
 	cout<<"before swap  "<<"f1="<<f1<<" f2="<<f2<<endl;
 	swap(f1,f2);
 	cout<<"after swap  "<<"f1="<<f1<<" f2="<<f2<<endl;
 	
 	char c1='a',c2='m';
 	cout<<endl<<"FOR CHAR"<<endl;
 	cout<<"before swap  "<<"c1="<<c1<<" c2="<<c2<<endl;
 	swap(c1,c2);
 	cout<<"after swap  "<<"c1="<<c1<<" c2="<<c2<<endl;
 	
 	//advantage if template is used we can work with any data type 
 	//defined only once
 	
 }
 