#include<iostream>
#include<queue>
using namespace std;
int i, n, s ,t, check[50], a[50][50], chuaxet[50];

void Input(){
    cin >> n >> s >> t;
    for(int i=1; i<=n; i++)
    for(int j=1; j<=n; j++) cin >> a[i][j];
}

void set(){
    for(int i=1; i<=n; i++)
    chuaxet[i]=1;
}

void BFS(int u){
    queue<int> q;
    chuaxet[u]=0;
    q.push(u);
    while(!q.empty()){
        int p=q.front();
        q.pop();
        for(int i=1; i<n; i++){
            if((a[p][i]==1) && (chuaxet[i]==1)){
                q.push(i);
                chuaxet[i]=0;
                check[i]=p;
            }
        }
    }
}

void Pathway(){
    if(check[i]==0){
        cout << "no path" << "\n";
        return;
    }
cout << " ";
int j=t; cout << j << " ";
while (check[j]!=s){
    cout << check[j] << " ";
    j=check[j];
}
cout << s << " ";
}

int main(){
    Input();
    set();
    BFS(1);
}
