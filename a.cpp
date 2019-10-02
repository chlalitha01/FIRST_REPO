#include <bits/stdc++.h>
using namespace std;
 
#define gl(a) getline(cin,a)
#define ll long long int
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define pi 3.1415926535897932384
#define vsort(v) sort(v.begin(),v.end())
#define max(a,b) ((a)>(b)?(a):(b))
 
#define deb(x) cout<< #x <<" "<<x<<endl;
//std::cout << std::setprecision(12) << std::fixed;
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
