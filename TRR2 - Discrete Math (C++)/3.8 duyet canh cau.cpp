#include <iostream>
#include <stack>
using namespace std;
class Dothi{
    int n;
    int a[20][20];
    public:
    bool chuaxet[20];
    void readdata();
    void init();
    void RecursiveDFS(int u);
    void result();
    
};
void Dothi::readdata(){
    cin >> n;
    for(int i=1; i<=n; i++)
    for(int j=1; j<=n;j++)
    cin >> a[i][j];
    
}
void Dothi::init(){
    for(int i=1;i<=n;i++)
    chuaxet[i]=true;
}
void Dothi::RecursiveDFS(int u){
    stack<int> nganxep;
    chuaxet[u]=false;
    nganxep.push(u);
    while(!nganxep.empty()){
        int s = nganxep.top();
        nganxep.pop();
        for(int i=1; i<=n; i++){
            if((a[s][i]==1) && (chuaxet[i]==true)){
                chuaxet[i]=false;
                nganxep.push(s);
                nganxep.push(i);
                break;
            }
        }
        
    }
    
}

void Dothi::result(){
    init();
    for(int i=1; i<n;i++)
    for(int j=i+1;j<=n;j++)
    if(a[i][j]==1){
        a[i][j]=0; a[j][i]=0;
        RecursiveDFS(1);
        for(int k=1; k<=n; k++){
             if(chuaxet[k]==true){
                 cout << i<< " " << j << endl;
                 break;
             }
        }
        a[i][j]=1; a[j][i]=1;
        init();
    }
}
int main(){
    Dothi G;
    G.readdata();
    G.result();
    return 0;
}
