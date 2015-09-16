#ifndef _object_h
#define _object_h

typedef enum{
  NORTH, SOUTH, EAST, WEST
} Direction;

typedef struct {
  char *description;
  int (*init)(void *self);  // function object
  void (*describe) (void *self);   // function object
  void (*destroy)(void *self);   // function object
  void *(*move)(void *self, Direction direction);   // function object

  int (*attack)(void *self, int damage);    // function object

} Object;

int Object_init(void *self);
void Object_destroy(void *self);
void Object_describe(void *self);
void *Object_move(void *self, Direction direction);
int Object_attack(void *self, int damage);
void *Object_new(size_t size, Object proto, char *description);

#define NEW(T,N) Object_new(sizeof(T), T##Proto, N);
#define _(N) proto.N

#endif
