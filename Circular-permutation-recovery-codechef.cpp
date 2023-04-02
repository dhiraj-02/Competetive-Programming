//https://www.codechef.com/problems/CIRCPRMRCVRY

#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define sz 200001
#define sz11 5000000
#define mod 998244353
#define pr1 577
#define pr2 593
#define inf 1e18
#define f first
#define endl "\n"
#define s second
#define pa pair<int,int>
#define eps 0.0000001
#define eps1 1e-8
#define pi acos(-1.0)
#define vec pair<pa,int>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<pair<int,int>, nuint_type,less<pair<int,int>>, rb_tree_tag,tree_order_statistics_node_update>
mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());
int arr[sz],brr[sz],n;
struct bol{
   int mn=0,id=0;
  int laz=0;
  bool chk=false;
}t[4*sz];
bol combine(bol x,bol y)
{
 bol z;
  z.mn=min(x.mn,y.mn);
  if(x.mn<y.mn)
    z.id=x.id;
  else
    z.id=y.id;
   return z;
}
bol single_combine(int val,bol y)
{
    bol x=y;
    x.laz+=val;
    x.chk=true;
    x.mn+=val;
    return x;
}
void kor(int node)
{
    t[node].chk=false;
    t[2*node]=single_combine(t[node].laz,t[2*node]);
    t[2*node+1]=single_combine(t[node].laz,t[2*node+1]);
     t[node].laz=0;
    return;    
}
void build(int node,int l,int r)
{
    if(l==r)
    {
      t[node].mn=brr[l];
      t[node].id=l;
      t[node].chk=false;
      t[node].laz=0;
     return;
    }
    int mid=(l+r)/2;
    build(2*node,l,mid);
    build(2*node+1,mid+1,r);
    t[node]=combine(t[2*node],t[2*node+1]);
    return;
}
void update(int node,int l,int r,int le,int ri,int val)
{
    if(l>ri || le>r || le>ri || l>r)
        return;
    if(l>=le && r<=ri)
    {
        t[node]=single_combine(val,t[node]);
        return;
    }
    int mid=(l+r)/2;
    if(t[node].chk)
    kor(node);
    update(node*2,l,mid,le,ri,val);
    update(node*2+1,mid+1,r,le,ri,val);
    t[node]=combine(t[2*node],t[2*node+1]);
    return;
}
void updat(int a,int b,int va)
{
  if(a==0)
  update(1,1,n,b+n,n,va);
else if(b<1)
{
  update(1,1,n,1,a,va);
  update(1,1,n,b+n,n,va);
}
else
update(1,1,n,b,a,va);
}
int main()
{
  int test_case=1;
  scanf("%d",&test_case);
  for(int cs=1;cs<=test_case;cs++)
  {
   int k;
   scanf("%d %d",&n,&k);
   set<int>st;
   for(int i=1;i<=n;i++)
   {
    int a;
    scanf("%d",&a);
    brr[i]=a;
    if(!a)
    st.insert(i),brr[i]=n+n+n;
   }
   build(1,1,n);
   int f=-1;
   int lst=-1;
   if(st.size())
    lst=*st.rbegin();
   for(int u:st)
   { 
    int gc=u-lst;
    if(gc<=0)
      gc+=n;
    if(gc>k)
      f=u;
    lst=u;
   }
   int rem=n;
   while(f!=-1)
   {
    rem--;
    int ff=-1;
    arr[f]=n-rem;
    updat(f-1,f-k,-1);
    st.erase(f);
    if(st.size())
    {
      auto it=st.lower_bound(f);
      if(it==st.end())
        it=st.begin();
      ff=*it;
    }
    while(t[1].mn==0)
    {
      int ia=t[1].id;
      st.insert(ia);
       update(1,1,n,ia,ia,3*n);
      if(ff==-1)
      ff=ia;   
      else{
        int gc=ff-ia;
        if(gc<=0)
          gc+=n;
        if(gc<=k)
          ff=ia;
         }
    }
    if(ff==-1)
      break;
    int val=ff;
    auto it=st.lower_bound(ff);
    val=*it;
    if(val==*st.begin()){
      val=*st.rbegin();
    }
    else{
      it--;
      val=*it;
    }
    int gc=ff-val;
    if(gc<=0)
      gc+=n;
    if(gc<=k)
      break;
    f=ff;
   }
   if(!rem)
   {
    for(int i=1;i<=n;i++)
      printf("%d ",arr[i]);
    printf("\n");
   }
   else
    printf("-1\n");
  }
  return 0;
}