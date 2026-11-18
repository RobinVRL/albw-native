#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern uint *DAT_0021b748;

// USA 0021B638 <- EU 0021B638 (Ghidra, non-matching)
// GLOBAL DAT_0021b748 uint *

bool func_0021B638(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  puVar1 = DAT_0021b748;
  if (*(int *)(param_1 + 0x1354) == 0) {
    piVar5 = (int *)(param_1 + 0x1378);
    iVar2 = *piVar5;
    if (((iVar2 == 0) || (*(int *)(iVar2 + 0x1c) != *(int *)(param_1 + 0x137c))) ||
       (((*(uint *)(iVar2 + 0x3c) & 4) == 0 && (*(uint *)(iVar2 + 0x3c) & 0x40) == 0 &&
        (((iVar4 = *(int *)(iVar2 + 0x20), iVar4 == 0 ||
          (*(int *)(iVar2 + 0x24) != *(int *)(iVar4 + 0xc))) || (*(int *)(iVar4 + 4) < 1)))))) {
      if (*(int *)(param_1 + 0x344) == 0) {
        *piVar5 = 0;
        uStack_14 = 0;
      }
      else {
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0x137c))) {
          func_00110848(iVar2);
        }
        func_004A1B9C(&local_18,*(int *)(param_1 + 0x344),puVar1);
        *piVar5 = local_18;
      }
      *(undefined4 *)(param_1 + 0x137c) = uStack_14;
      iVar2 = *piVar5;
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0x137c))) {
        func_004A2F38(iVar2,(undefined4 *)(param_1 + 0x1304));
      }
    }
  }
  uVar3 = *(uint *)(param_1 + 0x1354);
  bVar6 = uVar3 < *(uint *)(param_1 + 0x1358);
  if (bVar6) {
    *(uint *)(param_1 + 0x1354) = uVar3 + 1;
  }
  return !bVar6;
}

