# Threading Introduction


References:
- http://www.cplusplus.com/reference/thread/thread/

---

It should be noted there is a modification to the 
Makefile to run threading, see
```bash
CXX      := -c++
CXXFLAGS := -pedantic-errors -Wall -Wextra -Werror -std=c++11 -pthread -lpthread
LDFLAGS  := -L/usr/lib -lstdc++ -lm
BUILD    := ./build
OBJ_DIR  := $(BUILD)/objects
APP_DIR  := $(BUILD)/apps
TARGET   := program
INCLUDE  := -Iinclude/
```

The addition of `-pthread` and `-lpthread` to the `CXXFLAGS`
value.  This allows the compiler to engage threads.