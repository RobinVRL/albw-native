#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern undefined8 func_001163A0(uint *param_1,uint *param_2,uint param_3);
extern int func_003D225C(int param_1);
extern int func_003D2330(undefined4 param_1,undefined4 param_2);
extern int *DAT_003cf0b0;
extern int DAT_003cf0b4;
extern int DAT_003cf0b8;
extern int DAT_003cf0bc;
extern int DAT_003cf0c0;
extern int *DAT_003cf0c4;
extern int DAT_003cf0c8;
extern uint *DAT_003cf0cc;

// USA 003CECD4 <- EU 003CECB0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_003cf0b0 int *
// GLOBAL DAT_003cf0b4 int
// GLOBAL DAT_003cf0b8 int
// GLOBAL DAT_003cf0bc int
// GLOBAL DAT_003cf0c0 int
// GLOBAL DAT_003cf0c4 int *
// GLOBAL DAT_003cf0c8 int
// GLOBAL DAT_003cf0cc uint *

int func_003CECD4(int *param_1,uint *param_2,int param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define local_b4 (*(int *)(albw_frame + 0xc))
  #define local_b0 (*(uint *)(albw_frame + 0x10))
  #define local_ac (*(int * *)(albw_frame + 0x14))
  #define local_a8 ((ushort *)(albw_frame + 0x18))
  #define local_98 (*(int *)(albw_frame + 0x28))
  #define piStack_34 (*(int * *)(albw_frame + 0x8c))
  #define puStack_30 (*(uint * *)(albw_frame + 0x90))
  #define local_2c (*(int *)(albw_frame + 0x94))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x98))
  piVar1 = DAT_003cf0b0;
  piStack_34 = param_1;
  puStack_30 = param_2;
  local_2c = param_3;
  uStack_28 = param_4;
  func_0010C0C0(DAT_003cf0b0);
  iVar5 = param_1[1];
  iVar4 = DAT_003cf0b4;
  if (iVar5 != 0) {
    local_b0 = 0;
    local_b4 = 0;
    if (param_5 == 0) {
      (**(code **)(*param_1 + 8))(param_1,iVar5,3,2,&local_b4);
    }
    else {
      (**(code **)(*param_1 + 8))(param_1,iVar5,4,2,&local_b4);
    }
    iVar2 = DAT_003cf0bc;
    iVar5 = DAT_003cf0b8;
    iVar4 = DAT_003cf0c0;
    if (local_b4 != 0) {
      local_ac = param_1 + 0x156;
      if (param_5 == 0) {
        if (*(char *)(DAT_003cf0bc + 3) != '\0') {
          param_2[5] = 0;
          piVar3 = DAT_003cf0c4;
          func_0010C0C0(DAT_003cf0c4);
          if (*(char *)(iVar2 + 3) != '\0') {
            func_003D225C(param_1[0xea]);
            *(undefined1 *)(iVar2 + 3) = 0;
          }
          func_0010C160(piVar3);
        }
        piVar3 = DAT_003cf0c4;
        iVar4 = local_b4;
        func_0010C0C0(DAT_003cf0c4);
        if (*(char *)(iVar2 + 3) != '\0') {
          func_003D225C(param_1[0xea]);
          *(undefined1 *)(iVar2 + 3) = 0;
        }
        iVar4 = func_003D2330(iVar4,4);
        param_1[0xea] = iVar4;
        if (iVar4 == 0) {
          *(undefined1 *)(iVar2 + 3) = 0;
          func_0010C160(piVar3);
          iVar4 = iVar5;
        }
        else {
          *(undefined1 *)(iVar2 + 3) = 1;
          iVar4 = 0;
          func_0010C160(piVar3);
        }
        if (iVar4 < 0) goto LAB_003ceeec;
        iVar4 = (**(code **)(*param_1 + 0x34))
                          (param_1,param_1[0xea],local_b4,&local_b0,param_1[1],3,0x12);
        puVar8 = (uint *)param_1[0xea];
      }
      else {
        if ((param_5 == 1) && (*(char *)(DAT_003cf0bc + 4) != '\0')) {
          param_2[5] = 0;
          piVar3 = DAT_003cf0c4;
          func_0010C0C0(DAT_003cf0c4);
          if (*(char *)(iVar2 + 4) != '\0') {
            func_003D225C(param_1[0x156]);
            *(undefined1 *)(iVar2 + 4) = 0;
          }
          func_0010C160(piVar3);
        }
        piVar3 = DAT_003cf0c4;
        iVar4 = local_b4;
        func_0010C0C0(DAT_003cf0c4);
        if (*(char *)(iVar2 + 4) != '\0') {
          func_003D225C(param_1[0x156]);
          *(undefined1 *)(iVar2 + 4) = 0;
        }
        iVar4 = func_003D2330(iVar4,4);
        param_1[0x156] = iVar4;
        if (iVar4 == 0) {
          *(undefined1 *)(iVar2 + 4) = 0;
          func_0010C160(piVar3);
          iVar4 = iVar5;
        }
        else {
          *(undefined1 *)(iVar2 + 4) = 1;
          iVar4 = 0;
          func_0010C160(piVar3);
        }
        if (iVar4 < 0) {
LAB_003ceeec:
          param_2[5] = 0;
          func_0010C160(piVar1);
          return iVar5;
        }
        iVar4 = (**(code **)(*param_1 + 0x34))
                          (param_1,param_1[0x156],local_b4,&local_b0,param_1[1],4,0x12);
        puVar8 = (uint *)*local_ac;
      }
      iVar5 = DAT_003cf0c8;
      if ((iVar4 < 0) || (local_b0 == 0)) {
        param_2[5] = 0;
        piVar3 = DAT_003cf0c4;
        if (param_5 == 0) {
          func_0010C0C0(DAT_003cf0c4);
          if (*(char *)(iVar2 + 3) != '\0') {
            func_003D225C(param_1[0xea]);
            *(undefined1 *)(iVar2 + 3) = 0;
          }
        }
        else {
          func_0010C0C0(DAT_003cf0c4);
          if (*(char *)(iVar2 + 4) != '\0') {
            func_003D225C(param_1[0x156]);
            *(undefined1 *)(iVar2 + 4) = 0;
          }
        }
        func_0010C160(piVar3);
        iVar4 = DAT_003cf0c0;
      }
      else {
        if (((local_b0 < 0x20) || (func_001163A0(param_2,puVar8,0x20), param_2[1] != local_b0)) ||
           (uVar6 = param_2[5], local_b0 < uVar6 * 0x70 + 0x20)) {
LAB_003cf000:
          func_0010C160(piVar1);
          return iVar5;
        }
        puVar9 = puVar8 + 8;
        if (uVar6 != 0) {
          puVar8 = DAT_003cf0cc;
        }
        uVar7 = 0;
        if (uVar6 != 0) {
          do {
            func_001163A0((uint *)local_a8,puVar9,0x70);
            if (((uint *)(uint)local_a8[0] != puVar8) || (local_98 != param_1[1]))
            goto LAB_003cf000;
            *(uint **)(local_2c + uVar7 * 4) = puVar9;
            uVar7 = uVar7 + 1;
            puVar9 = puVar9 + 0x1c;
          } while (uVar7 < param_2[5]);
        }
        iVar4 = DAT_003cf0c0;
        if (local_b4 != 0) {
          iVar4 = 0;
        }
      }
    }
  }
  func_0010C160(piVar1);
  return iVar4;
}

