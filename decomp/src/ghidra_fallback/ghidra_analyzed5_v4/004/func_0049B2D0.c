#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_006919D8(int *param_1,int *param_2);
extern undefined DAT_0049b53c;
extern int DAT_0049b540;
extern int DAT_0049b544;

// USA 0049B2D0 <- EU 0049B2A8 (Ghidra, non-matching)
// GLOBAL DAT_0049b53c undefined
// GLOBAL DAT_0049b540 int
// GLOBAL DAT_0049b544 int

void func_0049B2D0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(uint * *)(albw_frame + 0xc))
  if (param_1[2] < 1) {
    (**(code **)(*param_1 + 8))(param_1);
    iVar1 = 0;
    do {
      if (*(char *)(param_1[1] + iVar1) == '\0') break;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x40001);
  }
  else {
    *(undefined1 *)param_1[1] = 0;
  }
  iVar1 = DAT_0049b540;
  local_24 = (uint *)&DAT_0049b53c;
  local_28 = DAT_0049b540;
  iVar2 = func_006919D8(param_2,&local_28);
  if (iVar2 == -1) {
    puVar6 = (uint *)param_1[1];
    (**(code **)(*param_1 + 8))(param_1);
    iVar1 = 0;
    do {
      if (*(char *)(param_1[1] + iVar1) == '\0') {
        if (iVar1 < 0x40001) goto LAB_0049b3ac;
        break;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x40001);
    iVar1 = 0;
LAB_0049b3ac:
    (**(code **)(*param_2 + 8))(param_2);
    uVar5 = 0;
    do {
      if (*(char *)(param_2[1] + uVar5) == '\0') {
        if ((int)uVar5 < 0x40001) goto LAB_0049b3ec;
        break;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 0x40001);
    uVar5 = 0;
LAB_0049b3ec:
    if (param_1[2] <= (int)uVar5) {
      uVar5 = param_1[2] - 1;
    }
    if ((int)uVar5 < 1) {
      return;
    }
    (**(code **)(*param_2 + 8))(param_2);
    func_0010E3C4(puVar6,(uint *)param_2[1],uVar5);
    if ((int)uVar5 <= iVar1) {
      return;
    }
  }
  else {
    iVar2 = iVar2 + 3;
    (**(code **)(*param_2 + 8))(param_2);
    iVar3 = 0;
    do {
      if (*(char *)(param_2[1] + iVar3) == '\0') {
        if (iVar3 < 0x40001) goto LAB_0049b444;
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x40001);
    iVar3 = 0;
LAB_0049b444:
    iVar4 = DAT_0049b544;
    if (-1 < iVar2 && iVar2 <= iVar3) {
      iVar4 = param_2[1];
    }
    local_28 = iVar1;
    if (-1 < iVar2 && iVar2 <= iVar3) {
      local_24 = (uint *)(iVar4 + iVar2);
    }
    else {
      local_24 = *(uint **)(iVar4 + 4);
    }
    puVar6 = (uint *)param_1[1];
    (**(code **)(*param_1 + 8))(param_1);
    iVar1 = 0;
    do {
      if (*(char *)(param_1[1] + iVar1) == '\0') {
        if (iVar1 < 0x40001) goto LAB_0049b4a8;
        break;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x40001);
    iVar1 = 0;
LAB_0049b4a8:
    (**(code **)(local_28 + 8))(&local_28);
    uVar5 = 0;
    do {
      if (*(char *)((int)local_24 + uVar5) == '\0') {
        if ((int)uVar5 < 0x40001) goto LAB_0049b4e8;
        break;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 0x40001);
    uVar5 = 0;
LAB_0049b4e8:
    if (param_1[2] <= (int)uVar5) {
      uVar5 = param_1[2] - 1;
    }
    if ((int)uVar5 < 1) {
      return;
    }
    (**(code **)(local_28 + 8))(&local_28);
    func_0010E3C4(puVar6,local_24,uVar5);
    if ((int)uVar5 <= iVar1) {
      return;
    }
  }
  *(undefined1 *)((int)puVar6 + uVar5) = 0;
  return;
}

