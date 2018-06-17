#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j=0,k,m,n,count=0,flag=0;
    char a[10000];
    string s;
    getline(cin,s);
    m=s.size();
    ///  cout<<m;
    if(m<=2)
        cout<<"0";
    else
    {
        for(i=1; i<m; i+=3)
        {
            a[j]=s[i];
            j++;
        }

        for(i=0; i<j; i++)
        {
            flag=0;
            for(k=i+1; k<j; k++)
            {
                if(a[i]==a[k])
                    flag=1;

            }
            if(flag==0)
                count++;
        }
        cout<<count;
    }

}
