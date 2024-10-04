#include <bits/stdc++.h>
using namespace std; 

class Student{
	
	public: 
		string Name; 
		int roll; 
		int age;
	
	Student(string Name,int roll, int age ) {
		 this->Name  = Name; // Here this->Name indicate the member of Student class 
		 this->roll = roll; 
		 this->age = age; 
	}
}; 

int main(){
	
	 int N = 2; 
	 Student* data[N];
	 for(int i = 0;i<N;i++){
	 	string name; int roll, age; 
	 	cin >> name >> roll >> age; 
	 	data[i] = new Student(name,roll,age); 
	 } 
	 
	 for(int i = 0;i<N;i++){
	 	 cout << data[i]->Name <<" "<< data[i]->roll <<" " << data[i]->age << endl; 
	 }
	
	return 0; 
}