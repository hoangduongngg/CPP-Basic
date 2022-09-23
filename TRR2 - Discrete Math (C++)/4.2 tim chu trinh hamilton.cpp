#include <iostream>
#define MAX 100
using namespace std;

class dothi{
    int n;
    int a[MAX][MAX];
    public:
    int s, X[MAX];
    bool chuaxet[MAX];
    void readdata();
    void init();
    void hmt(int k);
 
};

void dothi::readdata(){
    cin >> n>>s;
    for(int i=1; i<=n; i++)
    for(int j=1; j<=n; j++)
    cin >> a[i][j];
}

void dothi::init() {
     for(int i=1; i<=n; i++) 
     chuaxet[i]=true;
}

void dothi::hmt(int k) {
     for(int y=1; y<=n;y++)
        if (a[X[k-1]][y]==1) {
                if ((k==n+1)&&(y==X[1])) {
                        for (int i=1; i<=n; i++) cout <<X[i]<< "  ";
                        cout << X[1]<< endl;
                }
                else {
                    if(chuaxet[y]==true) {
                        X[k]=y;
                        chuaxet[y]=false;
                        hmt(k+1);
                        chuaxet[y]=true;
                    }
                }
        }
}

int main() {
    dothi   g;
    g.readdata();
    g.X[1]=g.s;
    g.init();
    g.chuaxet[g.s]=false;
    g.hmt(2);
}
