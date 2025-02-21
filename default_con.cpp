#include<iostream>
#include<string>

class Bike{
	public:
		std::string name;
		int speed;
	Bike(){
	name = "BMW";
	speed = 90;
	}

	void display(){
		std::cout << "Bike Name :" << name <<"Speed" << speed << std::endl;
	}
};
int main(){

	Bike b1;
	b1.display();// default constructor called automatcally 
	return 0;
}
