#include "ghidra_types.h"

extern int func_0048B814(int param_1,int *param_2);
extern int func_0049B570(int *param_1,int *param_2);
extern int DAT_0048bc88;
extern undefined4 DAT_0048bc8c;
extern int DAT_0048bc90;

// USA 0048BB48 <- EU 0048BB20 (Ghidra, non-matching)
// GLOBAL DAT_0048bc88 int
// GLOBAL DAT_0048bc8c undefined4
// GLOBAL DAT_0048bc90 int

undefined4 func_0048BB48(int param_1,int *param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(int *)(albw_frame + 0x0))
  #define local_5c (*(undefined1 * *)(albw_frame + 0x4))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x8))
  #define local_54 ((undefined1 *)(albw_frame + 0xc))
  #define uStack_35 (*(undefined1 *)(albw_frame + 0x2b))
  #define local_30 (*(int *)(albw_frame + 0x30))
  #define local_2c (*(undefined1 * *)(albw_frame + 0x34))
  local_30 = DAT_0048bc88;
  local_2c = (undefined1 *)DAT_0048bc8c;
  local_5c = local_54;
  uStack_58 = 0x20;
  uStack_35 = 0;
  local_54[0] = 0;
  local_60 = DAT_0048bc90;
  if (param_4 == 0) {
    iVar2 = func_0049B570(&local_60,param_2);
    if (iVar2 == 0) {
      return 0;
    }
    for (iVar2 = *(int *)(param_1 + 0x2c); iVar2 != param_1 + 0x28; iVar2 = *(int *)(iVar2 + 4)) {
      iVar6 = *(int *)(iVar2 + 8);
      piVar4 = (int *)(iVar6 + 0x20);
      (**(code **)(*piVar4 + 8))(piVar4);
      (**(code **)(*piVar4 + 8))(piVar4);
      puVar7 = *(undefined1 **)(iVar6 + 0x24);
      (**(code **)(local_60 + 8))(&local_60);
      if (puVar7 == local_5c) {
LAB_0048bc34:
        param_4 = *(int *)(iVar2 + 8);
        local_2c = local_5c;
        if (param_4 != 0) goto LAB_0048bb70;
        goto LAB_0048bc20;
      }
      iVar3 = 0;
      do {
        cVar1 = *(char *)(*(int *)(iVar6 + 0x24) + iVar3);
        if (cVar1 != local_5c[iVar3]) break;
        if (cVar1 == '\0') goto LAB_0048bc34;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x40001);
    }
    param_4 = 0;
    local_2c = local_5c;
  }
  else {
LAB_0048bb70:
    local_2c = *(undefined1 **)(param_3 + 4);
  }
LAB_0048bc20:
  piVar4 = (int *)param_2[8];
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)func_0048B814(param_1,&local_30);
  }
  if (param_4 != 0) {
    uVar5 = (**(code **)(*piVar4 + 0x14))(piVar4,param_2,param_4);
    return uVar5;
  }
  uVar5 = (**(code **)(*piVar4 + 0x10))(piVar4,param_2);
  return uVar5;
}

