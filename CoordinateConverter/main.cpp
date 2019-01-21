//
//  main.cpp
//  CoordinateConverter
//
//  Created by Joshua Powell on 1/20/19.
//  Copyright © 2019 Joshua Powell. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";

    std::string input;

    std::cout << "Enter command" << std::endl;

    getline(std::cin, input);

    std::cout << "You entered: " << input << std::endl;

    return 0;
}
