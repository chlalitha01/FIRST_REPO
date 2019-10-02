#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int

int main() {
	
	ll t,n,a,s;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    s=0;
	    for(ll i=0;i<n;i++)
	    {
	        cin>>a;
	        s+=a;
	    }
	   
	    //cout<<f<<endl;
	    if(s%n!=0)
	    {
	    cout<<(s/n)+1<<endl;
	}
	else{cout<<s/n<<endl;}
	}
	    return 0;
}
