#include<iostream>
#include<string>
 class Student {
 	public:
	 std::string branch;
	 int year;
	 
	 void stu(){
		 std::cout<< "Branch :" << branch << "Year:" << year << std::endl;
	 }
	 
 };
int main(){
	Student s1;
	s1.branch = "IT";
	s1.year = 4;
	s1.stu();
	return 0;
}
