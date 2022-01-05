#include <bits/stdc++.h>
#define int long long int
using namespace std;

signed main() {
	// your code goes here
      ios::sync_with_stdio(false);
       cin.tie(nullptr);
	    int n;
	    cin >> n;
	    int arr[1000002];
	    int ans[1000002];
	    memset(ans,0,sizeof(arr));
	    memset(arr,0,sizeof(ans));
	    int q;
	    cin >> q;
	    for(int i=0;i<q;i++)
	    {
	        int l,r;
	        cin >> l >> r;
	        arr[l]++;
	        arr[r+1]--;
	        ans[r+1]-=r-l+1;
	    }
	    for(int i=1;i<n+1;i++)
	    {
	        arr[i]+=arr[i-1];
	    }
	    for(int i=1;i<n+1;i++)
	    {
	        ans[i]+=ans[i-1]+arr[i];
	    }
	    int x;
	    cin >> x;
	    while(x--)
	    {
	        int a;
            cin >> a;
	        cout << ans[a]<<endl;
	    }
	
	return 0;
}