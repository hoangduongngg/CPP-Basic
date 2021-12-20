#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main () {
	int t; cin>>t;
	while (t--) {
		string s;
		long long sum=0;
		cin>>s;
		
		for (int i=0; i<s.size()-1; i++)
			for (int j=i+1; j<s.size(); j++)
				if ( (int)(s[j]-'0') < (int)(s[i]-'0')  ) 
					swap(s[i],s[j]);
		
		int i=0;			
		while (s[i]>='0' && s[i]<='9') {
			sum=sum+(s[i]-'0');
			s.erase(i,1);
		}
		
		cout<<s<<sum<<endl;
	}
}
