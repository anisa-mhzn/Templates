//template and inheritance
 // template class as base or derived class
 //using generic in base class while making a derived one
 #include<iostream>
 using namespace std;
 template <typename T>
 
 class Array{
 	protected:
 		T a[5];
 	public:
 		void input(){
 			cout<<"Enter 5 numbers= ";
 			for(int i=0;i<5;i++){
 				cin>>a[i];
			 }
		 }
 };
 class SumArray:public Array<int>{
 	protected:
 		int total=0;
 	public:
 	int sumArr(){
 	for(int i=0;i<5;i++){
 		total+=a[i];
	 }
	 //cout<<"SUM OF ARRAY= "<<total;
	 return total;
}
 };
 int main(){
 	SumArray s;
 	s.input();
 	cout<<"sum of array= "<<s.sumArr();
 	return 0;
 }