#ifndef MVSDEFS_H
#define MVSDEFS_H 1
#include "stack.h"
LispPTR make_value_list(int argcount, LispPTR *argarray);
void simulate_unbind(FX2 *frame, int unbind_count, FX2 *returner);
LispPTR values(int arg_count, register LispPTR *args);
LispPTR values_list(int arg_count, register LispPTR *args);
#endif
