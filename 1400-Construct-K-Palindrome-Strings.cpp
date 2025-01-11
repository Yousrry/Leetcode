class Solution {
public:
    bool canConstruct(string s, int k) {
        if (k>s.size()){return false;} 
        unordered_map<char, int> freq;
        for (char c: s){
            freq[c]++ ;
        }
        int count=0;
        for (auto i : freq) {
            if (i.second%2==1)
            count++ ;
        }
        if (k>=count) {return true;}
        else {return false;} 
    }
};