// FriendExample.cpp
#include "rect.hpp"

void display(Rectangle &r)
{
cout << "Width is " << r.width << endl << "Height is " << r.height << endl;
}

int main()
{
Rectangle rect;
rect.SetData(5, 10);
display(rect);
return 0;
}
