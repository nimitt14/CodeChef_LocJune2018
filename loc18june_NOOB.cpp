/*Chef likes to play with his katana. So he decides to play a game with N sticks each having a particular height, his aim is to finish all the sticks he has. Now he does this in a particular way! He selects the largest continuous subsegment of sticks in which every stick has non zero height and then selects a non zero height and then swing the katana in the selected segment and removes the lower cut part and the leftover upper part comes down with reduced height. He does this until no sticks are left. Now as Chef is a NOOB he is allowed to rearrange the sticks!

This reduced height can be zero for example if you have only one stick of length 5 then you swing the katana at height 5 then remove the lower part which is the entire stick and then nothing is left

Also the height you select should not be greater than the smallest stick in the subsegment you selected!

Since Chef wants to reduce the number of swings because he has to build the cupboard also!

He asks you to calculate the minimum number of swings needed to finish all the sticks so he can come back later and finish the task quickly!
*/

#include<iostream>
#include<conio.h>
#include<algorithm>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	long long s[n];
	for(long long i=0;i<n;i++)
		cin>>s[i];

	long long counter=0;
	sort(s,s+n);
	
	for(long long i=0;i<n;i++)
	{
		long long mini=s[i];
		long long perCount=count(s+i,s+n,mini);
		
		i=i+perCount-1;
		counter++;
	}
	cout<<counter<<endl;
	
	system("pause");
	return 0;
}
