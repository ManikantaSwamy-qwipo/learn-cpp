#include<iostream>
#include<string>

class Car{
	public: //Access specifier
		//Variables or data 
	std::string brand;
	int model;

	//Methods or function
	void carDetails(){
		
		std::cout << "Brand:" << brand << "Model" << model <<std::endl;

	}
};

int main(){
	//crating a car object 
	
	Car c1;
       
	//Assigned values to objet properties
	c1.brand = "Tata";
	c1.model = 2017;
		
	c1.carDetails();
	return 0;

}
