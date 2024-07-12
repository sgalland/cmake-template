#include "bool.h"
#include "file.h"
#include <stdio.h>
#include <stdlib.h>

long FILE_GetFileSize(FILE *fp) {
  /* Get the current file position, seek the the end of the file, get the file
   * length, and reset to the previously obtained position.
   */

  long orig_size, new_size;

  orig_size = 0; /* ftell to get this? */
  fseek(fp, 0, SEEK_END);
  new_size = ftell(fp);
  fseek(fp, orig_size, SEEK_SET);

  return new_size;
}

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
