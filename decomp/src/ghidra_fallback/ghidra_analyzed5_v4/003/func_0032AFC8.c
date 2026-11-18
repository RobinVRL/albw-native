#include "ghidra_types.h"

extern void func_004D08B8(int param_1,float fparam_0);
extern int func_004FAB60(int param_1,undefined4 param_2,int param_3);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_00691F30(uint param_1,uint param_2);
extern uint *DAT_0032b1f0;
extern uint *DAT_0032b1f4;
extern float DAT_0032b1f8;
extern undefined4 DAT_0032b1fc;
extern float DAT_0032b200;
extern undefined4 DAT_0032b204;
extern float DAT_0032b208;
extern undefined4 DAT_0032b20c;
extern int *DAT_0032b210;
extern float DAT_0032b214;

// USA 0032AFC8 <- EU 0032AFA4 (Ghidra, non-matching)
// GLOBAL DAT_0032b1f0 uint *
// GLOBAL DAT_0032b1f4 uint *
// GLOBAL DAT_0032b1f8 float
// GLOBAL DAT_0032b1fc undefined4
// GLOBAL DAT_0032b200 float
// GLOBAL DAT_0032b204 undefined4
// GLOBAL DAT_0032b208 float
// GLOBAL DAT_0032b20c undefined4
// GLOBAL DAT_0032b210 int *
// GLOBAL DAT_0032b214 float

undefined4 func_0032AFC8(int param_1)

{
  char cVar1;
  uint *puVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  
  cVar1 = *(char *)(param_1 + 0xc90);
  if (cVar1 == '\x05') {
    if (*(int *)(param_1 + 0xc60) == 0) {
      *(undefined1 *)(param_1 + 0xc90) = 6;
      return 0;
    }
    *(int *)(param_1 + 0xc60) = *(int *)(param_1 + 0xc60) + -1;
    return 0;
  }
  uVar6 = *DAT_0032b1f0;
  puVar2 = (uint *)(param_1 + 0xc3c);
  if (cVar1 == '\x06') {
    uVar7 = *puVar2;
    *puVar2 = uVar7 + uVar6;
    uVar5 = *DAT_0032b1f4;
    if (uVar5 <= uVar7 + uVar6) {
      *(undefined1 *)(param_1 + 0xc90) = 7;
      *(uint *)(param_1 + 0xc3c) = uVar5;
      *(undefined4 *)(param_1 + 0xc60) = 0x78;
    }
  }
  else {
    if (cVar1 != '\a') {
      if (cVar1 != '\b') {
        return 0;
      }
      uVar5 = *(uint *)(param_1 + 0xc3c);
      if (*DAT_0032b210 * 2 <= (int)uVar5) {
        *puVar2 = uVar5 - uVar6;
        *(uint *)(param_1 + 1000) = *(int *)(param_1 + 1000) + (uVar5 - uVar6);
        return 0;
      }
      uVar7 = *(uint *)(param_1 + 1000);
      fVar4 = ALBW_AS_F32(func_00691F30(-uVar7,(uint)(uVar7 == 0)));
      uVar9 = VectorFloatToUnsigned(fVar4 * DAT_0032b214,3);
      if ((uVar9 < uVar5) && (uVar5 = uVar6, uVar6 < uVar9)) {
        uVar5 = uVar9;
      }
      *(uint *)(param_1 + 1000) = uVar7 + uVar5;
      if (uVar7 < uVar7 + uVar5) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0xc3c) = 0;
      *(undefined4 *)(param_1 + 1000) = 0;
      func_004FC07C(param_1,5,0x10,0);
      return 1;
    }
    iVar3 = *(int *)(param_1 + 0xc60) + -1;
    *(int *)(param_1 + 0xc60) = iVar3;
    if (iVar3 == 0x5a) {
      fVar4 = DAT_0032b1f8;
      func_004D08B8(*(int *)(param_1 + 0xa88),DAT_0032b1f8);
      if (*(int *)(param_1 + 0xa80) != 0) {
        func_004D08B8(*(int *)(param_1 + 0xa80),fVar4);
      }
      *(undefined4 *)(param_1 + 0xc54) = DAT_0032b1fc;
      func_004FAB60(param_1,3,0);
    }
    else {
      if (iVar3 == 0x3c) {
        fVar4 = DAT_0032b200;
        func_004D08B8(*(int *)(param_1 + 0xa88),DAT_0032b200);
        uVar8 = DAT_0032b204;
        if (*(int *)(param_1 + 0xa80) != 0) {
          func_004D08B8(*(int *)(param_1 + 0xa80),fVar4);
          uVar8 = DAT_0032b204;
        }
      }
      else {
        if (iVar3 != 0x1e) {
          if (iVar3 == 0) {
            *(undefined1 *)(param_1 + 0xc90) = 8;
            func_004FC07C(param_1,0xb,0x10,0);
          }
          goto LAB_0032b03c;
        }
        fVar4 = DAT_0032b208;
        func_004D08B8(*(int *)(param_1 + 0xa88),DAT_0032b208);
        uVar8 = DAT_0032b20c;
        if (*(int *)(param_1 + 0xa80) != 0) {
          func_004D08B8(*(int *)(param_1 + 0xa80),fVar4);
          uVar8 = DAT_0032b20c;
        }
      }
      *(undefined4 *)(param_1 + 0xc54) = uVar8;
    }
  }
LAB_0032b03c:
  *(int *)(param_1 + 1000) = *(int *)(param_1 + 0xc3c) + *(int *)(param_1 + 1000);
  return 0;
}

