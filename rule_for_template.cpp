//rules for template
 #include<iostream>
 using namespace std;
 template<typename T>
 class student{
 	private:
 		T x,y;
 	public:
 		student(T a,T b){
 			x=a;
 			y=b;
		 }
		 void display(){
		 	cout<<"addition= "<<(x+y)<<endl;
		 	cout<<" subtraction= "<<(x-y)<<endl;
		 }
 };
 //a class with no +/- operator
 //an unsupported type for typename
 class employee{
 	private:
 		int x,y;
 	public:
 		employee(int u, int v){
 			x=u;
 			y=v;
		 }
 };
 
 int main(){
 	student <int> s1(2,5);
 	student <float> s2(4.4f,5.5f);
 	cout<<"For integer"<<endl;
 	s1.display();
 	cout<<endl<<"For float"<<endl;
 	s2.display();
 	
 	//student<employee> s3(4,6);
 	//s3.display();
 	//if uncommented - compile time error
 	//no operator in employee so don't perform any operations
 	//this proves template parameter supports whatever operation template body use
 	return 0;
 }
 