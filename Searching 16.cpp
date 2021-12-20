#include <iostream>
using namespace std;
typedef unsigned long long ull;

void Phan_tu_chung (ull a[], ull b[], ull c[], int n1, int n2, int n3){
	ull abc[n1+n2+n3]; int l=0;		//mang luu cac phan tu chung
	
	int i=0, j=0, k=0;
    while (i<n1 && j<n2 && k<n3) {
        if (a[i] == b[j] && b[j] == c[k]) {
		 	abc[l]=a[i];
			i++; j++; k++; l++;
		}
        else if (a[i] < b[j]) i++;		//cac so sau luon lon hon cac so trc => khong chung
        else if (b[j] < c[k]) j++;
        else k++;
    }
			
	if (l==0) cout<<"-1";
	else for (int i=0; i<l; i++)
		if (abc[i]!=abc[i+1]) cout<<abc[i]<<" ";
		
	
	cout<<endl;
}


int main () {
	int t; cin>>t;
	while (t--) {
		int n1, n2, n3;
		cin>>n1>>n2>>n3;
		ull a[n1+5], b[n2+5], c[n3+5];
		for (int i=0; i<n1; i++) cin>>a[i];
		for (int i=0; i<n2; i++) cin>>b[i];
		for (int i=0; i<n3; i++) cin>>c[i];
		
		Phan_tu_chung(a,b,c,n1,n2,n3);
	}
	return 0;
}



/*
3
6 5 8
1 5 10 20 40 80
6 7 20 80 100
3 4 15 20 30 70 80 120

6 5 8
1 5 10 20 40 80
6 20 20 80 100
3 4 15 20 30 80 80 120

6 5 8
1 5 10 10 40 80
6 7 7 100 100
3 4 15 15 30 70 70 120
*/

/*
	for (int i=0; i<n1; i++)
		for (int j=0; j<n2; j++)
			if (a[i]<b[j]) break;
			else if (a[i]==b[j])
				for (int k=0; k<n3; k++)
					if (b[j]<c[k]) break;
					else if (b[j]==c[k]) {
						abc[l]=c[k];
						l++;
					}
	
	
	*/	
