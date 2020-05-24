//
//  main.cpp
//  abc168_a
//
//  Created by yuuki oosu on 2020/05/24.
//  Copyright © 2020 yuuki oosu. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int N = 0;
    std::cin >> N;

    int div = N % 10;
    std::string unit = "";
    switch (div) {
        case 2:
        case 4:
        case 5:
        case 7:
        case 9:
            unit = "hon";
            break;
        case 0:
        case 1:
        case 6:
        case 8:
            unit = "pon";
            break;
        default:
            unit = "bon";
    }

    std::cout << unit;

    return 0;
}
