#include <iostream>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    for (int i=0;i<b.length();i++) {
        int c=(a[i%a.length()]&31)-1;
        b[i]=(b[i]&31)-c>0?b[i]-c:b[i]-c+26;
    }
    cout<<b<<endl;
    return 0;
}
