#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00691568(int *param_1,int *param_2);
extern undefined DAT_0049b764;
extern int DAT_0049b768;
extern int DAT_0049b76c;

// USA 0049B570 <- EU 0049B548 (Ghidra, non-matching)
// GLOBAL DAT_0049b764 undefined
// GLOBAL DAT_0049b768 int
// GLOBAL DAT_0049b76c int

undefined4 func_0049B570(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(uint * *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(int *)(albw_frame + 0x14))
  #define local_28 (*(int *)(albw_frame + 0x18))
  #define local_24 (*(undefined * *)(albw_frame + 0x1c))
  if (param_1[2] < 1) {
    (**(code **)(*param_1 + 8))(param_1);
    iVar3 = 0;
    do {
      if (*(char *)(param_1[1] + iVar3) == '\0') break;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x40001);
  }
  else {
    *(undefined1 *)param_1[1] = 0;
  }
  iVar3 = DAT_0049b768;
  local_24 = &DAT_0049b764;
  local_28 = DAT_0049b768;
  iVar4 = func_00691568(param_2,&local_28);
  if (-1 < iVar4) {
    (**(code **)(*param_2 + 8))(param_2);
    iVar2 = DAT_0049b76c;
    local_2c = param_2[1];
    iVar5 = 0;
    do {
      if (*(char *)(local_2c + iVar5) == '\0') {
        if (iVar5 < 0x40001) goto LAB_0049b60c;
        break;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x40001);
    iVar5 = 0;
LAB_0049b60c:
    if (-1 < iVar4 && iVar4 <= iVar5) {
      local_2c = param_2[1];
    }
    local_30 = iVar3;
    if (-1 < iVar4 && iVar4 <= iVar5) {
      local_2c = local_2c + iVar4;
    }
    else {
      local_2c = *(int *)(DAT_0049b76c + 4);
    }
    (**(code **)(iVar3 + 8))(&local_30);
    iVar5 = 0;
    do {
      if (*(char *)(local_2c + iVar5) == '\0') break;
      if (*(char *)(local_2c + iVar5) == '/') {
        bVar1 = true;
        goto LAB_0049b670;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x40001);
    bVar1 = false;
LAB_0049b670:
    if (!bVar1) {
      iVar4 = iVar4 + 1;
      (**(code **)(*param_2 + 8))(param_2);
      iVar5 = 0;
      do {
        if (*(char *)(param_2[1] + iVar5) == '\0') {
          if (iVar5 < 0x40001) goto LAB_0049b6c8;
          break;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x40001);
      iVar5 = 0;
LAB_0049b6c8:
      iVar6 = iVar5;
      if (-1 < iVar4 && iVar4 <= iVar5) {
        iVar6 = param_2[1];
      }
      local_38 = iVar3;
      if (-1 < iVar4 && iVar4 <= iVar5) {
        local_34 = (uint *)(iVar6 + iVar4);
      }
      else {
        local_34 = *(uint **)(iVar2 + 4);
      }
      puVar8 = (uint *)param_1[1];
      (**(code **)(iVar3 + 8))(&local_38);
      uVar7 = 0;
      do {
        if (*(char *)((int)local_34 + uVar7) == '\0') {
          if ((int)uVar7 < 0x40001) goto LAB_0049b728;
          break;
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < 0x40001);
      uVar7 = 0;
LAB_0049b728:
      if (param_1[2] <= (int)uVar7) {
        uVar7 = param_1[2] - 1;
      }
      (**(code **)(local_38 + 8))(&local_38);
      func_0010E3C4(puVar8,local_34,uVar7);
      *(undefined1 *)((int)puVar8 + uVar7) = 0;
      return 1;
    }
  }
  return 0;
}

