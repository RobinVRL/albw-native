#include "ghidra_types.h"

extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_0018e130;
extern int *DAT_0018e134;
extern int *DAT_0018e138;
extern int *DAT_0018e13c;
extern int *DAT_0018e140;
extern int *DAT_0018e144;

// USA 0018E070 <- EU 0018E070 (Ghidra, non-matching)
// GLOBAL DAT_0018e130 int *
// GLOBAL DAT_0018e134 int *
// GLOBAL DAT_0018e138 int *
// GLOBAL DAT_0018e13c int *
// GLOBAL DAT_0018e140 int *
// GLOBAL DAT_0018e144 int *

undefined4 func_0018E070(int param_1,int param_2)

{
  int iVar1;
  
  if (((((*(char *)(param_1 + 0x4a1) == '\0') && (*(int *)(param_1 + 0x49c) < 2)) ||
       (*(char *)(param_1 + 0x4a0) == '\0')) &&
      (iVar1 = func_0052FBA0(*DAT_0018e130 + 0x3dbbc,*(uint *)(param_2 + 0x28)), iVar1 != 0)) &&
     (((iVar1 = func_00588BE4(iVar1), iVar1 == *DAT_0018e134 || (iVar1 == *DAT_0018e138)) ||
      ((iVar1 == *DAT_0018e13c || ((iVar1 == *DAT_0018e140 || (iVar1 == *DAT_0018e144)))))))) {
    return 1;
  }
  return 0;
}

