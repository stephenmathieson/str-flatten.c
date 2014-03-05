
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "str-flatten.h"

int failed = 0;

#define assert_equal_str(a, b) ({ \
  if (0 != strcmp(a, b)) { \
    fprintf(stderr, "Assertion failed: \"%s\" != \"%s\"\n", a, b); \
    failed++; \
  } \
})

int
main(void) {
  const char *arr[] = {
    "this",
    "was",
    "ripped",
    "from",
    "sphia"
  };

  char *flat = NULL;

  flat = str_flatten(arr, 0, 5);
  assert_equal_str("this was ripped from sphia", flat);
  free(flat);

  flat = str_flatten(arr, 1, 5);
  assert_equal_str("was ripped from sphia", flat);
  free(flat);

  flat = str_flatten(arr, 2, 5);
  assert_equal_str("ripped from sphia", flat);
  free(flat);

  flat = str_flatten(arr, 3, 5);
  assert_equal_str("from sphia", flat);
  free(flat);

  flat = str_flatten(arr, 4, 5);
  assert_equal_str("sphia", flat);
  free(flat);

  flat = str_flatten(arr, 0, 1);
  assert_equal_str("this", flat);
  free(flat);

  flat = str_flatten(arr, 0, 2);
  assert_equal_str("this was", flat);
  free(flat);

  flat = str_flatten(arr, 0, 3);
  assert_equal_str("this was ripped", flat);
  free(flat);

  flat = str_flatten(arr, 0, 4);
  assert_equal_str("this was ripped from", flat);
  free(flat);

  flat = str_flatten(arr, 0, 5);
  assert_equal_str("this was ripped from sphia", flat);
  free(flat);

  return failed;
}
