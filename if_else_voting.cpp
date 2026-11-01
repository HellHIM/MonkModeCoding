#include <iostream>
int main(){
    int age;
    std::cout << "=== Voting Eligibilty Checker ===" << std::endl;
    std::cout << " Enter your age :";
    std::cin >> age;
    
    if (age >= 18){
        std::cout << " Congratulations! You are eligible to vote  " << std::endl;
    }

    else {
        std::cout << " Sorry, you are not eligible to vote ." << std::endl;
        std::cout<< " You need to wait " << (18 - age) << " more year(s)." << std::endl;

    }
    return 0;
}