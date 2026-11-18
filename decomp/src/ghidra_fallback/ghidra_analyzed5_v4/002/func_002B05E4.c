#include "ghidra_types.h"

extern int func_002AD658(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined1 param_5,int param_6);
extern int func_002ADE0C(int param_1,int param_2);
extern int func_004FBCC0(int *param_1);

// USA 002B05E4 <- EU 002B05C0 (Ghidra, non-matching)

/* WARNING: Removing unreachable block (ram,0x002b0638) */
/* WARNING: Removing unreachable block (ram,0x002b063c) */
/* WARNING: Removing unreachable block (ram,0x002b0640) */
/* WARNING: Removing unreachable block (ram,0x002b0644) */
/* WARNING: Removing unreachable block (ram,0x002b0648) */
/* WARNING: Removing unreachable block (ram,0x002b064c) */
/* WARNING: Removing unreachable block (ram,0x002b0650) */
/* WARNING: Removing unreachable block (ram,0x002b0680) */

undefined4 func_002B05E4(int param_1,char param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x34);
  if (*(char *)(iVar1 + 0x7fc) == '\x05') {
    *(undefined4 *)(iVar1 + 0x3dc) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(iVar1 + 0x3e0) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(iVar1 + 0x3e4) = *(undefined4 *)(param_1 + 0x44);
  }
  func_002ADE0C(param_1,(uint)(byte)param_2);
  *(undefined1 *)(*(int *)(param_1 + 0x34) + 0x655) =
       *(undefined1 *)(*(int *)(param_1 + 0x34) + 0x654);
  func_004FBCC0(*(int **)(param_1 + 0x34));
  return func_002AD658(param_1,4,(uint)(byte)param_2,(int)*(char *)(param_1 + 0x110),
                *(undefined1 *)(param_1 + 0x111),1);
}

