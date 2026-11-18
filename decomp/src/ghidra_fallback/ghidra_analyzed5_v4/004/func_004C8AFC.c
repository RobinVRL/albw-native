#include "ghidra_types.h"

extern int func_003521F0(int param_1,undefined4 param_2);
extern int func_0035227C(int param_1,undefined4 param_2);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern undefined4 *DAT_004c8c10;

// USA 004C8AFC <- EU 004C8AD4 (Ghidra, non-matching)
// GLOBAL DAT_004c8c10 undefined4 *

/* WARNING: Removing unreachable block (ram,0x004c8bbc) */
/* WARNING: Removing unreachable block (ram,0x004c8bc4) */
/* WARNING: Removing unreachable block (ram,0x004c8bc8) */

undefined4 func_004C8AFC(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define iStack_1c (*(int *)(albw_frame + 0x4))
  if (*(char *)param_2[1] != '\0') {
    puVar1 = (undefined4 *)param_2[2];
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = *(int *)(param_1 + 0x2c);
      *(undefined4 *)(iVar2 + 0x44) = *puVar1;
      *(undefined4 *)(iVar2 + 0x48) = puVar1[1];
      *(undefined4 *)(iVar2 + 0x4c) = puVar1[2];
    }
    puVar1 = (undefined4 *)param_2[3];
    if (puVar1 == (undefined4 *)0x0) {
      iVar2 = *(int *)(param_1 + 0x2c);
      uVar3 = *DAT_004c8c10;
      uVar4 = DAT_004c8c10[1];
      *(undefined4 *)(iVar2 + 0x58) = DAT_004c8c10[2];
      *(undefined4 *)(iVar2 + 0x50) = uVar3;
      *(undefined4 *)(iVar2 + 0x54) = uVar4;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x2c);
      *(undefined4 *)(iVar2 + 0x50) = *puVar1;
      *(undefined4 *)(iVar2 + 0x54) = puVar1[1];
      *(undefined4 *)(iVar2 + 0x58) = puVar1[2];
    }
    func_0035227C(*(int *)(param_1 + 0x2c) + 4,param_2[4]);
    func_003521F0(*(int *)(param_1 + 0x2c) + 4,param_2[5]);
    iVar2 = *(int *)(param_1 + 0x2c);
    (**(code **)(*param_2 + 8))(param_2);
    if (*(int *)(iVar2 + 0x24) == 0) {
      local_20 = 0;
      iStack_1c = 0;
    }
    else {
      func_004A1B9C(&local_20,*(int *)(iVar2 + 0x24),(uint *)param_2[1]);
    }
    if ((local_20 != 0) && (*(int *)(local_20 + 0x1c) == iStack_1c)) {
      return func_004A2F38(local_20,(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x44));
    }
  }
  return 0;
}

