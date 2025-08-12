class Solution {
public:
    string clearDigits(string s) {
        string res;
        vector<bool> mark(s.size());
        stack<int> stack;
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i])){
                stack.push(i);
                mark[i] = false;
            }else{
                int index = stack.top();
                stack.pop();
                mark[i] = true;
                mark[index] = true;
            }
        }
        for(int i=0;i<s.size();i++){
            if(mark[i] == false){
                res += s[i];
            }
        }
        return res;
    }
};