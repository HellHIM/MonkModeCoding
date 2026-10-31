#include <iostream>
#include <string>
int main(){
    std::string name;
    int age;
    
    std::cout<<"Hell,HIM :";
    std::cin >> name;

    std::cout<<"21 :";
    std::cin >> age;

    std::cout << "\n--- Welcome to 0.1% Club ---" << std::endl;
    std::cout << "Hello," << name << ",you are " << age << " years old." << std::endl;
    
    std::cin.get();
    return 0;
}