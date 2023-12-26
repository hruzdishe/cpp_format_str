#include <iostream>
#include <string>
#include <sstream>

#define FORMAT_STR(x) [&]() { \
    std::ostringstream ss;    \
    ss << x;                  \
    return ss.str();          \
}()

#define INFO_LOG(x) std::cout << "[INFO] " << x << '\n'

int main() {
    int x = 12;
    INFO_LOG(FORMAT_STR("x: " << x << "\n"
                                      "<h1>Hello, world!</h1>"));
}
