#include "bool.h"
#include "file.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  bool p = false;

  printf("p = %s\n", p ? "true" : "false");

  FILE *fp;

  if (!FILE_Open("main.c", "rb", fp)) {
    ferror(fp);
    exit(0);
  }

  if (fp != NULL)
    fclose(fp);

  printf("boo\n");
  return 0;
}