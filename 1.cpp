#include <iostream>
using namespace std;

void reversedArr(int originalArr[],int size){
    int reverseArr[size];
    for (int i = 0; i < size; i++)
    {
        reverseArr[i] = originalArr[size - i -1];   
    }
    
    for (int i = 0; i < size; i++)
    {
        cout << reverseArr[i] << " " ;
    }

}

int main(){
    int originalArr[] = {1,2,3,4,5};
    int size = sizeof(originalArr)/sizeof(originalArr[0]);

    reversedArr(originalArr,size);
}