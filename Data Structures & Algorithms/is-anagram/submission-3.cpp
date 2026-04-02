class Solution {
public:
bool isAnagram(string s, string t) {
    unordered_map<char,int> freq_s,freq_t;
    if(s.length() > t.length() || s.length() < t.length())
    {
        return false;
    }
    else if(s.length()==t.length())
    {
        for (int i = 0; i < s.length(); ++i) {
            freq_s[s[i]]++;
            freq_t[t[i]]++;

        }
    }
    return freq_t==freq_s;

}
};
