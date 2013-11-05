
# str-flatten

  Flatten a char array, ripped out of [sphia(1)](https://github.com/sphia/sphia/)

## Installation

  Install with [clib(1)](https://github.com/clibs/clib):

    $ clib install stephenmathieson/str-flatten.c

## API

### `char *str_flatten(char *array[], int start, int end)`

  Flatten (join?) the given `array` from `start` to `end`, adding " " in-between members.

## Example

```c
int main(int argc, char **argv) {
  char *arr[] = {
    "this",
    "was",
    "ripped",
    "from",
    "sphia"
  };

  assert_equal_str("this was ripped from sphia", str_flatten(arr, 0, 5));
  assert_equal_str("was ripped from sphia", str_flatten(arr, 1, 5));
  assert_equal_str("ripped from sphia", str_flatten(arr, 2, 5));
  assert_equal_str("from sphia", str_flatten(arr, 3, 5));
  assert_equal_str("sphia", str_flatten(arr, 4, 5));
  assert_equal_str("this", str_flatten(arr, 0, 1));
  assert_equal_str("this was", str_flatten(arr, 0, 2));
  assert_equal_str("this was ripped", str_flatten(arr, 0, 3));
  assert_equal_str("this was ripped from", str_flatten(arr, 0, 4));
  assert_equal_str("this was ripped from sphia", str_flatten(arr, 0, 5));
}
```


## License

(The MIT License)

Copyright (c) 2013 Stephen Mathieson &lt;me@stephenmathieson.com&gt;

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
'Software'), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.