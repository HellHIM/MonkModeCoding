 //Question:: 2235. Add Two Integers 
 //Given two integers num1 and num2,return the sum of the two integers.
 //Example: num1 = 12, num2 = 5 -> Output: 17
 
 #include <iostream>
 class Solution {
    public:
    int sum(int num1,int num2){
        return num1 + num2;
    }
 };
 int main (){
    Solution sol;
    int a = 12;
    int b = 5;
    std:: cout<< "Sum is :" << sol.sum(a,b) << std::endl;
    return 0;
 }
 