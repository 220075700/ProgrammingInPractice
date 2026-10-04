#ifndef VALIDATION_H
#define VALIDATION_H

/* ------------------------------------------------------------
   validation.h - Input validation functions for the MFMS
   Responsibility: Student 6 (Functions, Integration, Validation)
   Every other module should use these functions instead of
   calling scanf() directly.
   ------------------------------------------------------------ */

#define MAX_NAME_LEN 50
#define MAX_AMOUNT   1000000000000.0   /* upper limit for money values */

void   clearInputBuffer(void);
int    isBlank(const char text[]);

/* Reads a whole number between min and max (inclusive). Repeats until valid. */
int    getValidInt(const char prompt[], int min, int max);

/* Reads a decimal number that is >= min (use 0 to reject negatives). */
double getValidDouble(const char prompt[], double min);

/* Reads text (may contain spaces). Rejects empty/blank input. */
void   getValidString(const char prompt[], char text[], int size);

/* Reads Y or N. Returns 1 for yes, 0 for no. */
int    getYesNo(const char prompt[]);

/* Reads a menu option between min and max. */
int    getMenuChoice(int min, int max);

#endif
