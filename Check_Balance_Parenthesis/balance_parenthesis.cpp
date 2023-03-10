#include <iostream>
#include <stack>
#include <map>

/*
Time : O(n)
Space : O(n)
*/
using namespace std;

class Solution 
{
    private:
        map<char, char> dict = {{'(', ')'}, {'{', '}'}, {'[', ']'}};
    public:
        bool isValid(string s) {
            stack<char> stack;
            for (char c : s)
            {
                if (dict.count(c))
                    stack.push(c);
                else
                {
                    if (stack.empty())
                        return false;
                    char open = stack.top();
                    stack.pop();
                    if (dict[open] != c)
                        return false;
                }
            }
            return stack.empty();
        }
};

#ifdef TESTING
int main()
{
    Solution Sol;
    cout << "Output is " << Sol.isValid("{}") << "\n";
    cout << "Output is " << Sol.isValid("{}}") << "\n";
    cout << "Output is " << Sol.isValid("{}{") << "\n";
    cout << "Output is " << Sol.isValid("{}{}") << "\n";
    cout << "Output is " << Sol.isValid("{}[]") << "\n";
    cout << "Output is " << Sol.isValid("{}()") << "\n";
    cout << "Output is " << Sol.isValid("{(})") << "\n";
    return 0;
}
#endif