#include <bits/stdc++.h>
#include <string>  
#include <vector>  
#include <sstream> 
using namespace std;

bool ThuanNghich (string s) {
    int l = s.length();
    for (int i=0; i<=l/2; i++) {
        if (s[i] != s[l-1-i]) return 0;
    }
    return 1;
}

int main() {
    ifstream doc;
    doc.open("VANBAN.in");
    string str, s;

    string res; int l=0;
    getline(doc, str);
    stringstream X(str);
    while (getline(X, s, ' ')) {  
        
        if (ThuanNghich(s) && s.length()>l) {
            l = s.length();
            res = s;
        }
    }
    cout <<res<<" "<<l;

    doc.close();
}