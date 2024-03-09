#include <iostream>
using namespace std;
int min(int x,int y)
{
     int z;
    if(x>y) z=y;
       else z=x;
    return(z);
}
int max(int m,int n)
{
    int o;
    if (m>n) o=m;
       else o=n;
    return(m);
}
int main()
{
    int a ,b,m;
    cin>>a>>b;
    m=max(a,b);
    cout<<"min="<<m<<'\n';
    return 0;
}

