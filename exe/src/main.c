#include "bool.h"
#include "file.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  bool p = false;
  FILE *fp;

  printf("p = %s\n", p ? "true" : "false");

  fp = NULL;

  /* This probably doesn't work on most compilers... seems to work on GCC though
   */
  fclose(NULL);

  if (!FILE_Open("C:\\git\\test-projects\\exe\\src\\main.c", "r", &fp)) {
    perror("");
    exit(0);
  }

  fseek(fp, 0, SEEK_END);
  printf("file size: %ld\n", ftell(fp));

  if (fp != NULL)
    fclose(fp);

  printf("boo\n");
  return 0;
}
