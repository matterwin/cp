class Solution {
    struct TrieNode {
        TrieNode* child[2] = {nullptr, nullptr};
    };

public:
    int findMaximumXOR(vector<int>& nums) {
        TrieNode* root = new TrieNode();

        for (int num : nums)
            insert(root, num);

        int ans = 0;

        for (int num : nums)
            ans = max(ans, maxXor(root, num));

        return ans;
    }

private:
    void insert(TrieNode* root, int num) {
        TrieNode* cur = root;

        for (int bit = 31; bit >= 0; --bit) {
            int b = (num >> bit) & 1;

            if (!cur->child[b])
                cur->child[b] = new TrieNode();

            cur = cur->child[b];
        }
    }

    int maxXor(TrieNode* root, int num) {
        TrieNode* cur = root;
        int xorVal = 0;

        for (int bit = 31; bit >= 0; --bit) {
            int b = (num >> bit) & 1;

            if (cur->child[1 - b]) {
                xorVal |= (1 << bit);
                cur = cur->child[1 - b];
            } else {
                cur = cur->child[b];
            }
        }

        return xorVal;
    }
};

class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int ans = 0;

        for (int bit = 31; bit >= 0; --bit) {
            unordered_set<int> prefixes;

			// prefix from left to right
            for (int num : nums)
                prefixes.insert(num >> bit);

			// optimisitcally see if we can find a
			// candidate who has an extra 1 on the rhs
            int candidate = (ans << 1) | 1;

            bool found = false;

            for (int p : prefixes) {
				// is there another prefix q such that 
				// p ^ q == candidate
				// in turns means q = p ^ candidate
                if (prefixes.count(candidate ^ p)) {
                    found = true;
                    break;
                }
            }

			// -1 to take off the optimisim
			// and try again next set of prefixes
            ans = found ? candidate : candidate - 1;
        }

        return ans;
    }
};
