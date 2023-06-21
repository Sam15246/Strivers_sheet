#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    int n = arr.size();
    int cnt1 = 0, cnt2 = 0, elem1,elem2;
    for(int i = 0;i<n;i++){

        if (cnt1 == 0 && arr[i]!= elem2){
            elem1=arr[i];
            cnt1=1;
        }
        else if(cnt2==0 && arr[i]!= elem1){
            elem2 = arr[i];
            cnt2=1;
        }
        else if( arr[i] == elem1 ){
            cnt1++;
        }
        else if (arr[i] == elem2){
            cnt2++;
        }
        else{
            cnt1--;cnt2--;
        }
    }
    cnt1=0,cnt2=0;
    vector<int>ans;
    for(int i = 0;i<n;i++){
        if (arr[i] == elem1)
            cnt1++;
        if (arr[i] == elem2)
            cnt2++;   
    }
    if(cnt1>n/3) ans.push_back(elem1);
    if(cnt2>n/3) ans.push_back(elem2);
    
    return ans;

}
