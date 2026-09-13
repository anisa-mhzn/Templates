//class template
 //blueprint that can handle any data type using generic programming
 #include<iostream>
 using namespace std;
 template <class T>
 class Calculator{
 	private:
 		T x,y;
 	public:
 		Calculator(T a,T b){
 			x=a;
 			y=b;
		 }
		 void display(){
		 	cout<<"ADDITION= "<<x+y<<endl;
			 cout<<"SUBTRACTION= "<<x-y<<endl;
		 	cout<<"MULTIPLICATION= "<<x*y<<endl;
		 	if(y!=0){
		 	cout<<"DIVISION= "<<(float)x/y<<endl<<endl; } 
		 else{
		 	cout<<"Division is not possible"<<endl;
		 }
	}
 };
 int main(){
 	Calculator <int> c1(4,5);
 	Calculator <float> c2(2.1f,1.2f);
 	cout<<"For INT"<<endl;
 	c1.display();
 	cout<<"For FLOAT"<<endl;
 	c2.display();
 	return 0;
 }