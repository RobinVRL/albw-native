#include "ghidra_types.h"

extern undefined8 func_001163A0(uint *param_1,uint *param_2,uint param_3);
extern int func_003DE244(undefined4 *param_1);
extern int func_00413F10(uint param_1,int param_2);
extern int func_004143B4(int param_1,int param_2,undefined4 param_3);
extern int func_00414490(int param_1,int param_2,int param_3,int param_4);
extern int func_004144B8(ushort *param_1,int param_2,uint param_3,byte *param_4);
extern uint DAT_0041cd24;

// USA 0041CAF0 <- EU 0041CAD0 (Ghidra, non-matching)
// GLOBAL DAT_0041cd24 uint

void func_0041CAF0(int param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  int *piVar8;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(ushort * *)(albw_frame + 0x8))
  #define auStack_50 ((uint *)(albw_frame + 0x10))
  #define local_30 (*(uint *)(albw_frame + 0x30))
  *(byte *)(param_1 + 0x7c) = param_2[1];
  uVar1 = *(uint *)(param_2 + 0xc);
  *(uint *)(param_1 + 0x78) = uVar1;
  if ((param_3 != 0) && (*param_2 == 3)) {
    param_3 = (uint)((ulonglong)DAT_0041cd24 * (ulonglong)param_3 + (ulonglong)DAT_0041cd24 >> 0x22)
              * 0xe;
  }
  local_30 = func_00413F10(uVar1,(uint)*param_2);
  func_00413F10(*(uint *)(param_2 + 0x10),(uint)*param_2);
  iVar5 = 0;
  iVar2 = *(int *)(*(int *)(param_1 + 0x1a0) + 8);
  if (0 < iVar2) {
    do {
      puVar6 = *(ushort **)(param_2 + iVar5 * 0x30 + 0x14);
      local_58 = puVar6;
      if (param_3 != 0) {
        uVar1 = func_00413F10(param_3,(uint)*param_2);
        local_58 = (ushort *)(uVar1 + (int)puVar6);
      }
      iVar3 = param_1 + iVar5 * 6;
      puVar7 = (ushort *)(iVar3 + 0x60);
      if (*param_2 == 3) {
        func_001163A0(auStack_50,(uint *)(param_2 + iVar5 * 0x30 + 0x18),0x20);
        if (param_3 == 0) {
          *puVar7 = *(ushort *)(param_2 + iVar5 * 0x30 + 0x38);
          *(undefined2 *)(iVar3 + 0x62) = *(undefined2 *)(param_2 + iVar5 * 0x30 + 0x3a);
          *(undefined2 *)(iVar3 + 100) = *(undefined2 *)(param_2 + iVar5 * 0x30 + 0x3c);
        }
        else {
          *puVar7 = *local_58;
          *(undefined2 *)(iVar3 + 0x62) = *(undefined2 *)(param_2 + iVar5 * 0x30 + 0x3a);
          *(undefined2 *)(iVar3 + 100) = *(undefined2 *)(param_2 + iVar5 * 0x30 + 0x3c);
          func_004144B8(puVar7,(int)auStack_50,param_3,(byte *)puVar6);
        }
        if (param_2[1] != 0) {
          *(undefined2 *)(iVar3 + 0x6c) = *(undefined2 *)(param_2 + iVar5 * 0x30 + 0x3e);
          *(undefined2 *)(iVar3 + 0x6e) = *(undefined2 *)(param_2 + iVar5 * 0x30 + 0x40);
          *(undefined2 *)(iVar3 + 0x70) = *(undefined2 *)(param_2 + iVar5 * 0x30 + 0x42);
        }
        func_004143B4(*(int *)(param_1 + 0x1a0),iVar5,auStack_50);
      }
      puVar4 = (undefined4 *)(param_1 + iVar5 * 0x30);
      piVar8 = puVar4 + 6;
      func_003DE244(puVar4);
      *puVar4 = local_58;
      puVar4[1] = *(int *)(param_2 + 0x10) - param_3;
      *(undefined1 *)(puVar4 + 4) = 0;
      if (*param_2 == 3) {
        puVar4[2] = puVar7;
      }
      func_00414490(*(int *)(param_1 + 0x1a0),iVar5,(int)puVar4,(uint)(param_2[1] == 0));
      if (param_2[1] != 0) {
        func_003DE244(piVar8);
        *piVar8 = (int)(local_30 + (int)puVar6);
        puVar4[7] = *(int *)(param_2 + 0x10) - *(int *)(param_1 + 0x78);
        *(undefined1 *)(puVar4 + 10) = 1;
        if (*param_2 == 3) {
          puVar4[8] = (undefined2 *)(iVar3 + 0x6c);
        }
        func_00414490(*(int *)(param_1 + 0x1a0),iVar5,(int)piVar8,1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  return;
}

