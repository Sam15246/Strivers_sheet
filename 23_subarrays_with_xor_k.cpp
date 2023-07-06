#include <unordered_map>

int subarraysWithSumK(vector < int > a, int b) {

    unordered_map<int,int> prefix_xor_count_map;
    
    int count = 0;
    int xr = 0;
    int y;

    for(int i = 0;i<a.size();i++){

        xr = xr ^ a[i];
        if (xr == b)
            count++;
            
        y = xr ^ b;
        count= count + prefix_xor_count_map[y];
        prefix_xor_count_map[xr]++;        
    }
    return count;
}
