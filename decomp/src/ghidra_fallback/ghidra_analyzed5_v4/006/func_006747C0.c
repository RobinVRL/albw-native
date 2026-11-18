#include "ghidra_types.h"

extern int func_001512B4(int param_1,float *param_2);
extern int func_002F9100(int param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_003931EC(undefined4 *param_1,uint param_2);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern int func_004FB0D8(int param_1,float *param_2);
extern int func_0065B098(int param_1,undefined4 param_2);
extern int func_0065B104(int param_1);
extern float DAT_00674a48;
extern float DAT_00674a4c;

// USA 006747C0 <- EU 00674798 (Ghidra, non-matching)
// GLOBAL DAT_00674a48 float
// GLOBAL DAT_00674a4c float

void func_006747C0(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  float *pfVar6;
  int *piVar7;
  bool bVar8;
  uint in_fpscr;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  iVar2 = func_004F70A8(param_1);
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0x263) = 0;
    return;
  }
  if (param_1[0x25f] != 0) {
    param_1[0x25f] = param_1[0x25f] + -1;
  }
  piVar7 = param_1 + 0x243;
  if ((param_1[0x260] == 0) || (iVar2 = param_1[0x260] + -1, param_1[0x260] = iVar2, iVar2 != 0)) {
LAB_0067481c:
    if ((char)param_1[0x244] == '\x04' || (char)param_1[0x244] == '\x05') goto LAB_006748c8;
  }
  else {
    *(undefined1 *)(param_1[0x108] + 0x61) = 1;
    if ((char)param_1[0x244] != '\x06' && (char)param_1[0x244] != '\b') {
      param_1[0x167] = param_1[0x167] | 0x80;
      goto LAB_0067481c;
    }
  }
  iVar2 = func_004F8998(param_1,0,(char *)0x0);
  if (iVar2 == 0) {
    if ((((char)param_1[0x244] != '\x03') && (*(char *)((int)param_1 + 0x909) != '\0')) &&
       (iVar2 = func_002F9100((int)param_1), iVar2 != 0)) {
      func_0065B098((int)piVar7,3);
      func_003931EC(piVar7,3);
      func_0065B104((int)piVar7);
    }
  }
  else {
    func_0065B098((int)piVar7,4);
    func_003931EC(piVar7,4);
    func_0065B104((int)piVar7);
  }
LAB_006748c8:
  pfVar6 = (float *)param_1[0x248];
  piVar3 = (int *)(param_1[0x24a] + (char)param_1[0x244] * 8);
  uVar4 = *(uint *)(param_1[0x24a] + (char)param_1[0x244] * 8 + 4);
  piVar5 = (int *)((int)pfVar6 + ((int)uVar4 >> 1));
  if ((uVar4 & 1) != 0) {
    piVar3 = (int *)(*piVar3 + *piVar5);
  }
  (*(code *)*piVar3)(piVar5);
  iVar2 = *piVar7;
  *piVar7 = iVar2 + 1;
  if (param_1[0x247] != 0) {
    fVar9 = (float)VectorUnsignedToFloat(iVar2 + 1,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(param_1[0x247],1,fVar9);
  }
  *(undefined1 *)(param_1 + 0x263) = 1;
  if ((char)param_1[0x244] != '\x06' && (char)param_1[0x244] != '\b') {
    fVar9 = func_004F898C();
    func_004F8964((float *)(param_1 + 0xf8),1,fVar9);
  }
  func_004FB0D8((int)param_1,(float *)(param_1 + 0xf8));
  func_004F48F0((int)param_1);
  func_004F5588((int)param_1);
  func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar6);
  iVar2 = *(int *)(*(int *)(param_1[0x103] + 0x24) + 0x14) + param_1[0x23f] * 0x30;
  local_20 = *(float *)(iVar2 + 0xc);
  local_1c = *(undefined4 *)(iVar2 + 0x1c);
  local_18 = *(undefined4 *)(iVar2 + 0x2c);
  func_001512B4(param_1[0x107],&local_20);
  if ((char)param_1[0x244] == '\x01') {
    fVar9 = ALBW_AS_F32(param_1[0xf7]);
    bVar8 = false;
    if (fVar9 == DAT_00674a48) {
      bVar8 = ALBW_AS_F32(param_1[0xf9]) == DAT_00674a48;
    }
    if ((bVar8) ||
       ((fVar9 * fVar9 + ALBW_AS_F32(param_1[0xf9]) * ALBW_AS_F32(param_1[0xf9])) * DAT_00674a4c <=
        (ALBW_AS_F32(param_1[0xf4]) - ALBW_AS_F32(param_1[0xda])) *
        (ALBW_AS_F32(param_1[0xf4]) - ALBW_AS_F32(param_1[0xda])) +
        (ALBW_AS_F32(param_1[0xf6]) - ALBW_AS_F32(param_1[0xdc])) *
        (ALBW_AS_F32(param_1[0xf6]) - ALBW_AS_F32(param_1[0xdc])))) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    *(undefined1 *)(param_1 + 0x264) = uVar1;
  }
  return;
}

