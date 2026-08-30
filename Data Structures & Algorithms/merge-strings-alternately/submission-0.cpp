class Solution {
public:
string mergeAlternately(string word1, string word2) {
    string res;
    int lw=0;int rw=0;
    while(word1[lw]!='\0' && word2[rw]!='\0')
    {
        res+=word1[lw];
        res+=word2[lw];
        lw++;rw++;
    }
    if(word1[lw]=='\0' && word2[rw]=='\0')
    {
        return res;
    }
    else if(word1[lw]!='\0' && word2[rw]=='\0')
    {
        while(word1[lw]!='\0')
        {
            res+=word1[lw];
            lw++;
        }
    }
    else
    {
        while(word2[rw]!='\0')
        {
            res+=word2[rw];
            rw++;
        }
    }
    return res;

}
};