#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);
extern undefined4 DAT_005161ec;

// USA 00516174 <- EU 0051614C (Ghidra, non-matching)
// GLOBAL DAT_005161ec undefined4

undefined4 func_00516174(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  func_00115C54(&local_18,(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x460));
  iVar2 = *(int *)(param_1 + 0x40c);
  piVar3 = (int *)(param_1 + 0x40c);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  func_00491E80((float *)(iVar2 + 0x80),0,*(uint *)(param_1 + 1000),0);
  uVar1 = DAT_005161ec;
  iVar2 = *piVar3;
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  *(float *)(iVar2 + 0x8c) = local_18;
  *(undefined4 *)(iVar2 + 0x9c) = local_14;
  *(undefined4 *)(iVar2 + 0xac) = local_10;
  iVar2 = *piVar3;
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar2 + 0x74) = uVar1;
  *(undefined4 *)(iVar2 + 0x78) = uVar1;
  *(undefined4 *)(iVar2 + 0x7c) = uVar1;
  return func_004CEAF0(*piVar3);
}

