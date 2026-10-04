#ifndef INTEGRATION_H
#define INTEGRATION_H

/* Functions the main menu calls that are not in a teammate's header yet */
void budgetMenu(void);    /* Budget owner: implement in budget.c        */
void assetMenu(void);     /* Asset owner: implement in assets.c         */
void reportsMenu(void);   /* Implemented in integration.c (reports hub) */

#endif
