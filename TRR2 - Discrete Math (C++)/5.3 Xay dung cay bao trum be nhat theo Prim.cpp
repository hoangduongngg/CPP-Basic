#include <iostream>
#define MAX 100
using namespace std;
struct edg {
    int dau, cuoi, h;
};

class dothi {
    int     n, c[MAX][MAX], ne, atree[MAX][MAX]; // ne: number edg : so canh
    edg     graph[MAX], tree[MAX];
    public:
    int     s;
    bool    chuaxet[MAX];
    void    readdata();
    void    init();
    void    treedfs(int u); //ham duyet tren cay
    void    bubblesort();
    void    prim(int s);
};   

void dothi::readdata() {
    cin >> n>>s;
    ne =0;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++) {
            cin >> c[i][j];
            if ((c[i][j]!=0)&&(i<j)) {
                ne++;
                graph[ne].dau=i;
                graph[ne].cuoi=j;
                graph[ne].h=c[i][j];
            }
        }
}

void dothi::init() {
    for (int i=1; i<=n; i++)
        chuaxet[i]=true;
}

void dothi::treedfs(int u) {
    chuaxet[u]=false;
    for (int i=1; i<=n; i++)
        if ((atree[u][i]==1)&&(chuaxet[i]==true))
        treedfs(i);
}

void dothi::bubblesort() {
    for (int i=1; i<ne; i++)
        for (int j=ne; j>=i+1; j--)
            if (graph[j].h<graph[j-1].h)
                swap(graph[j], graph[j-1]);
}

void dothi::prim(int s) {
    int dH=0, net=0;    // net: mumber edg of tree
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++)
            atree[i][j]=0;
    
    bubblesort();
    while (net!=n-1) {      //khi chua du canh
        for (int i=1; i<=ne; i++) {      //moi lan lap while deu phai tim trongg all tap canh, lay canh min, 1 dau thuoc vH 1 dau thuoc V
            init();
            treedfs(s);
            int dau=graph[i].dau;
            int cuoi=graph[i].cuoi;
            
            if (chuaxet[dau]!=chuaxet[cuoi]) {         //canh i thoa man, bs vao cay khung
                net++;
                tree[net].dau=dau;
                tree[net].cuoi=cuoi;
                dH+=graph[i].h;
                atree[dau][cuoi]=atree[cuoi][dau]=1;
                break;                                  // moi lan chi lay 1 canh
            }
        }
    }
    
    cout << "dH="<<dH<<endl;
    for (int i=1; i<=net; i++)
        cout << tree[i].dau <<"   "<< tree[i].cuoi<<endl;
}


int main() {
    dothi      g;
    g.readdata();
    g.prim(g.s);
}

/* input:

case=1

input=

13

1

 0 2 1 3 0 0 0 0 0 0 0 0 0

 2 0 2 0 0 5 5 0 0 0 0 0 0

 1 2 0 4 0 5 0 0 0 0 0 0 0

 3 0 4 0 5 5 0 0 0 0 0 0 0

 0 0 0 5 0 6 0 0 0 6 0 0 0

 0 5 5 5 6 0 6 6 6 6 0 0 0

 0 5 0 0 0 6 0 6 0 0 0 0 0

 0 0 0 0 0 6 6 0 7 0 0 7 7

 0 0 0 0 0 6 0 7 0 7 7 0 0

 0 0 0 0 6 6 0 0 7 0 7 7 0

 0 0 0 0 0 0 0 0 7 7 0 8 0

 0 0 0 0 0 0 0 7 0 7 8 0 8

 0 0 0 0 0 0 0 7 0 0 0 8 0

output=

dH = 60

1   3

1   2

1   4

2   6

2   7

4   5

5   10

6   8

6   9

8   12

8   13

9   11




case=2

input=

5

1

0    1    0  10  0

1    0    2  0    20

0    2    0  3    4

10  0    3  0    20

0    20  4  20  0

output=

dH = 10

1   2

2   3

3   4

3   5
