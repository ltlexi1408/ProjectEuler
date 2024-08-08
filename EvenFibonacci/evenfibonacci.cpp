#include <iostream>

int fib(int num1, int num2){
    return num1 + num2;
}

int main(){

    int max = 4000000;
    int result = 0;
    int int1 = 1, int2 = 2;
    
    result += int2;

    int next = fib(int1, int2);

    while(next < max){
        if (next % 2 == 0){
            result += next;
        }
        int1 = int2;
        int2 = next;

        next = fib(int1, int2);
    }

    std::cout << result << std::endl;

    return 0;
}