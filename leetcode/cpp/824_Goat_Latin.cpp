#include <string>
#include <sstream>
#include <cctype>
using namespace std;
class Solution {
public:
	string toGoatLatin(string sentence) {
		stringstream ss(sentence);
		string word;

		string ret = "";
		int a = 1;
		while (ss >> word) {
            char c = word[0];
			switch(c) {
				case 'a':
				case 'e':
				case 'i':
				case 'o':
				case 'u':
				case 'A':
				case 'E':
				case 'I':
				case 'O':
				case 'U':
					word += "ma";	
                    break;
				default: 
					word.push_back(c);
                    word += "ma";
					word = word.substr(1);
			}

			for (int i = 0; i < a; ++i) 
				word.push_back('a');
            
            ++a;

			ret += (word + " ");
		}

        ret.pop_back();
		return ret;
	}
};




