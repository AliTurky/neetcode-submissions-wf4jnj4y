class Solution {
public:
int lengthOfLongestSubstring(string s) {
    unordered_set<char> set;
    int l=0;
    int maxLenght=0;
    for (int r = 0; r <s.size() ; ++r) {

        while(set.count(s[r]))
        {
            set.erase(s[l]);
            l++;
        }
        set.insert(s[r]);
        maxLenght= max(maxLenght,(r-l+1));
    }


    return maxLenght;
}
};
