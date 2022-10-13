#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast_cin()                    \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);
//    TEENAGE WASTELAND

int32_t main()
{	
	fast_cin();
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int count =0;
		if(x%4 == 0)
		{
			cout<<"YES"<<"\n";
			cout<<x/4<<" 0 "<<n-(x/4)<<"\n";
			continue;
		}
		else
		{
			for(int i=((x/4)+1);i<= n;i++)
			{
				if(4*i-x)
				{
					if(i+(4*i-x)<=n)
					{
						cout<<"YES"<<"\n";
						cout<<i<<" "<<(4*i-x)<<" "<<(n-(i+(4*i-x)));
						cout<<"\n";
						count = 1;
						break;
					}				
				}
			}
		}
		if(!count)
		cout<<"NO"<<"\n";
	}	
	return 0;
}

// stoi string to int

// BGGBG
// GBGGB

// BGGBG
// GBGGB
// GGBGB

