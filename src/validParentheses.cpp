#include "validParentheses.h"

#include <stack>
#include <string>
#include <unordered_map>

bool validParentheses::isValid(std::string s) {
     std::stack<char> stack;
     std::unordered_map<char, char> matchingBrackets = {
          {')', '('},
          {']', '['},
          {'}', '{'}
     };

     for (char c : s) {
          if (c == '(' || c == '[' || c == '{') {
               stack.push(c);
          } else {
               if (stack.empty() || stack.top() != matchingBrackets[c]) {
                    return false;
               }
               stack.pop();
          }
     }

     return stack.empty();
}
