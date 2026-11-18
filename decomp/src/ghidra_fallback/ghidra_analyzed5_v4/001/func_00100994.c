#include "ghidra_types.h"

extern int func_00300028(uint *param_1);
extern int func_00300054(uint *param_1);
extern int func_00301084(undefined2 *param_1,int param_2,undefined4 param_3);
extern int DAT_00100a20;

// GLOBAL DAT_00100a20 int
// USA 00100994 <- EU 00100994 (Ghidra, function missing from the decomp table)

undefined4 func_00100994(uint *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined4 *)(albw_frame + 0x0))
  #define local_2c (*(undefined4 *)(albw_frame + 0x4))
  #define local_28 ((undefined2 *)(albw_frame + 0x8))
  #define puStack_20 (*(uint * *)(albw_frame + 0x10))
  #define iStack_1c (*(int *)(albw_frame + 0x14))
  #define local_18 (*(int *)(albw_frame + 0x18))
  iVar3 = 0;
  local_30 = *(undefined4 *)(DAT_00100a20 + 0x1009a2);
  local_2c = *(undefined4 *)(DAT_00100a20 + 0x1009a6);
  puStack_20 = param_1;
  iStack_1c = param_2;
  local_18 = param_3;
  for (iVar2 = 0;
      ((-1 < (int)(*param_1 << 0x1a) || (iVar3 < (int)param_1[7])) &&
      ((iVar2 < local_18 || (*(char *)(param_2 + iVar2) != '\0')))); iVar2 = iVar2 + 1) {
    iVar1 = func_00301084(local_28,(uint)*(byte *)(param_2 + iVar2),&local_30);
    if (iVar1 == 1) {
      iVar3 = iVar3 + 1;
    }
  }
  param_1[6] = param_1[6] - iVar3;
  func_00300028(param_1);
  local_30 = *(undefined4 *)(DAT_00100a20 + 0x1009a2);
  local_2c = *(undefined4 *)(DAT_00100a20 + 0x1009a6);
  for (iVar3 = 0; iVar3 < iVar2; iVar3 = iVar3 + 1) {
    iVar1 = func_00301084(local_28,(uint)*(byte *)(param_2 + iVar3),&local_30);
    if (iVar1 == 1) {
      (*(code *)param_1[1])(local_28[0],param_1[2]);
      param_1[8] = param_1[8] + 1;
    }
  }
  return func_00300054(param_1);
}

