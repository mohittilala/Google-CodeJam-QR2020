#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int q=1;q<=t;q++) {
        int n;
        cin >> n;
        int a[n][n];
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin >> a[i][j];
        int k=0;
        for(int i=0;i<n;i++)
            k += a[i][i];
            
        int c[n]={0}, r=0, col=0;
        for(int i=0;i<n;i++) {
            for(int k=0;k<n;k++) c[k]=0;
            for(int j=0;j<n;j++) c[a[i][j]-1]++;
            for(int k=0;k<n;k++) {
                if(c[k]>1) {
                    r++;
                    break;
                }
            }
        }
        
        for(int i=0;i<n;i++) {
            for(int k=0;k<n;k++) c[k]=0;
            for(int j=0;j<n;j++) c[a[j][i]-1]++;
            for(int k=0;k<n;k++) {
                if(c[k]>1) {
                    col++;
                    break;
                }
            }
        }
            
        cout << "Case #" << q << ": " << k << " " << r << " " << col << endl;
    }
}