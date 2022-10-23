//
//  main.cpp
//  euclidean_algorithm
//
//  Created by Vache Gasparyan on 23.10.22.
//

#include <iostream>

int euclidean_algorithm(int div1, int div2) {
    int result = 0;
    
    while (div2) {
        result = div2;
        int tmp = div1 / div2;
        tmp = div1 - tmp * div2;
        div1 = div2;
        div2 = tmp;
    }
    return result;
}

int main(int argc, const char * argv[]) {
    int result = euclidean_algorithm(210, 45);
    std::cout << "greatest common divisor is " << result << std::endl;
}
