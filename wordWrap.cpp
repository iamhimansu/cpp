#include <iostream>

/**
 * Width is in pixel
 * @param s
 * @param width
 * @return
 */
std::string wrap(std::string s, int width = 20) {

    int currentWidth = 0, initial = 0;//px
    while (currentWidth < s.length()) {
        currentWidth++;
        if (s.at(currentWidth) == ' ') {
            initial = currentWidth;
            return s.substr(0, initial) + "\n" + wrap(s.substr(initial, s.length()), width);
        }
    }
    return s;
}

int main() {
    std::string s = "I am himanshu";
    s = wrap(s);
    std::cout << s << std::endl;
}