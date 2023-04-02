#include<bits/stdc++.h>
using namespace std;
#define ll long long




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	string s,s1;
	getline(cin,s);
	getline(cin,s1);
	string temp="";
	int i=0,j=0,cnt=0;
	vector<int> v1,v2;
	while(s[i]!='\0')
	{
	    cout<<temp<<endl;
        if(isspace(s[i]))
        {
            if(temp=="null")
            {
                v1.push_back(0);
                //temp="";
            }
            else
            {
                int t=stoi(temp);
                v1.push_back(t);
                //temp="";
            }
            temp="";
        }
        else
        {
            temp+=s[i];
        }
        i++;
	}
	while(s1[j]!='\0')
	{
	    cout<<temp<<endl;
        if(isspace(s[j]))
        {
            if(temp=="null")
            {
                v2.push_back(0);

            }
            else
            {

                int t=stoi(temp);
                v2.push_back(t);
                cnt++;

            }
            temp="";
        }
        else
        {
            temp+=s[j];
        }
        j++;
	}
	if(temp!="null")
    {
        v1.push_back(stoi(temp));
    }
    temp="";
	for(int i=0;i<cnt;i++)
    {
        cout<<v1[i]<<" "<<v2[i]<<endl;
    }


    return 0;
}
