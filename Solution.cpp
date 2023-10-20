class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int freq[1001];
        memset(freq, 0, sizeof(freq));
        set<int> s;
        for (vector<int>& vec : trust) {
            s.insert(vec[0]);
            freq[vec[1]]++;
        }
        for (int i = 1; i <= 1000; i++) {
            if (freq[i] == n - 1 && s.find(i) == s.end()) {
                return i;
            }
        }
        return -1;
    }
};
