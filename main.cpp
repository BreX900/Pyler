#include <iostream>
#include <fstream>
#include "Utility.h"

std::string searchType(const std::string line) {
    String delimiter(" ");
    String type = line.substr(0, line.find(delimiter));

    return "";
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::string nameFile = "../test.plr";
    std::ifstream src(nameFile);
    if (!src) {
        std::cout <<"Error opening file: " <<nameFile << std::endl;
        system("pause");
        return -1;
    }
    std::string line;
    while (getline(src, line)) {
        std::cout << line << "\n";
        for (const auto &s: String(line).split(" ")) {
            std::cout << s << "-";
        }

    }

    std::cout <<"Goodbye World!" <<std::endl;
    system ("pause");

    return 0;
}