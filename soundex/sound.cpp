#include <iostream>
#include <regex>
#include <string>


int main () {
    std::string str;
    std::regex consonants("[c,g,j,k,q,s,x,z]");
    std::regex four("[b,f,p,v]");
    std::cin >> str;
    std::string buff;
    size_t i = 1, j = 0;
    buff.push_back(str[0]);
//    std::string::iterator it = str.begin();
    while(i < str.size()) {
        char c = str[i];
        if (std::regex_search(&str[i], consonants)) {
            if (buff[j] != '2' ) {
                j++;
                buff.push_back('2');
            }
        } else if (std::regex_search(&c, four)) {
            if (buff[j] != '1' ) {
                j++;
                buff.push_back('1');
            }
        } else if ((str[i] == 'd' || str[i] == 't') && (buff[j] != '3')) {
            j++;
            buff.push_back('3');
        } else if (str[i] == 'l' && buff[j] != '4' ) {
            j++;
            buff.push_back('4');
        } else if ((str[i] == 'm' || str[i] == 'n') && (buff[j] != '5')) {
            j++;
            buff.push_back('5');
        } else if (str[i] == 'r' && buff[j] != '6') {
            j++;
            buff.push_back('6');
        }
        i++;
    }
    while(buff.size() < 4) {
        buff.push_back('0');
    }
    buff.resize(4);
    std::cout << buff;
    return 0;
}