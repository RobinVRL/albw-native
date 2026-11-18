// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0015133C(int param_1,undefined4 *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_003521F0(int param_1,undefined4 param_2);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern float func_004F898C(void);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern float func_004F944C(void);
extern int func_00520EE4(int param_1);
extern int func_00521078(int param_1);
extern int func_005568E8(int param_1);
extern int func_00556E64(int param_1);
extern int func_00663FA8(undefined4 *param_1,undefined1 param_2);
extern int *DAT_002e6638;
extern float DAT_002e663c;

// USA 002E6448 <- EU 002E6424 (Ghidra, non-matching)
// GLOBAL DAT_002e6638 int *
// GLOBAL DAT_002e663c float

void func_002E6448(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 extraout_r1;
  undefined4 uVar6;
  float *pfVar7;
  int *piVar8;
  int *piVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define afStack_40 ((float *)(albw_frame + 0x0))
  piVar5 = DAT_002e6638;
  bVar2 = func_00556E64(*DAT_002e6638);
  func_003521F0((int)(param_1 + 0xc9),(uint)bVar2);
  iVar3 = func_004F70A8(param_1);
  if (iVar3 != 0) {
    piVar8 = param_1 + 0x22f;
    if ((char)param_1[0x230] != '\x06' && (char)param_1[0x230] != '\t') {
      piVar9 = (int *)param_1[0x10e];
      if ((*piVar9 != 0) && (iVar3 = func_005568E8(*piVar5), *piVar9 != iVar3)) {
        *(undefined1 *)(param_1 + 0x280) = 1;
      }
      iVar3 = func_004F8998(param_1,0,(char *)0x0);
      if (iVar3 != 0) {
        func_00663FA8(piVar8,6);
      }
    }
    pfVar7 = (float *)param_1[0x234];
    piVar5 = (int *)(param_1[0x236] + (char)param_1[0x230] * 8);
    uVar4 = *(uint *)(param_1[0x236] + (char)param_1[0x230] * 8 + 4);
    if ((uVar4 & 1) != 0) {
      piVar5 = (int *)(*piVar5 + *(int *)((int)pfVar7 + ((int)uVar4 >> 1)));
    }
    (*(code *)*piVar5)();
    iVar3 = *piVar8;
    *piVar8 = iVar3 + 1;
    if (param_1[0x233] != 0) {
      fVar10 = (float)VectorUnsignedToFloat(iVar3 + 1,(byte)(in_fpscr >> 0x15) & 3);
      func_00352210(param_1[0x233],1,fVar10);
    }
    iVar3 = func_00520EE4((int)param_1);
    if (iVar3 == 0) {
      bVar2 = func_00521078((int)param_1);
      if (bVar2) {
        param_1[0x287] = 0;
        fVar10 = func_004F944C();
        param_1[0xf8] = (int)ALBW_AS_U32(fVar10);
      }
      else {
        cVar1 = (char)param_1[0x230];
        if (cVar1 != '\x06') {
          if ((10 < param_1[0x287]) && (cVar1 != '\0' && cVar1 != '\a')) {
            func_00663FA8(piVar8,0);
          }
          param_1[0x287] = param_1[0x287] + 1;
          fVar11 = func_004F898C();
          fVar10 = ALBW_AS_F32(param_1[0xf8]) - fVar11;
          if (ALBW_AS_F32(param_1[0xf8]) - fVar11 < DAT_002e663c) {
            fVar10 = DAT_002e663c;
          }
          param_1[0xf8] = (int)ALBW_AS_U32(fVar10);
        }
      }
    }
    func_004F48F0((int)param_1);
    func_004F5588((int)param_1);
    uVar6 = 1;
    func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x1,pfVar7);
    func_00169A80((int *)param_1[0x29f],extraout_r1,uVar6,(int *)pfVar7);
    func_00168E9C((int *)param_1[0x29f],param_1[0x103],(int *)0x1);
    func_00491624(afStack_40,0,param_1[0xfa],0);
    func_0015133C(param_1[0x107],afStack_40);
  }
  return;
}

