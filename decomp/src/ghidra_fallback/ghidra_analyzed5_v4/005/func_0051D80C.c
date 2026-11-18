#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0051d908;
extern undefined4 *DAT_0051d90c;
extern undefined4 DAT_0051d910;
extern uint *DAT_0051d914;
extern undefined4 *DAT_0051d918;
extern undefined4 DAT_0051d91c;
extern uint *DAT_0051d920;
extern undefined4 *DAT_0051d924;
extern undefined4 DAT_0051d928;
extern uint *DAT_0051d92c;
extern undefined4 *DAT_0051d930;
extern undefined4 DAT_0051d934;

// USA 0051D80C <- EU 0051D7E4 (Ghidra, non-matching)
// GLOBAL DAT_0051d908 uint *
// GLOBAL DAT_0051d90c undefined4 *
// GLOBAL DAT_0051d910 undefined4
// GLOBAL DAT_0051d914 uint *
// GLOBAL DAT_0051d918 undefined4 *
// GLOBAL DAT_0051d91c undefined4
// GLOBAL DAT_0051d920 uint *
// GLOBAL DAT_0051d924 undefined4 *
// GLOBAL DAT_0051d928 undefined4
// GLOBAL DAT_0051d92c uint *
// GLOBAL DAT_0051d930 undefined4 *
// GLOBAL DAT_0051d934 undefined4

undefined4 func_0051D80C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0051d908 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051d908), iVar1 != 0)) {
    *DAT_0051d90c = DAT_0051d910;
  }
  if (DAT_0051d90c != param_2) {
    if (((*DAT_0051d914 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051d914), iVar1 != 0)) {
      *DAT_0051d918 = DAT_0051d91c;
    }
    if (DAT_0051d918 != param_2) {
      if (((*DAT_0051d920 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051d920), iVar1 != 0)) {
        *DAT_0051d924 = DAT_0051d928;
      }
      if (DAT_0051d924 != param_2) {
        if (((*DAT_0051d92c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051d92c), iVar1 != 0))
        {
          *DAT_0051d930 = DAT_0051d934;
        }
        if (DAT_0051d930 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

