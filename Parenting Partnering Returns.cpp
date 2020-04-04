#include<bits/stdc++.h>
using namespace std;


bool sortcol(const vector<int> &v1, const vector<int> &v2)
{
    return v1[0] < v2[0];
}

int main()
{
    int t;
    cin >> t;
    for(int q=1;q<=t;q++) {
        int n;
        cin >> n;
        vector<vector<int>> a;
        int j[1440]={0}, c[1440]={0};
        for (int i=0;i<n;i++) {
            vector<int> temp;
            for (int j=0;j<2;j++) {
                int temp1;
                cin >> temp1;
                temp.push_back(temp1);
            }
            temp.push_back(i);
            a.push_back(temp);
        }
        sort(a.begin(), a.end(), sortcol);
        char schedule[n+1]={'\0'};
        int impo = 0;
        for(int i=0;i<n;i++) {
            int cs=0, js=0;
            for(int k=a[i][0];k<a[i][1];k++) {
                if(c[k] == 1) cs = 1;
                if(j[k] == 1) js = 1;
            }
            if(cs == 0) {
                for(int k=a[i][0];k<a[i][1];k++) c[k] = 1;
                schedule[a[i][2]] = 'C';
            }
            else if(js == 0) {
                for(int k=a[i][0];k<a[i][1];k++) j[k] = 1;
                schedule[a[i][2]] = 'J';
            }
            else {impo = 1; break;}
        }
        cout << "Case #" << q << ": ";
        if(impo) cout << "IMPOSSIBLE" << endl;
        else cout << schedule << endl;
    }
}