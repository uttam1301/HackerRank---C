#include <iostream>
#include<stack>
#include<queue>

using namespace std;

class Solution 
{
    private:
        stack<char> s;
        queue<char> q;
    public:
        void pushCharacter(char ch)
        {
            s.push(ch);
        }
        void enqueueCharacter(char ch)
        {
            q.push(ch);
        }
        char popCharacter()
        {
            char temp = s.top();
            s.pop();
            return temp;
        }
        char dequeueCharacter()
        {
            char temp = q.front();
            q.pop();
            return temp;
        }
};

int main() 
{
    string s;
    getline(cin, s);
    
  	Solution obj;
    
    for (int i = 0; i < s.length(); i++) 
    {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    for (int i = 0; i < s.length() / 2; i++) 
    {
        if (obj.popCharacter() != obj.dequeueCharacter()) 
	{
            isPalindrome = false;
            
            break;
        }
    }
    
    if (isPalindrome) 
    {
        cout << "The word, " << s << ", is a palindrome.";
    } 
    else 
    {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}