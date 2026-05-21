#include <iostream>
#include <string>
#include <cmath>
using namespace std;
main(){
    string in;
    int c=0,r=0;
    while(getline(std::cin, in)) {
        for(char n:in){
            if (n==' ') continue;
            if (n=='1'){
                int v = std::abs(r-2) + std::abs(c-2);
                std::cout<<v<<std::endl;
                return 0;
            }
            c++;
        }
        r++;
        c=0;
    }
}
