#include <bits/stdc++.h>

using namespace std;

// Complete the funnyString function below.
string funnyString(string s) 
{
    vector<char> str(s.length());
    
    copy(s.begin(),s.end(),back_inserter(str));
    
    int i,flag=2,m;
    vector<char> r(s.length());
    for(i=0;i<s.length();i++)
    str[i]=s[i];
    /*for(i=0;i<s.length();i++)
    cout<<str[i]<<" ";
    cout<<endl;*/

    for(i=0;i<s.length();i++)
    {
        r[s.length()-i-1]=str[i];
    }
    /*for(i=0;i<s.length();i++)
    cout<<r[i]<<" ";
    cout<<endl;*/
   
    for(i=0;i<s.length()-1;i++)
    {
        if(abs((int)str[i]-(int)str[i+1])==abs((int)r[i]-(int)r[i+1]))
            flag=1;
        else
        {
            flag=0;
            break;
        }
    
    }
    if(flag==1)
        return "Funny";
    else
        return "Not Funny";
}
int main()
{
	string s;
	cin>>s;
	cout<<funnyString(s);
}
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b,i,sum;
	cin>>n>>a>>b;
	vector<int> v(n);
	for(i=0;i<n;i++)
	{
		sum=0;
		sum+=((n-i-1)*b)+i*a;
		v[i]=sum;
		//cout<<"executing\n";
	}
	sort(v.begin(),v.end());
	for(i=0;i<n;i++)
	cout<<v[i]<<" ";
	
}*/
