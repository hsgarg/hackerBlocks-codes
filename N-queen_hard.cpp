#include<bits/stdc++.h>
using namespace std;
int ans=0;
int done;
void solve(int row_mask,int ld,int rd)
{
    if(row_mask==done)
    {
        ans++;
        return;
    }
    int safe=done&(~(row_mask|ld|rd));
    while(safe)
    {
        int p=safe&(-safe);
        safe=safe-p;
        solve(row_mask|p,(ld|p)<<1,(rd|p)>>1);



    }

}
int main()
{
    int n;
    cin>>n;
    done=(1<<n)-1;
    solve(0,0,0);

    cout<<ans<<endl;
    return 0;
}
