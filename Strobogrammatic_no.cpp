
#include <iostream>
#include <map>
using namespace std;

bool Strobogrammatic(string s, int i, int j) {

    map<char, char> mp;

    mp['0'] = '0';
    mp['1'] = '1';
    mp['6'] = '9';
    mp['9'] = '6';
    mp['8'] = '8';

    while(i <= j) {

        // Check whether digit is valid
        if(mp.find(s[i]) == mp.end())
            return false;

        // Check whether opposite digit matches
        if(mp[s[i]] != s[j])
            return false;

        i++;
        j--;
    }

    return true;
}

int main() {

    string s = "198861";

    int i = 0, j = s.length() - 1;

    if(Strobogrammatic(s, i, j))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
