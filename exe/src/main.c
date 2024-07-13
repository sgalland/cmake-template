#include "bool.h"
#include "file.h"
#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
  FILE *fp;

  fp = NULL;

  if (!FILE_Open("C:\\git\\test-projects\\exe\\src\\main.c", "r", &fp)) {
    perror("");
    exit(0);
  }

  fseek(fp, 25, SEEK_SET);
  printf("file size: %ld\n", FILE_GetFileSize(fp));
  printf("file pos: %ld\n", ftell(fp));

  if (fp != NULL)
    fclose(fp);
  
  return 0;
}
