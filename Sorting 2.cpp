#include <bits/stdc++.h>
using namespace std;

void Sort_Abs (int a[], int n, int x) {
	int b[n+5];
	for (int i=0; i<n; i++)
		b[i]=abs (x-a[i]);
		
	for (int i=0; i<n-1; i++)
		for (int j=0; j<n-1-i; j++)
			if (b[j]>b[j+1]) {
				swap (b[j+1], b[j]);
				swap (a[j+1], a[j]);
		}
	
	for (int i=0; i<n; i++) cout<<a[i]<<" ";
	cout<<endl;
}

int main() {
	int t; cin >>t;
	while (t--) {
		int n, x; cin>>n>>x;
		int a[n+5];
		for (int i=0; i<n; i++)
			cin>>a[i];
		Sort_Abs(a,n,x);
		
	}
	return 0;
}

/*
#include <bits/stdc++.h>
using namespace std; 
int n,x; 

bool comp (int a,int b) { 
	return abs(x-a) < abs(x-b);
} 

void Sort_Abs(){ 
    cin>>n>>x;
	int a[n+5]; 
    for(int i=0;i<n;i++) cin>>a[i]; 
    
	sort(a,a+n,comp); 
    for (int i=0;i<n;i++)
		cout<<a[i]<<" "; 
	cout<<endl;
}

main(){ 
    int t; cin>>t; 
    while(t--){ 
        Sort_Abs(); 
    } 
    return 0;
}

2
5 7
10 5 3 9 2
5 6
1 2 3 4 5
*/
