#include <stdio.h>
#include <stdbool.h>
bool SNT(int n) {
	if (n==2) return true;
	if (n<2|| !(n%2)) return false; // n chan khong nguyen to -> toi uu
	for (int i=2; i*i<=n; i++)
		if (n%i==0) return false;
	return true;
}
int main () {
	int t; scanf("%d", &t);
	while (t--) {
	int n; scanf("%d", &n);
	
	for (int i=2; i<=n; i++)
		if (n%i==0)
			if (SNT(i)) {
				printf("%d ", i);
				n/=i;
				i--;
			}
	if (n==1) printf("\n");
	}
}
