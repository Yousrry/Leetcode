class Solution {
public:
    bool isValid(string s) {
        if (s.size()%2==1) {return false;}
        stack <char> t ;
        for (char c : s) {
            if (c=='(' or c=='{' or c== '[')
                t.push(c) ;
            else {
                if(t.empty()) {return false;}
                char p=t.top() ;
                if ((c==')' && p!= '(') or(c=='}' && p != '{') or (c==']' && p != '[')) {return false;}
                else {t.pop();}
        }
           
    }
    return !t.size();
    }  
};
