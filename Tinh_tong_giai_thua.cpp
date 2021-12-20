#include <iostream>
typedef unsigned long long ull;

int main() {
    int n; std::cin>>n;
    ull res=0, gt=1;

    for (int i=1; i<=n; i++) {
        gt*=i;
        res+=gt;
    }
    std::cout<<res;
    return 0;
}