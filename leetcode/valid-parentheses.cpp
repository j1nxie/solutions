#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> parentheses;
        
        if (s.size() % 2 != 0) {
            return false;
        }

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                parentheses.push(s[i]);
            } else if ((s[i] == ')' && parentheses.top() == '(')
                    || (s[i] == ']' && parentheses.top() == '[')
                    || (s[i] == '}' && parentheses.top() == '{')) {
                parentheses.pop();
            } else {
                return false;
            }
        }

        return true;
    }
};
