#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern int func_0010F0A8(int param_1,uint param_2);
extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_0049C4BC(int param_1,uint param_2,int param_3);
extern int func_0049C5BC(int param_1,uint param_2);
extern int func_0049C724(int param_1,uint param_2,int param_3);
extern int func_005804EC(int param_1,uint param_2,int param_3);
extern int *DAT_0049ce38;

// USA 0049CBE4 <- EU 0049CBBC (Ghidra, non-matching)
// GLOBAL DAT_0049ce38 int *
// GLOBAL EXT_00000004 undefined

int func_0049CBE4(int *param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  float in_s0;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(int * *)(albw_frame + 0x8))
  #define local_44 (*(int * *)(albw_frame + 0xc))
  #define local_40 (*(int * *)(albw_frame + 0x10))
  #define local_3c (*(int * *)(albw_frame + 0x14))
  #define local_38 (*(int * *)(albw_frame + 0x18))
  #define iStack_34 (*(int *)(albw_frame + 0x1c))
  #define piStack_30 (*(int * *)(albw_frame + 0x20))
  #define local_2c (*(int * *)(albw_frame + 0x24))
  #define puStack_28 (*(undefined4 * *)(albw_frame + 0x28))
  iVar8 = *DAT_0049ce38;
  piVar2 = param_2;
  if (param_2 < &UndefinedInstruction) {
    piVar2 = (int *)&UndefinedInstruction;
  }
  piStack_30 = param_1;
  local_2c = param_2;
  puStack_28 = param_3;
  if ((int *)param_1[8] <= piVar2) {
    puVar6 = param_3;
    if (iVar8 != 0) {
      puVar6 = *(undefined4 **)(iVar8 + 4);
    }
    if (iVar8 == 0 || puVar6 == (undefined4 *)0x0) {
      return 0;
    }
LAB_0049cbfc:
    local_48 = param_1;
    local_44 = param_2;
    local_40 = param_3;
    local_3c = piVar2;
    local_38 = param_3;
    (**(code **)*puVar6)(puVar6,&local_48);
    return 0;
  }
  uVar4 = ((uint)param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f);
  puVar6 = (undefined4 *)(uVar4 - 1);
  if ((uVar4 & (uint)puVar6) != 0) {
    if (iVar8 != 0) {
      puVar6 = *(undefined4 **)(iVar8 + 4);
    }
    if (iVar8 == 0 || puVar6 == (undefined4 *)0x0) {
      return 0;
    }
    goto LAB_0049cbfc;
  }
  local_48 = (int *)((uint)((int)piVar2 + 3) & 0xfffffffc);
  piVar2 = (int *)0x0;
  if ((param_1[0x1c] & 1U) != 0) {
    func_0010C0B8((int)(param_1 + 0x15));
    piVar2 = param_1 + 0x15;
  }
  piVar1 = local_48;
  iVar7 = (int)(char)param_1[0x14] * (int)param_3;
  if (iVar7 < 0) {
    iVar3 = -iVar7;
    if (iVar7 == -4 || iVar3 < 4) {
      puVar6 = func_0049C5BC((int)param_1,(uint)local_48);
      iVar7 = iVar3;
    }
    else {
      puVar6 = func_0049C724((int)param_1,(uint)local_48,iVar3);
      iVar7 = iVar3;
    }
LAB_0049cdc8:
    if (puVar6 != (undefined4 *)0x0) {
      iVar3 = (int)puVar6 + puVar6[3] + 0x10;
      goto LAB_0049ce20;
    }
  }
  else {
    if (4 < iVar7) {
      puVar6 = (undefined4 *)func_0049C4BC((int)param_1,(uint)local_48,iVar7);
      goto LAB_0049cdc8;
    }
    puVar6 = (undefined4 *)
             func_005804EC((int)param_1,(uint)local_48,(uint)*(byte *)(param_1 + 0x1d));
    if (puVar6 != (undefined4 *)0x0) {
      local_40 = (int *)(puVar6[3] + 0x10 + (int)puVar6);
      iVar3 = puVar6[2];
      puVar6[2] = piVar1;
      uVar4 = iVar3 - (int)piVar1;
      func_0010F1F8((int *)(param_1[0x21] + (int)puVar6),in_s0);
      param_1[0x20] = param_1[0x20] + -1;
      local_44 = param_1 + 0x22;
      func_0010F1DC(local_44,(int *)(param_1[0x25] + (int)puVar6));
      local_44[2] = local_44[2] + 1;
      if (uVar4 < 0x11) {
        if (uVar4 != 0) {
          puVar6[2] = (int)piVar1 + uVar4;
        }
      }
      else {
        puVar5 = (undefined4 *)((int)local_40 + (int)piVar1);
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
        }
        puVar5[2] = uVar4 - 0x10;
        func_0010F0A8((int)param_1,(uint)puVar5);
      }
      goto LAB_0049cdc8;
    }
  }
  puVar6 = (undefined4 *)0x0;
  iVar3 = 0;
  if (iVar8 != 0) {
    puVar6 = *(undefined4 **)(iVar8 + 4);
  }
  if (iVar8 != 0 && puVar6 != (undefined4 *)0x0) {
    local_40 = local_2c;
    local_38 = local_48;
    local_44 = param_1;
    local_3c = param_3;
    iStack_34 = iVar7;
    (**(code **)*puVar6)(puVar6,&local_44);
  }
LAB_0049ce20:
  if (piVar2 != (int *)0x0) {
    func_0010EEE0((int)piVar2);
  }
  return iVar3;
}

