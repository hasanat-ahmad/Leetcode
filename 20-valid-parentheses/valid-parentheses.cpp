#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> mystack;

        for (char ch : s) {
            if (ch == '(' || ch == '[' || ch == '{') {
                mystack.push(ch);
            } else {
                if (mystack.empty()) return false;

                char top = mystack.top();
                if ((ch == ')' && top == '(') ||
                    (ch == ']' && top == '[') ||
                    (ch == '}' && top == '{')) {
                    mystack.pop();
                } else {
                    return false; 
                }
            }
        }

        return mystack.empty(); 
    }
};
