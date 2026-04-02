class Solution {
public:
    bool isAnagram(string s, string t) {
            map<char,int> m1,m2;
    int size = max(s.size(),t.size());
    for (int i = 0; i <size ; ++i) {
        m1[s[i]]++;
        m2[t[i]]++;
    }

   return m1 == m2;
    }
};
