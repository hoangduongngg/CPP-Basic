#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while (t--) {
        int a,b,x,y;    //A(a,b); B(x,y)
        cin>>a>>b>>x>>y;
        printf ("%.4f\n", pow(a-x,2)+pow(b-y,2) );
    }
    return 0;
}
