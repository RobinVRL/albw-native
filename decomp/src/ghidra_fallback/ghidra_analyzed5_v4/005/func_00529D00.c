#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_006919D8(int *param_1,int *param_2);
extern undefined DAT_00529e24;
extern int DAT_00529e28;

// USA 00529D00 <- EU 00529CD8 (Ghidra, non-matching)
// GLOBAL DAT_00529e24 undefined
// GLOBAL DAT_00529e28 int

uint func_00529D00(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(uint * *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(undefined * *)(albw_frame + 0x14))
  iVar1 = DAT_00529e28;
  iVar2 = param_1;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_1 + 0x20);
  }
  if (param_2 != 0 && iVar2 != 0) {
    local_2c = &DAT_00529e24;
    local_30 = DAT_00529e28;
    iVar2 = func_006919D8(*(int **)(param_1 + 0x20),&local_30);
    if (iVar2 != 0) {
      piVar4 = *(int **)(param_1 + 0x20);
      (**(code **)(*piVar4 + 8))(piVar4);
      iVar3 = 0;
      do {
        if (*(char *)(piVar4[1] + iVar3) == '\0') {
          if (iVar3 < 0x40001) goto LAB_00529d60;
          break;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x40001);
      iVar3 = 0;
LAB_00529d60:
      piVar4 = *(int **)(param_1 + 0x20);
      uVar7 = (iVar3 - iVar2) - 1;
      (**(code **)(*piVar4 + 8))(piVar4);
      local_38 = iVar1;
      local_34 = (uint *)(piVar4[1] + iVar2 + 1);
      puVar6 = *(uint **)(param_2 + 4);
      uVar5 = uVar7;
      if ((int)uVar7 < 0) {
        (**(code **)(iVar1 + 8))(&local_38);
        uVar5 = 0;
        do {
          if (*(char *)((int)local_34 + uVar5) == '\0') {
            if ((int)uVar5 < 0x40001) goto LAB_00529ddc;
            break;
          }
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < 0x40001);
        uVar5 = 0;
      }
LAB_00529ddc:
      if (*(int *)(param_2 + 8) <= (int)uVar5) {
        uVar5 = *(int *)(param_2 + 8) - 1;
      }
      (**(code **)(local_38 + 8))(&local_38);
      func_0010E3C4(puVar6,local_34,uVar5);
      *(undefined1 *)((int)puVar6 + uVar5) = 0;
      return uVar7;
    }
  }
  return 0xffffffff;
}

