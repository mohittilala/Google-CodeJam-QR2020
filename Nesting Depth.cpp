#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int q=1;q<=t;q++) {
        string s;
        cin >> s;
        cout << "Case #" << q << ": ";
        int count=0, opening=0, closing=0;
        for(int i=0;i<s.length();i++) {
            if(s[i]-48 > count) {
                opening = s[i]-48-count;
                closing = 0;
            }
            else {
                opening = 0;
                closing = count-s[i]+48;
            }
            count += opening-closing;
            for(int j=0;j<opening;j++) cout << "(";
            for(int j=0;j<closing;j++) cout << ")";
            cout << s[i];
        }
        for(int j=0;j<count;j++) cout << ")";
        cout << endl;
    } 
}