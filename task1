#include <vector>
#include <string>
#include <iostream>

bool isAcronym(const std::string &s, const std::vector<std::string> &words) {
    if (s.length() != words.size()) {
        return false;
    }
    
    for (size_t i = 0; i < words.size(); ++i) {
        if (words[i].empty() || s[i] != words[i][0]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    std::string s = "tpu";
    std::vector<std::string> words = {"tomsk", "polytechnic", "university"};
    
    if (isAcronym(s, words)) {
        std::cout << "Строка является акронимом." << std::endl;
    } else {
        std::cout << "Строка не является акронимом." << std::endl;
    }
    
    return 0;
}
