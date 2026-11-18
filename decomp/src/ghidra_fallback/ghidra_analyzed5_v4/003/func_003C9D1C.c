#include "ghidra_types.h"

extern int func_003C8ACC(int param_1,int *param_2);
extern longlong func_003C9BEC(uint *param_1,int param_2,uint param_3,uint param_4);
extern int DAT_003c9da4;

// USA 003C9D1C <- EU 003C9CF8 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_003c9da4 int

longlong func_003C9D1C(uint *param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  uint unaff_r4;
  uint unaff_r5;
  bool bVar2;
  longlong lVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(uint *)(albw_frame + 0x0))
  #define local_1c (*(uint *)(albw_frame + 0x4))
  if (param_5 != 0) {
    if (param_5 != 1) {
      iVar1 = DAT_003c9da4;
      if (param_5 == 2) {
        iVar1 = func_003C8ACC((int)&local_20,(int *)(*param_1 & 0xfffffffe));
        if (iVar1 < 0) {
          param_1[3] = 0;
          param_1[4] = 0;
          local_1c = unaff_r4;
          local_20 = unaff_r5;
        }
        else {
          param_1[4] = local_1c;
          param_1[3] = local_20;
        }
        param_2 = -(iVar1 >> 0x1f);
        if (param_2 == 0) {
          bVar2 = CARRY4(param_3,local_20);
          param_3 = param_3 + local_20;
          param_4 = param_4 + local_1c + (uint)bVar2;
          param_2 = 0;
          goto LAB_003c9d84;
        }
      }
      return CONCAT44(param_2,iVar1);
    }
    param_2 = param_1[2];
    bVar2 = CARRY4(param_3,param_1[1]);
    param_3 = param_3 + param_1[1];
    param_4 = param_2 + param_4 + (uint)bVar2;
  }
LAB_003c9d84:
  lVar3 = func_003C9BEC(param_1,param_2,param_3,param_4);
  return lVar3;
}

