#include<iostream>
#include<string>
struct Company{
	std::string dept;
	int count;
	std::string shift;
	bool status;
};

int main(){
	Company c1 = {"it",50,"Morning",false};
	Company c2 = {"H/W",15,"Night",true};
	std::cout<<"Dept Name" << c1.dept << "Count" << c1.count << "Shift" << c1.shift << "Staus" << c1.status << std::endl;
	std::cout<<"Dept Name" << c2.dept << "Count" << c2.count << "Shift" << c2.shift << "Staus" << c2.status << std::endl;
	return 0;
	}

