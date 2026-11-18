#include "ghidra_types.h"

extern int func_001212EC(int param_1,int *param_2,int param_3,int param_4);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int *DAT_001c71b4;
extern int DAT_001c71b8;

// USA 001C70E4 <- EU 001C70E4 (Ghidra, non-matching)
// GLOBAL DAT_001c71b4 int *
// GLOBAL DAT_001c71b8 int

void func_001C70E4(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint in_fpscr;
  float fparam_0;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x430) + *(char *)(param_1 + 0x418) * 8 + 4);
  pcVar3 = *(code **)(*(int *)(param_1 + 0x430) + *(char *)(param_1 + 0x418) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(*(int *)(param_1 + 0x428) + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)(*(int *)(param_1 + 0x428)) + ((int)uVar1 >> 1));
  iVar2 = *(int *)(param_1 + 0x414) + 1;
  *(int *)(param_1 + 0x414) = iVar2;
  if (*(int *)(param_1 + 0x424) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x424),1,fparam_0);
  }
  if ((0 < *(int *)(param_1 + 0x474)) &&
     (iVar2 = *(int *)(param_1 + 0x474) + -1, *(int *)(param_1 + 0x474) = iVar2, iVar2 == 0)) {
    func_001212EC(*(int *)(*DAT_001c71b4 + 0x18),(int *)(param_1 + 0x46c),
                  *(uint *)(DAT_001c71b8 + 0x684) >> 0x10,0);
    *(uint *)(param_1 + 0x2e0) = *(uint *)(param_1 + 0x2e0) & 0xfffffff7;
  }
  return;
}

