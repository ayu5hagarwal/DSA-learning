#include <iostream>
#include<stack>

using namespace std;

//Using Stack

void reversedArr(int originalArr[],int size){
  stack<int> stack;
  for (int i = 0; i < size; i++)
  {
    stack.push(originalArr[i]);
  }
  for (int i = 0; i < size; i++)
  {
    originalArr[i] = stack.top();
    stack.pop();
  }
   
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
    reversedArr(originalArr,size);
    printArray(originalArr,size);
}