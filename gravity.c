#include <stdio.h>


struct object {

  float x;
  float y;
  float speed;
  float gravity;

};


int main() {

  struct object obj = {0, 0, 3.f, 0.3f};

  printf("X: %f\n", obj.x);
  printf("Y: %f\n", obj.y);

  while(obj.y < 600) {
    obj.x += obj.speed;
    obj.y += obj.speed;
    obj.speed += obj.gravity;
  }

  printf("X: %f\n", obj.x);
  printf("Y: %f\n", obj.y);

  return 0;
}
