// Learning C++ 
// Challenge 02_13
// Calculate an Average, by Eduardo Corpeño 

#include <iostream>

const size_t ARRAY_SIZE = 5;

int main(){
    int nums[ARRAY_SIZE] = {1,23,32,24,337};
    float result = 0.0f; 

    // Write your code here
    for (int ii = 0; ii < ARRAY_SIZE; ii++) {
        result += nums[ii];
    }
    result /= (float)ARRAY_SIZE;
    
    std::cout << "The average is " << result << std::endl;
    
    std::cout << std::endl << std::endl << "--- END ---" << std::endl << std::endl;
    return (0);
}
