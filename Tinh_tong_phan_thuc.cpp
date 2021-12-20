#include <iostream>
using namespace std;

void Tinh_tong_phan_thuc (int n) {   
    double S=0;
    for (int i=1; i<=n; i++) {
        S+= (double) 1/i;
    }
    printf ("%.4lf", S );
}

int main()  {
    int n; cin>>n;
    Tinh_tong_phan_thuc (n);
    return 0;
}
