#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_0014D994(float *param_1,float fparam_0,float fparam_1,float fparam_2);
extern int func_003521F0(int param_1,undefined4 param_2);
extern int func_00386B28(int param_1);
extern int func_003AB8DC(int param_1,int param_2);
extern int func_003AB994(int param_1,int param_2);
extern int func_004A2D1C(int param_1,float *param_2);
extern float DAT_003859ac;
extern float DAT_003859b0;
extern float DAT_003859b4;
extern float DAT_003859b8;
extern int DAT_003859bc;
extern float DAT_003859c0;
extern undefined4 DAT_00386904;
extern undefined4 DAT_00386908;

// USA 003858B0 <- EU 0038588C (Ghidra, non-matching)
// GLOBAL DAT_003859ac float
// GLOBAL DAT_003859b0 float
// GLOBAL DAT_003859b4 float
// GLOBAL DAT_003859b8 float
// GLOBAL DAT_003859bc int
// GLOBAL DAT_003859c0 float
// GLOBAL DAT_00386904 undefined4
// GLOBAL DAT_00386908 undefined4

void func_003858B0(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  float fparam_0;
  float fparam_2;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define fStack_40 (*(float *)(albw_frame + 0x0))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x4))
  #define fStack_38 (*(float *)(albw_frame + 0x8))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x1c))
  #define fStack_20 (*(float *)(albw_frame + 0x20))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x24))
  #define fStack_18 (*(float *)(albw_frame + 0x28))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x2c))
  #define fStack_10 (*(float *)(albw_frame + 0x30))
  #define fStack_c (*(float *)(albw_frame + 0x34))
  if (*(char *)(param_1 + 0x39) == '\0') {
    if (*(char *)(param_1 + 0x38) == '\0') {
      func_003AB994(param_1,*(int *)(param_1 + 0x3c));
      goto LAB_003858b8;
    }
  }
  else {
LAB_003858b8:
    cVar1 = *(char *)(param_1 + 0x38);
    bVar6 = cVar1 == '\0';
    if (bVar6) {
      cVar1 = *(char *)(param_1 + 0x39);
    }
    if (bVar6 && cVar1 == '\0') goto LAB_00385988;
  }
  fparam_0 = DAT_003859b0;
  fparam_2 = DAT_003859ac;
  sVar2 = *(short *)(param_1 + 0x138) + 1;
  *(short *)(param_1 + 0x138) = sVar2;
  if ((*(char *)(*(int *)(param_1 + 0x40) + 0x30) == '\0') &&
     (*(char *)(*(int *)(param_1 + 0x44) + 0x30) == '\0')) {
    *(float *)(param_1 + 0x11c) = fparam_2;
    *(float *)(param_1 + 0x120) = fparam_0;
  }
  else {
    if ((sVar2 < 0x32) && (fparam_0 = fparam_2, 0x13 < sVar2)) {
      fparam_0 = DAT_003859b4;
    }
    func_0014D994((float *)(param_1 + 0x11c),fparam_0,DAT_003859b8,fparam_2);
    fparam_2 = *(float *)(param_1 + 0x11c);
    if ((int)ALBW_AS_U32(*(float *)(param_1 + 0x11c)) < DAT_003859bc) {
      fparam_2 = DAT_003859c0;
    }
  }
  iVar3 = *(int *)(param_1 + 0x40);
  *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
  *(float *)(iVar3 + 0x74) = fparam_2;
  *(float *)(iVar3 + 0x78) = fparam_2;
  *(float *)(iVar3 + 0x7c) = fparam_2;
  iVar3 = *(int *)(param_1 + 0x44);
  *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
  *(float *)(iVar3 + 0x74) = fparam_2;
  *(float *)(iVar3 + 0x78) = fparam_2;
  *(float *)(iVar3 + 0x7c) = fparam_2;
LAB_00385988:
  func_003AB8DC(param_1,*(int *)(param_1 + 0x3c));
  func_00386B28(param_1);
  iVar3 = *(int *)(param_1 + 0x1bc);
  if (((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) == *(int *)(param_1 + 0x1c0))) &&
     (((*(uint *)(iVar3 + 0x3c) & 4) != 0 || (*(uint *)(iVar3 + 0x3c) & 0x40) != 0 ||
      (((iVar4 = *(int *)(iVar3 + 0x20), iVar4 != 0 &&
        (*(int *)(iVar3 + 0x24) == *(int *)(iVar4 + 0xc))) && (0 < *(int *)(iVar4 + 4))))))) {
    func_00115154(&fStack_10,&fStack_c,*(uint *)(*(int *)(param_1 + 4) + 1000));
    uStack_2c = DAT_00386908;
    uStack_1c = DAT_00386904;
    fStack_20 = -fStack_10;
    uStack_30 = DAT_00386904;
    uStack_28 = DAT_00386904;
    uStack_3c = DAT_00386904;
    fStack_40 = fStack_c;
    fStack_38 = fStack_10;
    fStack_18 = fStack_c;
    iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x8d4) + 0x24) + 0x14) +
            *(int *)(*(int *)(param_1 + 4) + 0x8fc) * 0x30;
    uStack_34 = *(undefined4 *)(iVar3 + 0xc);
    uStack_24 = *(undefined4 *)(iVar3 + 0x1c);
    uStack_14 = *(undefined4 *)(iVar3 + 0x2c);
    iVar3 = *(int *)(param_1 + 0x1bc);
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) == *(int *)(param_1 + 0x1c0))) {
      func_004A2D1C(iVar3,&fStack_40);
    }
    cVar1 = *(char *)(param_1 + 0x3b);
    if (cVar1 == '\x04') {
      uVar5 = 1;
    }
    else if (cVar1 == '\x05') {
      uVar5 = 2;
    }
    else if (cVar1 == '\x06') {
      uVar5 = 3;
    }
    else {
      uVar5 = 0;
    }
    func_003521F0(*(int *)(param_1 + 4) + 0x324,uVar5);
  }
  return;
}

