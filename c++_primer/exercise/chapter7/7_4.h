#ifdef 7_4_h
#define 7_4_h

#include <string>

struct Person {
    std::string name;
    std::string address;

    auto get_name() const { return name; };
    auto get_address const { return address; };
};

#endif