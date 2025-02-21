#include <iostream>
#include <string>

struct Student {
    std::string name;
    int age;
    long long int mobile;
    float percent;
};

int main() {
    
    Student s1 = {"Dobby", 29, 9000147592LL, 70.0};  
    std::cout << "Name: " << s1.name 
              << " | Age: " << s1.age 
              << " | Mobile: " << s1.mobile 
              << " | Percent: " << s1.percent << "%" 
              << std::endl;

    return 0;
}

