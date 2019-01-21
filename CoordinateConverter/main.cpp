//
//  main.cpp
//  CoordinateConverter
//
//  Created by Joshua Powell on 1/20/19.
//  Copyright © 2019 Joshua Powell. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {

    std::cout << "Coordinate Converter\n";

    //
    // Convert Degrees Minutes Seconds Coordinate to Decimal Degrees
    //
    std::string coordinate_degree;
    std::string coordinate_minute;
    std::string coordinate_second;

    std::string::size_type size_t;

    float decimal_degrees = NULL;

    //
    // Collect User Input to Convert
    //
    std::cout << "Enter degree" << std::endl;
    getline(std::cin, coordinate_degree);

    std::cout << "Enter minute" << std::endl;
    getline(std::cin, coordinate_minute);

    std::cout << "Enter second" << std::endl;
    getline(std::cin, coordinate_second);

    //
    // Convert user input to doubles
    //
    double user_input_degree = std::stof (coordinate_degree, &size_t);
    double user_input_minute = std::stof (coordinate_minute, &size_t);
    double user_input_second = std::stof (coordinate_second, &size_t);

    //
    // Run conversion of Degrees+Minutes+Seconds to Decimal Degrees
    //
    decimal_degrees = user_input_degree + (user_input_minute/60) + (user_input_second/3600);

    std::cout << "Decimal Coordinate: " << decimal_degrees << std::endl;

    return 0;
}
