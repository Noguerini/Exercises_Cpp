#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
//typedef std::string text_t;
using text_t = std::string;

int main(){

    pairlist_t pairlist;
    text_t firstName = "Jorge";

    std::cout << firstName << '\n';

    return 0;
}