#include <iostream>
#include <vector>
#include <cstring>

std::string longestCommonPrefix(std::vector<std::string>& strs) {
    char buf[256]{};
    size_t buflen = 0;
    size_t tmp = 0;

    std::memcpy(buf, strs[0].c_str(), strs[0].size());
    //memcpy(buf, strs[0], strlen(strs[0]))
    buflen = strs[0].size();
    //buflen = strlen(strs[0])

    for (size_t i = 1; i < strs.size(); ++i) {
    //for(int i = 1; i < strSize; i ++)
        const std::string &s = strs[i];
        // const char *s = strs[i]
        for (auto c : s) {
        // for(char c = 0; c < strlen(s); c++)
        // for(char c = strs[0][i],)
            if (c != buf[tmp]) {
            // if (c != buf[tmp])
                buf[tmp] = '\0';
                break;
            }
            ++tmp;
        }

        // if string size does not equal
        if (s.size() != buflen) {
            buf[s.size()] = '\0';
        }

        tmp = 0;
    }

    return std::string(buf);
}

int main(void) {
    std::vector<std::string> in1 = {"flower","flow","flight"};
    std::vector<std::string> in2 = {"dog","racecar","car"};
    std::vector<std::string> in3 = {"abcdefghi", "abc", "abcde", "abcdefg"};
    std::vector<std::string> in4 = {"helo", "hello"};

    std::cout << "case 1: " << longestCommonPrefix(in1) << std::endl;
    std::cout << "case 2: " << longestCommonPrefix(in2) << std::endl;
    std::cout << "case 3: " << longestCommonPrefix(in3) << std::endl;
    std::cout << "case 4: " << longestCommonPrefix(in4) << std::endl;

    return 0;
}
