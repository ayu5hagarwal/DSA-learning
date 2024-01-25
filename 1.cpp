#include <iostream>
#include<algorithm>

using namespace std;

//Recursion Method

void reversedArr(int originalArr[],int i,int j){
   if(i>=j) {
    return;
   }

   int temp = originalArr[j];
   originalArr[j] = originalArr[i];
   originalArr[i] = temp;

   reversedArr(originalArr,i+1,j-1) ;
}

void printArray(int originalArr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout << originalArr[i] << " ";
    }
    
}

int main(){
    int originalArr[] = {1,2,3,4,5};
    int size = sizeof(originalArr)/sizeof(originalArr[0]);
    int i = 0;
    int j = size - 1;
    reversedArr(originalArr,i,j);
    printArray(originalArr,size);
}