#include "file.h"

bool FILE_Open(const char *filename, const char *mode, FILE **outfp) {
  FILE *fp;

  if ((fp = fopen(filename, mode)) == NULL || ferror(fp)) {
    return false;
  }

  *outfp = fp;
  return true;
}

void FILE_Close(FILE *fp) {
  if (fp != NULL)
    fclose(fp);
}

long FILE_GetFileSize(FILE *fp) {
  /* Get the current file position, seek the the end of the file, get the file
   * length, and reset to the previously obtained position.
   */

  long orig_size, new_size;

  orig_size = ftell(fp); /* ftell to get this? */
  fseek(fp, 0, SEEK_END);
  new_size = ftell(fp);
  fseek(fp, orig_size, SEEK_SET);

  return new_size;
}
