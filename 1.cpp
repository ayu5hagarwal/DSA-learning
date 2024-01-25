#include <iostream>
#include<algorithm>

using namespace std;

void reversedArr(int originalArr[],int size){
    reverse(originalArr,originalArr+size);
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