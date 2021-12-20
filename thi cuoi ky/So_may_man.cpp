#include <iostream>
using namespace std;

int main()
{
    int n,m; cin>>n>>m;
    int a[n][m];
    
    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++) {
            cin>>a[i][j];
        }
    int max=a[0][0], min=a[0][0];
    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++) {
           if (a[i][j]>max) max=a[i][j];
           if (a[i][j]<min) min=a[i][j];
        }
    
    int dem=0;
    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++){
            if (a[i][j]==max-min) {
                dem++;
            }
        }



    if (dem==0) cout<<"NOT FOUND";
    else {
        cout<<max-min<<endl;
        for (int i=0; i<n; i++)
        for (int j=0; j<m; j++){
            if (a[i][j]==max-min) {
                cout<<"Vi tri ["<<i<<"]["<<j<<"]"<<endl;
            }
        }
    }
    return 0;
}
