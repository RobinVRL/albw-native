#include "ghidra_types.h"

extern int func_001E8440(int param_1,float *param_2,float param_3);
extern int func_00329078(int param_1);
extern int func_0032A0A8(int param_1);
extern int func_0032A210(int param_1);
extern int func_0032BD84(int param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern int func_004F9458(int param_1,float *param_2);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0051E84C(int param_1,undefined4 param_2,float fparam_0,float fparam_1);
extern int func_00665670(undefined4 *param_1,undefined1 param_2);
extern int DAT_0032d500;
extern int DAT_0032d504;
extern float DAT_0032d508;
extern float DAT_0032d50c;
extern undefined4 DAT_0032d510;
extern float DAT_0032d514;
extern int *DAT_0032d518;
extern float *DAT_0032d51c;
extern int DAT_0032d520;
extern float DAT_0032d524;
extern int *DAT_0032d528;
extern int DAT_0032d52c;

// USA 0032D154 <- EU 0032D130 (Ghidra, non-matching)
// GLOBAL DAT_0032d500 int
// GLOBAL DAT_0032d504 int
// GLOBAL DAT_0032d508 float
// GLOBAL DAT_0032d50c float
// GLOBAL DAT_0032d510 undefined4
// GLOBAL DAT_0032d514 float
// GLOBAL DAT_0032d518 int *
// GLOBAL DAT_0032d51c float *
// GLOBAL DAT_0032d520 int
// GLOBAL DAT_0032d524 float
// GLOBAL DAT_0032d528 int *
// GLOBAL DAT_0032d52c int

void func_0032D154(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined1 uVar4;
  int iVar5;
  uint extraout_r1;
  uint uVar6;
  int *piVar7;
  code *pcVar8;
  float *pfVar9;
  int iVar10;
  bool bVar11;
  uint in_fpscr;
  float fVar12;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define fStack_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(undefined4 *)(albw_frame + 0xc))
  if ((((*(char *)((int)param_1 + 0xc95) == '\0') && (iVar1 = param_1[0x307], iVar1 != 0)) &&
      (*(int *)(iVar1 + 0x1c) == param_1[0x308])) &&
     (((*(uint *)(iVar1 + 0x3c) & 4) != 0 || (*(uint *)(iVar1 + 0x3c) & 0x40) != 0 ||
      (((iVar5 = *(int *)(iVar1 + 0x20), iVar5 != 0 &&
        (*(int *)(iVar1 + 0x24) == *(int *)(iVar5 + 0xc))) && (0 < *(int *)(iVar5 + 4))))))) {
    iVar5 = *(int *)(iVar1 + 0x20);
    if (((iVar5 != 0) && (*(int *)(iVar1 + 0x24) == *(int *)(iVar5 + 0xc))) &&
       (0 < *(int *)(iVar5 + 4))) {
      *(undefined1 *)(iVar5 + 0x280) = 1;
    }
    *(uint *)(iVar1 + 0x3c) = *(uint *)(iVar1 + 0x3c) & 0xfffffffb | 8;
  }
  if (param_1[0x323] != 0) {
    param_1[0x323] = param_1[0x323] + -1;
  }
  *(undefined1 *)((int)param_1 + 0xc95) = 0;
  iVar1 = func_004F70A8(param_1);
  if (iVar1 != 0) {
    piVar3 = param_1 + 0x2ea;
    if ((((char)param_1[0x2eb] == '\r' || (char)param_1[0x2eb] == '\x0e') &&
        ((param_1[0x167] & 0x80U) != 0)) &&
       (iVar1 = func_004F8998(param_1,0,(char *)0x0), iVar1 != 0)) {
      func_00665670(piVar3,0x13);
    }
    piVar2 = (int *)(param_1[0x2f1] + (char)param_1[0x2eb] * 8);
    uVar6 = *(uint *)(param_1[0x2f1] + (char)param_1[0x2eb] * 8 + 4);
    piVar7 = (int *)(param_1[0x2ef] + ((int)uVar6 >> 1));
    if ((uVar6 & 1) != 0) {
      piVar2 = (int *)(*piVar2 + *piVar7);
    }
    (*(code *)*piVar2)(piVar7);
    iVar1 = *piVar3;
    *piVar3 = iVar1 + 1;
    if (param_1[0x2ee] != 0) {
      fVar12 = (float)VectorUnsignedToFloat(iVar1 + 1,(byte)(in_fpscr >> 0x15) & 3);
      func_00352210(param_1[0x2ee],1,fVar12);
    }
    param_1[0x263] = 0;
    iVar1 = DAT_0032d500;
    iVar5 = DAT_0032d500 + (uint)*(byte *)(param_1 + 0x23e) * 0x18;
    iVar10 = param_1[0x231];
    fVar12 = DAT_0032d508;
    func_0051D2F4(param_1 + 0x253,param_1[0x254],DAT_0032d504,0x7fffffff,DAT_0032d508);
    pcVar8 = *(code **)(iVar5 + 8);
    if ((pcVar8 != (code *)0x0) ||
       (((*(uint *)(iVar5 + 0xc) & 1) != 0 && (*(uint *)(iVar5 + 0xc) != 0)))) {
      piVar3 = (int *)((int)param_1 + ((int)*(uint *)(iVar5 + 0xc) >> 1) + 0x8f8);
      if ((*(uint *)(iVar5 + 0xc) & 1) != 0) {
        pcVar8 = *(code **)(pcVar8 + *piVar3);
      }
      (*pcVar8)(piVar3,iVar10);
    }
    param_1[0x299] = 0;
    iVar5 = param_1[0x267];
    iVar1 = iVar1 + (uint)*(byte *)(param_1 + 0x274) * 0x18;
    pfVar9 = (float *)0x7fffffff;
    func_0051D2F4(param_1 + 0x289,param_1[0x28a],DAT_0032d504,0x7fffffff,fVar12);
    pcVar8 = *(code **)(iVar1 + 8);
    if ((pcVar8 != (code *)0x0) ||
       (((*(uint *)(iVar1 + 0xc) & 1) != 0 && (*(uint *)(iVar1 + 0xc) != 0)))) {
      piVar3 = (int *)((int)param_1 + ((int)*(uint *)(iVar1 + 0xc) >> 1) + 0x9d0);
      if ((*(uint *)(iVar1 + 0xc) & 1) != 0) {
        pcVar8 = *(code **)(pcVar8 + *piVar3);
      }
      (*pcVar8)(piVar3,iVar5);
    }
    func_004F9458((int)param_1,(float *)(param_1 + 0xf7));
    func_004F48F0((int)param_1);
    func_004F5588((int)param_1);
    if (*(char *)((int)param_1 + 0xc93) != '\0') {
      fVar12 = DAT_0032d50c;
      func_004D80A4(&fStack_38,param_1[0xfa],DAT_0032d50c);
      local_34 = DAT_0032d510;
      iVar1 = func_0051E84C(*DAT_0032d518,&fStack_38,fVar12,DAT_0032d514);
      pfVar9 = DAT_0032d51c;
      func_0051D2F4(param_1 + 0x140,iVar1,DAT_0032d520,(int)DAT_0032d51c,DAT_0032d524);
    }
    func_0032BD84((int)param_1);
    param_1[0x13e] = param_1[0x315];
    func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar9);
    func_00329078((int)param_1);
    func_0032A0A8((int)param_1);
    func_0032A210((int)param_1);
    iVar1 = *DAT_0032d528;
    bVar11 = iVar1 != 0;
    uVar6 = extraout_r1;
    if (bVar11) {
      uVar6 = (uint)*(byte *)(param_1 + 0x2eb);
    }
    if (bVar11 && uVar6 != 0) {
      iVar1 = *(int *)(iVar1 + 0x18);
    }
    if ((bVar11 && uVar6 != 0) && iVar1 != 0) {
      func_001E8440(iVar1,param_1 + 0xf4,1);
    }
    uVar6 = (uint)*(short *)(DAT_0032d52c + (int)param_1);
    if ((uint)param_1[799] < uVar6) {
      if ((uint)param_1[0x31e] < uVar6) {
        return;
      }
      uVar4 = 1;
    }
    else {
      uVar4 = 2;
    }
    if ((int)uVar6 < 1) {
      uVar4 = 0;
    }
    *(undefined1 *)((int)param_1 + 0x859) = uVar4;
  }
  return;
}

