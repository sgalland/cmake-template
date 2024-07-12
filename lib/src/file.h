/**
 * file.h
 *
 * Utilities to help with working with C's FILE struct to make it safer and
 * easier to do file operations.
 *
 * Log:
 * (7/12/2024) Sean Galland
 * - Added FILE_Open and FILE_Close functions
 */

#ifndef FILE_H
#define FILE_H

#include "bool.h"
#include <stdio.h>

/**
 * Opens a new file stream.
 * @param filename Name of the file to open.
 * @param mode The mode of fopen to open the file with.
 * @param outfp A pointer to the file that was opened.
 * @return true if the file was opened successfully, false otherwise.
 */
bool FILE_Open(const char *filename, const char *mode, FILE **outfp);

/**
 * Close a file stream. Ensures that the call to fclose will not crash due to a
 * NULL struct.
 */
void FILE_Close(FILE *fp);

long FILE_GetFileSize(FILE *fp);

long FILE_GetFileSize(FILE *fp);

#endif /* FILE_H */
