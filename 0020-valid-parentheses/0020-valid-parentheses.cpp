class Solution {
public:
    bool isValid(string s) {
         stack<char> st;
        for (auto it : s) {
            if ((it == '(') || (it == '{') || (it == '[')) {
                st.push(it);
            } else {
                if (st.size()==0) {
                    return false;
                }
                char a = st.top();
                st.pop();

                if ((a == '(' && it == ')') || (a == '{' && it == '}') ||
                    (a == '[' && it == ']'))
                    continue;
                else {
                    return false;
                }
            }
        }
        return st.empty();
    }
};