#include <iostream>
using namespace std;

float So_cau_dung (int Ma_de, char a[]) {
    int n=15;
    int k=0; //so cau dung

    string De_101 = "ABBADCCABDCCABD", De_102 = "ACCABCDDBBCDDBB";
    if (Ma_de == 101) {
        for (int i=0; i<n; i++) {
            if (a[i]==De_101[i]) k++;
        }
    }
    else if (Ma_de == 102) {
        for (int i=0; i<n; i++) {
            if (a[i]==De_102[i]) k++;
        }
    }
    return k;
}

int main()
{
    int n=15;
    int t; cin>>t;
    while (t--) {
        int Ma_de; cin>>Ma_de;
        char a[20];
        for (int i=0; i<15; i++) cin>> a[i];
        //cout<<Diem_thi((float)Ma_de, a)<<endl;
        printf ("%.2f\n", So_cau_dung(Ma_de,a)/n*10);
    }
    return 0;
}
