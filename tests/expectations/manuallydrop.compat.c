#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct NotReprC_ManuallyDrop_Point NotReprC_ManuallyDrop_Point;

typedef NotReprC_ManuallyDrop_Point Foo;

typedef struct {
  int32_t x;
  int32_t y;
} Point;

typedef struct {
  Point point;
} MyStruct;

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

void root(const Foo *a, const MyStruct *with_manual_drop);

void take(Point with_manual_drop);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus
