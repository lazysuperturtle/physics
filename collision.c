#include <stdio.h>

struct object {
  float m;
  float v;
};

void collision(struct object obj1, struct object obj2) {
  float v1, v2;
  v1 = (( 2 * obj2.m * obj2.v ) + (obj1.m - obj2.m) * obj1.v) / (obj1.m + obj2.m);
  v1 = (( 2 * obj1.m * obj1.v ) + (obj2.m - obj1.m) * obj2.v) / (obj1.m + obj2.m);
  obj1.v = v1;
  obj2.v = v2;
  printf("M: %f\n", obj1.m);
  printf("V: %f\n", obj1.v);

}

int main() {

  struct object obj1 = {10, 20};
  struct object obj2 = {5, 10};

  collision(obj1, obj2);



  return 0;
}
