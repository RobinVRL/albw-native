#include "ghidra_types.h"

extern undefined8 func_003C8184(int *param_1,undefined4 param_2,int param_3,uint *param_4,uint param_5);

// USA 0068F324 <- EU 0068F2FC (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint *
// PARAM param_6 Stack[0x4]:4 uint

uint func_0068F324(int param_1,undefined4 *param_2,undefined4 *param_3,uint *param_4,uint *param_5,
                  uint param_6)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x14))
  #define local_24 (*(uint *)(albw_frame + 0x1c))
  iVar2 = *(int *)(param_1 + 0x10) + param_6;
  uVar3 = func_003C8184(*(int **)(param_1 + 0x1c),&local_38,iVar2,&local_38,0x18);
  uVar1 = (uint)uVar3;
  if (-1 < (int)(uVar1 & 0x80000000)) {
    if ((param_4 != (uint *)0x0 && param_5 != (uint *)0x0) && (*param_5 = local_24, local_24 != 0))
    {
      uVar3 = func_003C8184(*(int **)(param_1 + 0x1c),uVar1 & 0x80000000,iVar2 + 0x18,param_4,
                            local_24);
      uVar1 = (uint)uVar3;
      if ((int)uVar1 < 0) goto LAB_0068f394;
    }
    uVar1 = 0;
  }
LAB_0068f394:
  if (-1 < (int)uVar1) {
    *param_2 = local_38;
    *param_3 = local_34;
    param_3[1] = uStack_30;
    param_3[2] = uStack_2c;
    uVar1 = 0;
  }
  return uVar1;
}

