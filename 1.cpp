#include <iostream>
using namespace std;

void reversedArr(int originalArr[],int size){
    int i = 0;
    int j = size - 1;
    while (i<j)
    {
        int temp = originalArr[j];
        originalArr[j] = originalArr[i];
        originalArr[i] = temp;
        i++;
        j--; 
    }
    for (int i = 0; i < size; i++)
    {
        cout << originalArr[i] << " ";
    }
    
}

int main(){
    int originalArr[] = {1,2,3,4,5};
    int size = sizeof(originalArr)/sizeof(originalArr[0]);

    reversedArr(originalArr,size);
}