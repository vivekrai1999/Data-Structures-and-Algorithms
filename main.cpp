#include <iostream>
using namespace std;

class Stack{
public:
int *arr;
int top;
int size;

Stack(int size){
  this -> size = size;
  top = -1;
  arr = new int[size];
}

void push(int element){
  if(size-top>1){
    top++;
    arr[top] = element;
    cout<<element<<" Pushed"<<endl;
  }
  else{
    cout<<"no space in array"<<endl;
  }
  
}

void pop(){
  if(top>=0){
    top--;
  }
  else{
    cout<<"Array is empty"<<endl;
  }
}

void peek(){
  if(top>-1){
    cout<<"Current Top element is "<< arr[top]<<endl;
  }
  else{
    cout<<"Array is empty"<<endl;
  }
}

bool isEmpty(){
  if(size-top>1){
    return true;
  }
  else{
    return false;
  }
}

bool isFull(){
  if(top==size-1){
    return true;
  }
  else{
    return false;
  }
}


};

int main() {
  Stack s1(10);
  int command;
  int element;
  while(command!=0){
    cout<<"Choose Operation to Perform: "<<endl<< "1. Push"<<endl<<"2. Pop"<<endl<<"3. Peek"<<endl;
    cin>>command;
    switch(command){
      case 0:
        break;
      case 1:
        cout<<"Enter element to Push: "<<endl;
        cin>>element;
        s1.push(element);
        break;
      case 2:
        s1.pop();
        break;
      case 3:
        s1.peek();
        break;
      default:
        cout<<"enter valid input"<<endl;
    }
  }
}