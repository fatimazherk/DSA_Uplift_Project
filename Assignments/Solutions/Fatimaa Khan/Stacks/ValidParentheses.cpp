// 🎀🌸 Valid Parentheses || LEETCODE 20 🌸🎀

//   Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack1;
        //idher mene stack ko character type lia hai takay string ke har element ko character by character
        //read karwa saku by using a iterative for loop
        for (char ch : s) {
            if (ch == '{' || ch == '[' || ch == '(') {
                stack1.push(ch); //opening brackets ko stack ke andar push kar rahay
            }
            else if (ch == '}' || ch == ']' || ch == ')') {
                if (stack1.empty()) 
                    return false; // koi bhi bracket match nai kar rha

                char top = stack1.top();
                if ((ch == '}' && top != '{') || 
                    (ch == ']' && top != '[') || 
                    (ch == ')' && top != '(')) {
                    return false; // agar delimitters match nai kar rha toh ye condition
                }

                stack1.pop(); // matching walay delimitter ko pop krwana
            }
        }
        
        return stack1.empty(); // agar saray bracket full hai toh apka stack empty hai
    }
};
