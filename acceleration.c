#include <stdio.h>


struct Point {

  float x;
  float y;

};


struct Object {

  int speed;
  struct Point direction_vector;
  struct Point position;

};


struct Object move(struct Object obj) {

  obj.position.x += obj.direction_vector.x * obj.speed;
  obj.position.y += obj.direction_vector.y * obj.speed;
  return obj;
}


int main() {

  struct Point dv;
  dv.x = 0;
  dv.y = 1;

  struct Point obj_position;
  obj_position.x = 11;
  obj_position.y = 15;

  struct Object obj;
  obj.direction_vector = dv;
  obj.position = obj_position;
  obj.speed = 2;

  printf("Object X: %f\n", obj.position.x);
  printf("Object Y: %f\n", obj.position.y);
  obj = move(obj);
  obj = move(obj);
  obj = move(obj);
  obj = move(obj);
  obj = move(obj);
  printf("Object X: %f\n", obj.position.x);
  printf("Object Y: %f\n", obj.position.y);

  return 0;

}
