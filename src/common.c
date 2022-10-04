#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "server.h"

const char* program_name;

int verbose;

void* xmalloc(size_t size)
{
  void* ptr = malloc(size);
  // Abort if the allocation failed
  if (ptr == NULL) abort();

  return ptr;
}

void* xrealloc(void* ptr, size_t size)
{
  ptr = realloc(ptr, size);
  // Abort if the allocation failed
  if (ptr == NULL) abort();

  return ptr;
}

char* xstrdup(const char* s)
{
  char* copy = strdup(s);
  // Abort if the allocation failed
  if (copy == NULL) abort();

  return copy;
}