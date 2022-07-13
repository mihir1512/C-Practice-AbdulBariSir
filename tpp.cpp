#include <bits/stdc++.h>
vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
    int n;
    cin>>n;
    cout<<" ";
    cin>>s;

   arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
        cout<<" ";
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            if((arr[i]+arr[j])==s)
            {
                if(arr[i]<=arr[j])
                {
                    cout<<arr[i]<<" "arr[j]<<endl;
                }
                else{
                    cout<<arr[j]<<" "arr[i]<<endl;
                }
            }
        }
    }


}
