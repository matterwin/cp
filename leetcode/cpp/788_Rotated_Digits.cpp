class Solution {
public:
    int rotatedDigits(int n) {
        vector<int> mp(10, -1);

        mp[0] = 0;
        mp[1] = 1;
        mp[2] = 5;
        mp[5] = 2;
        mp[6] = 9;
        mp[8] = 8;
        mp[9] = 6;

        int ans = 0;

        for (int i = 1; i <= n; i++) {
            int x = i;
            bool good = false;

            while (x > 0) {
                int d = x % 10;

                if (mp[d] == -1) {
                    good = false;
                    break;
                }

                if (mp[d] != d) {
                    good = true; // at least one digit changes
                }

                x /= 10;
            }

            if (x == 0 && good) {
                ans++;
            }
        }

        return ans;
    }
};
