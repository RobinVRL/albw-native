#include "ghidra_types.h"

extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int *DAT_0051c130;

// USA 0051C0C4 <- EU 0051C09C (Ghidra, non-matching)
// GLOBAL DAT_0051c130 int *

void func_0051C0C4(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(undefined4 *)(albw_frame + 0x14))
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0xffffffff;
  iVar1 = func_005826A4(*DAT_0051c130,&local_18,param_2,param_3);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x3c) = local_c;
    *(int *)(param_1 + 0x30) = local_18;
    *(undefined4 *)(param_1 + 0x34) = local_14;
    *(undefined4 *)(param_1 + 0x38) = local_10;
    iVar2 = *(int *)(param_1 + 0x20);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 0x74);
    }
    if (iVar2 != 0 && iVar1 != 0) {
      uVar3 = *(undefined4 *)(param_1 + 0x30);
      uVar4 = *(undefined4 *)(param_1 + 0x34);
      *(undefined4 *)(iVar1 + 0x70) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(iVar1 + 0x74) = local_c;
      *(undefined4 *)(iVar1 + 0x68) = uVar3;
      *(undefined4 *)(iVar1 + 0x6c) = uVar4;
    }
  }
  return;
}

