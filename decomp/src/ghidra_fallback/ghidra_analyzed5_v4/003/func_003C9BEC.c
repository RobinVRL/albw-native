#include "ghidra_types.h"

extern int func_003C8ACC(int param_1,int *param_2);
extern int DAT_003c9c64;

// USA 003C9BEC <- EU 003C9BC8 (Ghidra, non-matching)
// GLOBAL DAT_003c9c64 int

longlong func_003C9BEC(uint *param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint unaff_r5;
  uint unaff_r6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(uint *)(albw_frame + 0x8))
  #define local_24 (*(uint *)(albw_frame + 0xc))
  iVar1 = DAT_003c9c64;
  iVar3 = iVar1;
  if ((int)param_4 < 0) {
LAB_003c9c48:
    return CONCAT44(param_2,iVar3);
  }
  uVar4 = param_1[3];
  uVar2 = param_1[4];
  uVar5 = param_3 - uVar4;
  if ((int)(param_4 - (uVar2 + (param_3 < uVar4))) < 0 ==
      (SBORROW4(param_4,uVar2) != SBORROW4(param_4 - uVar2,(uint)(param_3 < uVar4)))) {
    iVar3 = func_003C8ACC((int)&local_28,(int *)(*param_1 & 0xfffffffe));
    if (iVar3 < 0) {
      param_1[3] = 0;
      param_1[4] = 0;
      local_24 = unaff_r5;
      local_28 = unaff_r6;
    }
    else {
      param_1[4] = local_24;
      param_1[3] = local_28;
    }
    param_2 = -(iVar3 >> 0x1f);
    if ((param_2 != 0) ||
       (uVar5 = 0, iVar3 = iVar1,
       (int)(local_24 - (param_4 + (local_28 < param_3))) < 0 !=
       (SBORROW4(local_24,param_4) != SBORROW4(local_24 - param_4,(uint)(local_28 < param_3)))))
    goto LAB_003c9c48;
  }
  param_1[1] = param_3;
  param_1[2] = param_4;
  return (ulonglong)uVar5 << 0x20;
}

