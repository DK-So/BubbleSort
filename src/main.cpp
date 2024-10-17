//
//  main.cpp
//  VectorTest
//
//  Created by Deniz Kemal Soğukpınar on 17.10.24.
//

#include <iostream>
#include <vector>

int main(int argc, const char * argv[]) {

    int temp;
    int input = 1;
    std::vector<int> array;

    while (input) {
        std::cin >> input;
        array.push_back(input);
    }

    for (auto i : array) {
        std::cout << i;
    }

    std::cout << std::endl;

    for (int x = 0;x < array.size()  ; x++) {
        //std::cout << array[x] << std::endl;
        for(int y = 0; y < array.size(); y++){
            //std::cout << array[y] << std::endl;
            if(array[x] > array[y])
            {
               // std::cout << array[x] << std::endl;
               // std::cout << array[y] << std::endl;
                temp = array[y];
                array[y] = array[x];
                array[x] = temp;
            }
        }
    }

    for (auto i : array) {
        std::cout << i;
    }
    return 0;
}
