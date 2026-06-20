class Solution {
public:
	int compress(vector<char>& chars) {
		int write = 0;
		int read = 0;

		while (read < chars.size()) {
			char c = chars[read];
			int start = read;

			while (read < chars.size() && chars[read] == c)
				++read;

			int count = read - start;

			chars[write++] = c;

			if (count > 1) {
				string s = to_string(count);
				for (char d : s)
					chars[write++] = d;
			}
		}

		return write;
	}
};
