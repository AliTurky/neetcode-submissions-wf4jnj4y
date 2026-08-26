class Solution {
public:
bool validPalindrome(string s) {
    //loop size/2
    int left = 0;
    int right = s.size() - 1;
    int count = 0;
    for (int i = 0; i < s.size() / 2; ++i) {
        if (s[left] == s[right]) {
            left++;
            right--;
            continue;
        }
        else {
            if (s[left + 1] == s[right]) {
                int l = left + 1;
                int r = right;
                while (l < r) {
                    if (s[l] != s[r]) {
                        break;

                    }
                    l++;
                    r--;
                }
                if(l>=r) {
                    return true;
                }
            }
            if (s[right - 1] == s[left]) {

                int l = left ;
                int r = right-1;
                while (l < r) {
                    if (s[l] != s[r]) {
                        break;

                    }
                    l++;
                    r--;
                }
                if(l>=r) {
                    return true;
                }
            }
            return false;
        }

    }
    return true;
}
};