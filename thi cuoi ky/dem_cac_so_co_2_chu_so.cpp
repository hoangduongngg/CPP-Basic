#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int k=0;
    int a[500];
    for (int i=0; i<n && i+1<n; i+=2) {
        a[k] = (s[i]-'0')*10 + (s[i+1]-'0');
        k++;
    }

   // cout<<k;

    int dem[100]={0};
    int b[500];
    int j=0;
    for (int i=0; i<k; i++) {
        if (dem[a[i]]==0) {
            b[j]=a[i];
            j++;
            dem[a[i]]=1;
        }
        else {
            dem[a[i]]++;
        }
    }
  //  cout<<j<<" ";



    for (int i=0; i<j; i++) {
        cout<<b[i]<<" "<<dem[b[i]]<<endl;
    }
    return 0;
}
