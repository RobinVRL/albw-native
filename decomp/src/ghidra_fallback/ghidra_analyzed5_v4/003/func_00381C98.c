#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_0038063C(int param_1);
extern float func_004F898C(void);
extern float func_004F9594(void);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern float func_00521274(int param_1);
extern int func_00588BE4(int param_1);
extern int func_006678C0(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern int DAT_00381df0;
extern int DAT_00381df4;
extern float DAT_00381df8;
extern int *DAT_00381dfc;
extern int DAT_00381e00;
extern float DAT_00381e04;
extern float DAT_00381e08;
extern undefined4 DAT_00381e0c;

// USA 00381C98 <- EU 00381C74 (Ghidra, non-matching)
// GLOBAL DAT_00381df0 int
// GLOBAL DAT_00381df4 int
// GLOBAL DAT_00381df8 float
// GLOBAL DAT_00381dfc int *
// GLOBAL DAT_00381e00 int
// GLOBAL DAT_00381e04 float
// GLOBAL DAT_00381e08 float
// GLOBAL DAT_00381e0c undefined4

void func_00381C98(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define afStack_28 ((float *)(albw_frame + 0x8))
  iVar3 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0xad8),DAT_00381df4,DAT_00381df0,
                        DAT_00381df8);
  uVar2 = DAT_00381e0c;
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x3dc) = DAT_00381e0c;
    *(undefined4 *)(param_1 + 0x3e4) = uVar2;
  }
  else {
    iVar3 = func_00588BE4(param_1);
    if (iVar3 == *DAT_00381dfc) {
      fVar6 = func_00521274(param_1);
      if (DAT_00381e00 < (int)ALBW_AS_U32(fVar6)) {
        if (*(char *)(param_1 + 0xb2f) == '\0') {
          func_00115C70(afStack_28,(float *)(param_1 + 8),(float *)(param_1 + 0x3d0));
          iVar3 = func_0068C690(afStack_28);
          *(undefined1 *)(param_1 + 0xb2f) = 1;
          *(uint *)(param_1 + 0xad8) = iVar3 + 0x20000000U & 0xc0000000;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0xb2f) = 0;
      }
    }
    uVar4 = *(uint *)(param_1 + 1000);
    fVar7 = func_004F898C();
    fVar7 = *(float *)(param_1 + 0x3e0) - fVar7;
    fVar8 = func_004F9594();
    fVar1 = DAT_00381e08;
    fVar6 = DAT_00381e04;
    if (fVar7 < -fVar8) {
      fVar7 = -fVar8;
    }
    *(float *)(param_1 + 0x3e0) = fVar7;
    fVar8 = *(float *)(param_1 + 0xb04);
    fVar8 = fVar8 + (fVar6 - fVar8) * fVar1;
    *(float *)(param_1 + 0xb04) = fVar8;
    func_0014FAFC(param_1,uVar4,fVar8);
    *(float *)(param_1 + 0x3e0) = fVar7;
    uVar4 = *(uint *)(param_1 + 0xae8);
    bVar5 = *(uint *)(param_1 + 0xaec) == uVar4;
    if (uVar4 < *(uint *)(param_1 + 0xaec)) {
      *(uint *)(param_1 + 0xae8) = uVar4 + 1;
    }
    else {
      bVar5 = *(char *)(param_1 + 0xb2f) == '\0';
    }
    if (bVar5) {
      func_006678C0((undefined4 *)(param_1 + 0xa48),2);
    }
  }
  iVar3 = func_0038063C(param_1);
  if (iVar3 != 0) {
    func_006678C0((undefined4 *)(param_1 + 0xa48),4);
  }
  return;
}

