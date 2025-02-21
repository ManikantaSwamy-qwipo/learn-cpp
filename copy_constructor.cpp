#include<iostream>
#include<string>

class UserDetails{
	
	public:
		std::string name;
		int age;

	UserDetails(std::string n,int a){
	
		name = n;
		age =a;
	}

	UserDetails(const UserDetails &u){
	
		name = u.name;
		age = u.age;
	};

	void display(){
	
		std::cout<< "Name :" << name << "Age :" << age << std::endl;
	}



};

int main(){

	UserDetails u1("Nani",29);
	UserDetails u2 = u1;
	u1.display();
	u2.display();
	return 0;
}

