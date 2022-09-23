#include <iostream>
#define MAX 100
using namespace std;
struct edg{
    int     dau, cuoi, h;
};
class   dothi{
    int         n, c[MAX][MAX], atree[MAX][MAX];
    public:
    int         ne;
    edg         graph[MAX], tree[MAX];
    bool        chuaxet[MAX];
    void        readdata();
    void        init();
    void        dfstree(int u);         //duyet dfs tren cay
    void        bubblesort();
    void        kruskal();
};
void    dothi::readdata(){
    cin>>n;
    ne=0;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++){
            cin>>c[i][j];
            if((c[i][j]!=0)&&(i<j)){    //(i,j) la 1 canh
                ne++;
                graph[ne].dau=i;
                graph[ne].cuoi=j;
                graph[ne].h=c[i][j];
            }
        }
}
void    dothi::init(){
    for(int i=1; i<=n; i++)
        chuaxet[i]=true;
}
void    dothi::dfstree(int u){      //duyet tren cay
    chuaxet[u]=false;
    for(int i=1; i<=n; i++)
        if((atree[u][i]!=0)&&(chuaxet[i]==true))
            dfstree(i);
}
void    dothi::bubblesort(){
    for(int i=1; i<ne; i++)
        for(int j=ne; j>=i+1; j--)
            if(graph[j].h<graph[j-1].h)
                swap(graph[j], graph[j-1]);
}
void    dothi::kruskal(){
    //Buoc 1: khoi tao
    int net=0, dH=0;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            atree[i][j]=0;
    //Buoc 2: sap xep
    bubblesort();
    //Buoc 3: chon canh
    for(int i=1; i<=ne; i++){   //moi lan xet 1 canh i theo trong so tang dan
        init();
        int dau=graph[i].dau, cuoi=graph[i].cuoi;
        dfstree(dau);
        if(chuaxet[cuoi]==true){    //dau va cuoi cua canh i thuoc 2 thanh phan lien thong khac nhau tren cay -> thu nhan
            net++;
            tree[net].dau=dau;
            tree[net].cuoi=cuoi;
            dH+=graph[i].h;
            atree[dau][cuoi]=atree[cuoi][dau]=1;
        }
        if(net==n-1) break;
    }
    if(net==n-1){
        cout<<"dH = "<<dH<<endl;
        for(int i=1; i<=net; i++)
            cout<<tree[i].dau<<"   "<<tree[i].cuoi<<endl;
    }
    else{
        cout<<"\nDo thi khong lien thong";
    }
}
int main(){
    dothi       g;
    g.readdata();
    g.kruskal();
}
