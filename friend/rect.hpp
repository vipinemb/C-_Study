// FriendExample.cpp
#include <iostream>
using namespace std;
class Rectangle
{
int width, height;
public:
void SetData(int w, int h)
{
width = w;
height = h;
}
friend void display(Rectangle &);
};
