#include <iostream>
using namespace std;

void Euler(int u) {
	//B1: Khoi tao
	
	stack = 0;
	CE = 0;
	
	// B2: Lap
	
	while (stack!=0) {
		s=get(stack);
		if (Ke(s)!=0) {
			t=<>; //<dinh dau tien trong Ke(s)
			push(stack, t);
			E=E\{s,t};
		}
		else {
			s=pop(stack);
			push(CE,s);
		}
	}
	
	// B3: In CE theo thu tu dao nguoc 
}

int main() {
	
}
