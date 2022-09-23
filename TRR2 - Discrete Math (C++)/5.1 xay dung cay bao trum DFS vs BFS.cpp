#include <iostream>
#include <queue>
#define MAX 100
using namespace std;

class dothi{
    int n, a[MAX][MAX];
    public:
    int s;
    bool chuaxet[MAX];
    void readdata();
    void init();
    void treedfs( int s);
    void treebfs (int s);
};

void dothi::readdata() {
    cin >>n>>s;
    for (int i=1; i<=n; i++)
    for (int j=1; j<=n; j++)
    cin >>a[i][j];
}

void dothi::init() {
    for (int i=1; i<=n; i++)
    chuaxet[i]=true;
}
void dothi::treedfs(int s) {
    chuaxet[s]=false;
    for (int i=1; i<=n; i++)
        if ((a[s][i]==1) && (chuaxet[i]==true)) {
            if(s<i)    cout <<s<<"  "<<i<<endl;
            else       cout <<i<<"  "<<s<<endl;
            treedfs(i);
        }
}

void dothi::treebfs(int s) {
    queue<int> hangdoi;
    hangdoi.push(s);
    chuaxet[s]=false;
    while (!hangdoi.empty()) {
        int ss=hangdoi.front();
        hangdoi.pop();
        for (int i=1; i<=n; i++)
         if ((a[ss][i]==1) && (chuaxet[i]==true)) {
            hangdoi.push(i);
            if(ss<i)    cout <<ss<<"  "<<i<<endl;
            else       cout <<i<<"  "<<ss<<endl;
            chuaxet[i]=false;
         }
    }
    
}




int main() {
    dothi    g;
    g.readdata();
    g.init();
    cout<< "DFS tree"<<endl;
    g.treedfs(g.s);
    cout<< "BFS tree"<<endl;
    g.init();
    g.treebfs(g.s);

}


/* input:

13

1

0  1  1  1  0  0  0  0  0  0  0  0  0

1  0  1  1  0  0  0  0  0  0  0  0  0

1  1  0  1  1  0  0  0  0  0  0  0  0

1  1  1  0  0  0  0  0  0  0  0  0  0

0  0  1  0  0  1  1  1  1  0  0  0  0

0  0  0  0  1  0  1  0  1  0  0  0  0

0  0  0  0  1  1  0  1  0  0  0  0  0

0  0  0  0  1  0  1  0  1  0  0  0  0

0  0  0  0  1  1  0  1  0  1  0  0  0

0  0  0  0  0  0  0  0  1  0  1  1  1

0  0  0  0  0  0  0  0  0  1  0  1  1

0  0  0  0  0  0  0  0  0  1  1  0  1


0  0  0  0  0  0  0  0  0  1  1  1  0 

*/
