#include "ghidra_types.h"

extern int func_004B06FC(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern uint DAT_00248274;
extern int *DAT_00248278;
extern int *DAT_0024827c;

// USA 002481F0 <- EU 002481F0 (Ghidra, non-matching)
// GLOBAL DAT_00248274 uint
// GLOBAL DAT_00248278 int *
// GLOBAL DAT_0024827c int *

undefined4 func_002481F0(int param_1,int param_2)

{
  ushort *puVar1;
  int iVar2;
  
  puVar1 = (ushort *)func_004B06FC((*(ushort *)(param_2 + 0x20) & 0x7e0) >> 5);
  if ((((*puVar1 & 8) == 0) && (DAT_00248274 < *(uint *)(param_2 + 8))) &&
     ((iVar2 = func_0052FBA0(*DAT_00248278 + 0x3dbbc,*(uint *)(param_2 + 0x28)), iVar2 == 0 ||
      (iVar2 = func_00588BE4(iVar2), iVar2 != *DAT_0024827c)))) {
    *(undefined4 *)(param_1 + 0x4bc) = *(undefined4 *)(param_2 + 0x14);
    return 1;
  }
  return 0;
}

