#include<iostream>
#include<string>

class Person{
	public:
		std::string name;
		int age;
	//constructor
	Person(std::string n,int a){
	name =n;
	age =a;
	}
	void display(){
	
		std::cout<< "Name" << name << "Age :" << age << std::endl;
	}
};

int main(){
	Person p1("Ramu",29);
	p1.display();
	return 0;
}
