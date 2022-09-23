#include <iostream>
#include <queue>
#define MAX 100
using namespace std;
int n, chuaxet[MAX], a[MAX][MAX];

void Input() {
    cin >> n;
    for (int i=1; i<=n; i++)
    for (int j=1; j<=n; j++) cin >> a[i][j];
}

void set() {
    for (int i=1; i<=n; i++) chuaxet[i]=1;
}

void BFS(int u) {
    queue<int> q;
    chuaxet[u]=0;
    q.push(u);
    
    while(!q.empty()) {
        int p=q.front();
        q.pop();
        for (int i=1; i<=n; i++)
        if ((chuaxet[i]==1)&&(a[p][i]==1)) {
            q.push(i);
            chuaxet[i]=0;
        }
    }
}

int TPLT(){
    int dem=0;
    for (int i=1; i<=n; i++)
    if(chuaxet[i]) {
        BFS(i);
        dem++;
    }
    return dem;
}

int main() {
    Input();
    set();
    cout << TPLT();
    return 0;
}
