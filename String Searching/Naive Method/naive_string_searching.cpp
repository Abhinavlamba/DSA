/* 
Time Complexity: O(n*m) 
Space Complexity: O(1)
*/
#include <iostream>
#include <string>

int findMatch(const std::string &text,const std::string &pattern) {
    // returns the no of match of pattern in text
    int result = 0;
    for(int i=0;i<text.size()-pattern.size()+1;i++) {
        bool found = true;
        for(int j=0;j<pattern.size();j++) {
            if (pattern[j] != text[i+j]) {
                found = false;
                break;
            }
        }
        if (found) ++result;
    }
    return result;
}

int main() {
    std::string x = "ababacabacd";
    std::string y = "aba";
    std::cout << "No of occurences of " << y << " in " << x << " is " << findMatch(x,y);
}