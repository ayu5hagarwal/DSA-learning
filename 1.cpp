#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>

using namespace std;



int main(){     
    vector<int> arr{10,1,7,6,14,9};
    int n = arr.size();

        sort(arr.begin(),arr.end());
    

    //printing
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    

    return 0;
}