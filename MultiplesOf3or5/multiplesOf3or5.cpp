#include <iostream>
#include <vector>

int main(){

    int result = 0;
    std::vector<int> list;

    for(int i = 1; i <= 10; i++){
        if(i % 3 == 0 || i % 5 == 0){
            list.push_back(i);
        }
    }

    for(const int& i : list){
        std::cout << i << std::endl;
    }

    return 0;
}