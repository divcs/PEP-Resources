// question : Mark the best option :

#include <iostream>

using namespace std;

class p

{

protected:
 int width, height;

public:
 void set_values(int a, int b)

 {
  width = a;
  height = b;
 }

 virtual int area(void) = 0;
};

class r : public p

{

public:
 int area(void)

 {
  return (width * height);
 }
};

class t : public p

{

public:
 int area(void)

 {
  return (width * height / 2);
 }
};
int main()
{
 r rect;

 t trgl;

 p *ppoly1 = &rect;

 p *ppoly2 = &trgl;

 ppoly1->set_values(4, 5);

 ppoly2->set_values(4, 5);

 cout << ppoly1->area();

 cout << ppoly2->area();

 return 0;
}

// Ο 1020

//     O 20

//     Ο 10

//     2010