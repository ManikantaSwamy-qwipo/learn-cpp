
#include<iostream>
#include<string>

int main(){
int num;
int i;
bool isPrime = true;

std::cout<<"Enter a number" <<std::endl;
std::cin >> num;

if(num<= 0){
isPrime = false;	
	
} else {
	
	for(i=2; i * i <=num; i ++){
		if(num %i == 0){
		isPrime == false;
		break;
		}
	}
}
 if (isPrime)
        std::cout << num << " is a Prime Number." << std::endl;
    else
        std::cout << num << " is NOT a Prime Number." << std::endl;

    return 0;
}
