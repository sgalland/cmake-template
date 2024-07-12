#include "file.h"

bool FILE_Open(const char *filename, const char *mode, FILE *outfp) {
  FILE *fp;

  if ((fp = fopen(filename, mode)) != NULL || ferror(fp)) {
    return false;
  }

  outfp = fp;
  return true;
}

void FILE_Close(FILE *fp) {
  if (fp != NULL)
    fclose(fp);
}