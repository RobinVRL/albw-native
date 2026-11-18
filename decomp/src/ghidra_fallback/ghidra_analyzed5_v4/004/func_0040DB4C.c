#include "ghidra_types.h"

extern int func_00412A3C(int *param_1,uint param_2);
extern int func_00412BB4(void);
extern int func_00412C68(int param_1,undefined4 *param_2);
extern int DAT_0040e000;
extern int DAT_0040e004;

// USA 0040DB4C <- EU 0040DB2C (Ghidra, non-matching)
// GLOBAL DAT_0040e000 int
// GLOBAL DAT_0040e004 int

undefined4 func_0040DB4C(int *param_1,undefined4 param_2,int *param_3,undefined *param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(int *)(albw_frame + 0x8))
  #define local_44 (*(int *)(albw_frame + 0xc))
  #define local_40 (*(int *)(albw_frame + 0x10))
  #define local_3c (*(int *)(albw_frame + 0x14))
  #define local_38 (*(int *)(albw_frame + 0x18))
  #define local_34 (*(int *)(albw_frame + 0x1c))
  #define local_30 (*(int *)(albw_frame + 0x20))
  #define local_2c (*(int *)(albw_frame + 0x24))
  #define local_28 (*(int *)(albw_frame + 0x28))
  #define local_24 (*(int *)(albw_frame + 0x2c))
  iVar3 = (**(code **)(*param_1 + 0x20))(param_1);
  if (*(char *)(iVar3 + 0x10) != '\0') {
    piVar4 = (int *)func_00412BB4();
    puVar5 = (undefined4 *)func_00412A3C(piVar4,5);
    puVar5[3] = piVar4[0x61];
    *(undefined1 *)(puVar5 + 1) = 0xc;
    uVar6 = (**(code **)(*param_1 + 0x20))(param_1);
    puVar5[4] = uVar6;
    func_00412C68((int)piVar4,puVar5);
    goto LAB_0040dca0;
  }
  iVar3 = (**(code **)(*param_1 + 0x14))(param_1);
  if (iVar3 == 0) {
    return 0;
  }
  if (*(char *)((int)param_1 + 0x96) != '\0') {
    if (param_1[0x28] == 0) {
      if (*(char *)((int)param_1 + 0x9d) == '\0' || *(char *)((int)param_1 + 0x9d) == '\x03') {
                    /* WARNING: Could not recover jumptable at 0x0040dc20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        return (**(code **)(*param_1 + 0x10))(param_1);
      }
    }
    else {
      param_1[0x28] = param_1[0x28] + -1;
    }
  }
  bVar2 = false;
  if (*(char *)((int)param_1 + 0x95) == '\0') {
    if ((char)param_1[0x25] == '\0') {
      return 0;
    }
    iVar3 = (**(code **)(*param_1 + 0x14))(param_1);
    if (iVar3 == 0) {
      return 0;
    }
    *(undefined1 *)(param_1 + 0x27) = 1;
    bVar2 = true;
LAB_0040dc50:
    if (param_1[0x29] != -1) {
      param_1[0x29] = param_1[0x29] + 1;
    }
    uVar7 = (uint)*(byte *)((int)param_1 + 0x9d);
    bVar10 = uVar7 != 2;
    if (bVar10) {
      uVar7 = param_1[0x2a];
    }
    if (bVar10 && uVar7 != 0xffffffff) {
      param_1[0x2a] = uVar7 + 1;
    }
  }
  else if ((char)param_1[0x27] == '\x01') goto LAB_0040dc50;
  if (((char)param_1[0x26] != '\0') &&
     (iVar3 = (**(code **)(*param_1 + 0x20))(param_1), *(char *)(iVar3 + 0xf) != '\0'))
  goto LAB_0040dca0;
  cVar1 = *(char *)((int)param_1 + 0x9d);
  if (cVar1 == '\0') {
LAB_0040dd04:
    (**(code **)(*param_1 + 0x28))(param_1);
  }
  else if (cVar1 == '\x01') {
    if (param_1[0x20] < param_1[0x1f]) {
      param_1[0x20] = param_1[0x20] + 1;
    }
  }
  else if (cVar1 == '\x03') {
    if (param_1[0x20] < param_1[0x1f]) {
      param_1[0x20] = param_1[0x20] + 1;
    }
    goto LAB_0040dd04;
  }
  piVar4 = (int *)param_1[8];
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4,param_1[10],param_1);
  }
  if (param_1[7] != 0) {
    local_48 = DAT_0040e000;
    local_44 = DAT_0040e000;
    local_40 = DAT_0040e004;
    local_3c = DAT_0040e004;
    local_38 = DAT_0040e004;
    local_34 = DAT_0040e004;
    local_30 = DAT_0040e004;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    if (param_1[0x29] != 0) {
      local_48 = param_1[0xc];
      local_44 = param_1[0xd];
      local_40 = param_1[0xe];
      local_3c = param_1[0xf];
      local_38 = param_1[0x10];
      local_34 = param_1[0x11];
      local_30 = param_1[0x12];
      local_2c = param_1[0x13];
      local_28 = param_1[0x14];
      local_24 = param_1[0x15];
    }
    (**(code **)(*(int *)param_1[7] + 8))((int *)param_1[7],param_1[10],param_1[0x2b],&local_48);
    param_1[0xc] = local_48;
    param_1[0xd] = local_44;
    param_1[0xe] = local_40;
    param_1[0xf] = local_3c;
    param_1[0x10] = local_38;
    param_1[0x11] = local_34;
    param_1[0x12] = local_30;
    param_1[0x13] = local_2c;
    param_1[0x14] = local_28;
    param_1[0x15] = local_24;
  }
  iVar3 = param_1[5];
  if (iVar3 != 0) {
    iVar8 = *(int *)(iVar3 + 0x48);
    iVar9 = *(int *)(iVar3 + 0x4c);
    param_1[0x18] = *(int *)(iVar3 + 0x50);
    param_1[0x16] = iVar8;
    param_1[0x17] = iVar9;
  }
  (**(code **)(*param_1 + 0x30))(param_1);
  if ((*(char *)((int)param_1 + 0x97) == '\0') || (param_1[0x1c] < param_1[0x1b])) {
    piVar4 = (int *)func_00412BB4();
    if (bVar2) {
      puVar5 = (undefined4 *)func_00412A3C(piVar4,6);
      puVar5[3] = piVar4[0x61];
      *(undefined1 *)(puVar5 + 1) = 5;
      uVar6 = (**(code **)(*param_1 + 0x20))(param_1);
      puVar5[4] = uVar6;
      func_00412C68((int)piVar4,puVar5);
      *(undefined1 *)((int)param_1 + 0x95) = 1;
      *(undefined1 *)(param_1 + 0x25) = 0;
    }
    if (*(char *)((int)param_1 + 0x9d) == '\x01') {
      if (param_1[0x1f] <= param_1[0x20]) {
        puVar5 = (undefined4 *)func_00412A3C(piVar4,6);
        puVar5[3] = piVar4[0x61];
        *(undefined1 *)(puVar5 + 1) = 7;
        uVar6 = (**(code **)(*param_1 + 0x20))(param_1);
        puVar5[4] = uVar6;
        *(undefined1 *)(puVar5 + 5) = 1;
        func_00412C68((int)piVar4,puVar5);
        *(undefined1 *)((int)param_1 + 0x9d) = 2;
      }
    }
    else if ((*(char *)((int)param_1 + 0x9d) == '\x03') && (param_1[0x1f] <= param_1[0x20])) {
      *(undefined1 *)((int)param_1 + 0x9d) = 0;
    }
    if (*(char *)((int)param_1 + 0x9f) != '\0') {
      puVar5 = (undefined4 *)func_00412A3C(piVar4,6);
      puVar5[3] = piVar4[0x61];
      *(undefined1 *)(puVar5 + 1) = 7;
      uVar6 = (**(code **)(*param_1 + 0x20))(param_1);
      puVar5[4] = uVar6;
      *(undefined1 *)(puVar5 + 5) = 0;
      func_00412C68((int)piVar4,puVar5);
      *(undefined1 *)((int)param_1 + 0x9f) = 0;
    }
    if (*(char *)((int)param_1 + 0x9e) != '\x01') {
      if ((*(char *)((int)param_1 + 0x9e) == '\x03') && (param_1[0x23] <= param_1[0x24])) {
        *(undefined1 *)((int)param_1 + 0x9e) = 0;
      }
      return 0;
    }
    if (param_1[0x23] <= param_1[0x24]) {
      *(undefined1 *)((int)param_1 + 0x9e) = 2;
    }
    return 0;
  }
  *(undefined1 *)((int)param_1 + 0x97) = 0;
LAB_0040dca0:
                    /* WARNING: Could not recover jumptable at 0x0040dcb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*param_1 + 0x10))(param_1);
}

