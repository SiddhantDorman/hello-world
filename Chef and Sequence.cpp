#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	string s[t];

	for(int l=0;l<t;l++)
	{
		int n,k;
		cin>>n>>k;
		int arr[n];
		int count=0;

		for (int i=0;i<n;i++)
		{
			cin>>arr[i];
			if(arr[i]!=1)
			{
				count++;
			}

        }

        if(count<=k)
        {
            s[l]="YES";
        }
        else{
            s[l]="NO";
        }
	}
	for(int a=0;a<t;a++)
    {

        cout<<s[a]<<endl;
    }
    return 0;
}
