#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
  public:
  bool cmp(char ch,char c)
  {
      if(ch=='{'&&c=='}') return true;
      if(ch=='('&&c==')') return true;
      if(ch='['&&c==']') return true;
      return false;
  }
    // Function to return if the paranthesis are balanced or not
    bool ispar(string str)
    {
        // Your code here
        stack<int>s;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='('||str[i]=='{'||str[i]=='[')
            s.push(str[i]);
            else 
            {
                if(s.empty()==true)
                return false;
                else if(cmp(s.top(),str[i])==false)
                return false;
                else
                s.pop();
            }
        }
        return (s.empty()==true);
        
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends
