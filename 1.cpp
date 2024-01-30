#include <iostream>
#include<stack>
#include<algorithm>

using namespace std;

struct Pair
{
    int min;
    int max;   
};

Pair getMinMax(int arr[],int low,int high){
    Pair minmax,mml,mmr;    
    int mid;

    //If there is only one element

    if(low == high){
        minmax.max = arr[low];
        minmax.min = arr[low];
        return minmax;
    }

    //if there are two elements 
    
    if(high == low + 1){
        if (arr[low] > arr[high])
        {
            minmax.max = arr[low];
            minmax.min = arr[high];
        }
        else{
            
            minmax.max = arr[high];
            minmax.min = arr[low];
        } 
        return minmax;
    }

    //if there are more than two elements

    mid = (low + high)/2;
    mml = getMinMax(arr,low,mid);
    mmr = getMinMax(arr,mid+1,high);

    //Compare minimum of two parts
    if (mml.min<mmr.min)
    {
        minmax.min = mml.min;
    }
    else
    {
        minmax.min = mmr.min;
    }

    //Compare maxmimum of two parts

    if (mml.max > mmr.max)
    {
        
        minmax.max = mml.max;
    }
    else
    {
        
        minmax.max = mmr.max;
    }
    
   return minmax; 
}


int main(){
    int arr[] = {1000,11,445,1,330,3000};
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    Pair minmax =  getMinMax(arr,0,arr_size-1);

    cout << "Minimum element is " << minmax.min << endl;
    cout << "Maximum element is " << minmax.max << endl;

    return 0;
}