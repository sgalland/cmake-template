#ifndef FILE_H
#define FILE_H

#include "bool.h"
#include <stdio.h>

/**
 * Opens a new file stream.
 * @param filename Name of the file to open.
 * @param mode The mode of fopen to open the file with.
 * @param outfp A poiter to the file that was opened.
 * @return true if the file was opened successfully, false otherwise.
 */
bool FILE_Open(const char *filename, const char *mode, FILE *outfp);

/**
 * Close a file stream.
 */
void FILE_Close(FILE *fp);

#endif /* FILE_H */