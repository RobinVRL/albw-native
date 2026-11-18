#include "ghidra_types.h"

extern int func_001082BC(int *param_1,int *param_2,int param_3,int param_4);
extern int DAT_00108240;
extern int DAT_00108244;
extern int *DAT_00108248;
extern int DAT_0010824c;

// USA 001081CC <- EU 001081CC (Ghidra, non-matching)
// GLOBAL DAT_00108240 int
// GLOBAL DAT_00108244 int
// GLOBAL DAT_00108248 int *
// GLOBAL DAT_0010824c int

int func_001081CC(int *param_1,uint param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00108240;
  if (((param_1[2] == 0) && (iVar2 = DAT_00108244, (param_2 & 0xfff) == 0)) &&
     (iVar1 = func_001082BC(DAT_00108248,param_1,param_2,0x1000), iVar2 = DAT_0010824c, iVar1 != 0))
  {
    *(undefined1 *)(param_1 + 4) = param_3;
    iVar2 = param_1[5];
    software_interrupt(0x1f);
    if (-1 < iVar2) {
      *(undefined1 *)(param_1 + 6) = 1;
    }
  }
  return iVar2;
}

