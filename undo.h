/* (C) 2015 Tom Wright */

int recinsert(char *start, char *end);
int recdelete(char *start, char *end);
void recstep(void);

void undo(void);
void redo(void);