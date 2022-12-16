class Solution {
public:
   string longestPalindrome(string s) {
    string ans = "";
    int n = s.length(), maxL = 0;
    for (int mid = 0; mid < n; ++mid) {
        for (int x = 0; mid - x >= 0 && mid + x < n; ++x) {
            if (s[mid - x] != s[mid + x])
                break;
            int length = 2 * x + 1;
            if (length > maxL) {
                maxL = length;
                ans = s.substr(mid - x, length);
            }
        }
    }

      for (int mid = 0; mid < n; ++mid) {
        for (int x = 1; mid - x + 1 >= 0 && mid + x < n; ++x) {
            if (s[mid - x + 1 ] != s[mid + x])
                break;
            int length = 2 * x;
            if (length > maxL) {
                maxL = 2 * x;
                ans = s.substr(mid - x + 1, length);
            }
        }
    }
    return ans;
}
};