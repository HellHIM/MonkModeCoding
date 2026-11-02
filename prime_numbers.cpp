// Topic: Nested Loops and Conditions
// Program: Find and print all Prime Numbers from 1 to 100.

# include <iostream>
int main(){
    std::cout << "=== Prime Numbers from 1 to 100 ===" << std::endl;
    
    for (int num = 2; num <= 100; num++) {
        bool isPrime = true;
        
        for (int i = 2; i < num; i++) {
            if(num % i == 0) {
                isPrime = false;
                break;
            }
        }
    if (isPrime == true) {
        std::cout << num << " ";
    }
}
        std::cout << std::endl;
        return 0;

    
}