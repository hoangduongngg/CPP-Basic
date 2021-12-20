#include <iostream>
using namespace std;
int main() {
	int i=0; int N;
	cin >> N;
	while (i*i<=N) {
		if (i*i==N) {
			cout << N << " ";
			return 0;
		}
		i++;
	}
}
