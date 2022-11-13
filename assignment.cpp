#include <iostream>
#define size 5

using namespace std;

int arr[size];
class Queue
{
public:
  int front = -1, rear = -1;
  bool is_full()
  {
    if (rear != size - 1)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
  bool isempty()
  {
    if (front == -1)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
  void peek()
  {
    cout << "peek : " << arr[front] << endl;
  }
  void Enqueue(int element)
  {
    if (is_full())
    {
      if (front == -1 && rear == -1)
      {
        front++;
        arr[++rear] = element;
      }
      else
      {
        arr[++rear] = element;
      }
    }
    else
    {
      cout << "couldn't insert data \n ";
    }
  }
  void display()
  {
    cout << "Queue : \n";
    for (int i = front; i <= rear; i++)
    {
      cout << arr[i] << "\t";
    }
    cout << endl;
  }
  void dequeue()
  {
    if (front != -1 && rear != -1 && front <= rear)
    {
      front++;
    }
    else
    {
      cout << "The Queue is empty\n";
    }
  }
};
int main()
{
  //creating object from the class called object
  Queue object;
  object.Enqueue(1);
  object.Enqueue(2);
  object.Enqueue(3);
  object.Enqueue(4);
  object.Enqueue(5);
  object.display();
  object.peek();
  object.dequeue();
  object.dequeue();
  object.display();
}