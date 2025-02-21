#include<string>
#include<iostream>

class Rectangle{
	public:
		int width;
		int length;


		//constructor with out paramaters( defalut valu )
	Rectangle(){
		width = 5;
		length = 10;
	}

	//Constructor with parameters
	 Rectangle(int w,int l){
	 	width = w;
		length = l;
	 }

	 int area(){
	 	return length * width;
	 }
};

int main(){
	
	Rectangle r1;
	Rectangle r2(8,12);
	std::cout<< "Area of rectangle" << r1.area() << std::endl;
	std::cout<<"Area if rectangle r2"<< r2.area() << std::endl;
	return 0;

}
