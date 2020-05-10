#include <stdio.h>
#include <stdarg.h>

struct Point
{
  float x;
  float y;
  float m;
};

struct Point get_center_of_mass(struct Point points[], int size)
{
  va_list valist;
  int i;
  struct Point point;
  struct Point mass_center_point;
  float x = 0.f;
  float y = 0.f;
  float m = 0.f;

  for(i = 0; i < size; i++)
  {
    point = points[i];
    x += point.x * point.m;
    y += point.y * point.m;
    m += point.m;
  }

  va_end(valist);

  mass_center_point.x = x / m;
  mass_center_point.y = y / m;
  mass_center_point.m = m;

  return mass_center_point;
}

int main() {

  struct Point mass_center;

  struct Point point1;
  point1.x = 2.3f;
  point1.y = 4.1f;
  point1.m = 3.2f;
  struct Point point2;
  point2.x = 2.8f;
  point2.y = 1.1f;
  point2.m = 7.2f;
  struct Point point3;
  point3.x = 1.3f;
  point3.y = 7.1f;
  point3.m = 2.2f;

  struct Point points[3] = {point1, point2, point3};
  mass_center = get_center_of_mass(points, 3);
  printf("X: %f\n", mass_center.x);
  printf("Y: %f\n", mass_center.y);
  printf("M: %f\n", mass_center.m);

  return 0;
}
