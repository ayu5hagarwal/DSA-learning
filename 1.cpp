#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;



int main(){     
    vector<int> arr{10,1,7,6,14,9};
    int n = arr.size();

    //Insertion Sort

    for (int round = 1; round < n; round++)
    {
        //Step1 fetch
        int val = arr[round];

        //Step2 Compare
        int j = round  -1;
        for (; j >= 0; j--)
        {
            if (arr[j]>val)
            {
                //Step3 shift
                arr[j+1] = arr[j];
            }
            else{
                //rukna hai
                break; 
            }            

        }
        //Step4 Copy

        arr[j+1] = val;
        
    }
    
    //printing
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    

    return 0;
}