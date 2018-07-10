/*
Chef has N strings with him. He knows his strings very well. A very intelligent guy named Frank comes along and asked him a few questions about the strings. 

Chef is busy right now, so you have to help him answer the queries by Frank There are Q queries each containing 3 integers L,R,C and 1 character P.

You are supposed to tell how many strings from L to R have the character P at position C. String contains lowercase letters only.

Note: Use one based indexing
*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	string s[t];
	int len[t];
	
	for(int i=0;i<t;i++)
	{
		cin>>s[i];
		len[i]=s[i].length();
	}
 
	int q;
	cin>>q;
	while(q--)
	{
		int l,r,c,counter=0;
		char p;
		cin>>l>>r>>c>>p;
				
				for(int i=l-1;i<r;i++)
				{
							
					string temp=s[i];
					if(temp[c-1]==p && len[i]>=c)
						counter++;
				}
				cout<<counter<<endl;
			
	}
	return 0;
}
 
