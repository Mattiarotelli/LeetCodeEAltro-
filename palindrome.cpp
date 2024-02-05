#include <iostream>
#include <string>

int main() {
    int x = 121;
    std::string s = std::to_string(x);
    std::string g;
    char c[s.length()];
    int f = s.length() - 1;
    for (int i = 0; i < s.length(); i++) {
        c[f - i] = s[i];
        g += c[f - i];
    }

    std::cout<<g<<" "<<s;
    if (g == s) {
        return 1;
    }
    return 0;
}