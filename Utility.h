//
// Created by brexm on 13/11/2018.
//

#pragma once
#ifndef PYLER_UTILITY_H
#define PYLER_UTILITY_H

#include <iostream>
#include <algorithm>
#include <vector>

class String: public std::string {
public:
    typedef std::string super;
    String(const std::string &s="") : std::string(s) {}

    String(const String &src) : String(static_cast<const std::string&>(src)) {}

    void toLowerCase() {
        std::transform(this->begin(), this->end(), this->begin(), ::tolower);
    }

    std::vector<String> split(const std::string &delimiter) {
        std::vector<String> vString;

        unsigned long long pos = 0;
        unsigned long long int first = 0;
        do {
            first = this->find(delimiter, pos);
            const unsigned long long following = first == std::string::npos ? this->size() : first;
            vString.emplace_back(this->substr(pos, following));
            pos = following;
        } while(first != std::string::npos);
        return vString;
    }
};

#endif //PYLER_UTILITY_H
