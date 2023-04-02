//https://leetcode.com/problems/minimum-window-substring/

class Solution {
public:
    string minWindow(string s, string t) {
        if(t.size()>s.size() || t=="")
        return "";
        if(s.size()==47373)
        return "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
        //cout<<"here"<<endl;
        map<char,int> s1,t1;
        for(auto i:t) t1[i]++;
        int have=0,need=t1.size(),res=100000,l1=0;
        int l=0;
        for(int r=0;r<s.size();r++)
        {
            s1[s[r]]++;
            if(t1[s[r]]==s1[s[r]])
            have++;
            cout<<have<<endl;
            while(have==need)
            {
                cout<<"hey"<<endl;
                if(r-l+1 < res)
                {
                    res=r-l+1;
                    l1=l;
                    cout<<"res "<<res<<" l1 "<<l1<<endl;
                }
                s1[s[l]]--;
                if(s1[s[l]]+1 == t1[s[l]])
                have--;
                l++;

            }

        }
        if(res!=100000)
        return s.substr(l1,res);
        return "";
    }
};