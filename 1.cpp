#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;



int main(){     
    vector<int> arr{10,1,7,6,14,9};

    int n =  arr.size();
    //Bubble Sort

    for (int round = 1; round < n; round++)
    {
        bool swapped = false;
        for (int j = 0; j < n-round; j++)
        {
          if(arr[j]>arr[j+1]){
            swapped = true;
            swap(arr[j],arr[j+1]);
          }   
        }
        if (swapped = false)
        {
            //sort ho chuka,no need to check further
            break;
        }
        
    }
    
    //printing
    for (int i = 0; i < n; i++)
    {
         cout << arr[i] << " ";
    }
    
    cout << endl;

    return 0;
}