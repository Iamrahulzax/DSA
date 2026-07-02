class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        long original = x;
        long z = 0;

        while (x != 0) {
            int y = x % 10;
            z = z * 10 + y;
            x = x / 10;
        }

        return z == original;
    }
};
        