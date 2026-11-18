#include "ghidra_types.h"

extern int func_0015133C(int param_1,undefined4 *param_2);
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
extern int func_0065E254(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0021e0b4;
extern float DAT_0021e0b8;

// USA 0021DED4 <- EU 0021DED4 (Ghidra, non-matching)
// GLOBAL DAT_0021e0b4 int *
// GLOBAL DAT_0021e0b8 float

void func_0021DED4(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  int *piVar6;
  int *piVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define afStack_38 ((float *)(albw_frame + 0x8))
  iVar3 = func_004F70A8(param_1);
  if (iVar3 != 0) {
    piVar6 = param_1 + 0x22f;
    if ((char)param_1[0x230] != '\x06') {
      piVar7 = (int *)param_1[0x10e];
      if ((*piVar7 != 0) && (iVar3 = func_005568E8(*DAT_0021e0b4), *piVar7 != iVar3)) {
        *(undefined1 *)(param_1 + 0x280) = 1;
      }
      iVar3 = func_004F8998(param_1,0,(char *)0x0);
      if (iVar3 != 0) {
        func_0065E254(piVar6,6);
      }
    }
    pfVar5 = (float *)param_1[0x234];
    piVar7 = (int *)(param_1[0x236] + (char)param_1[0x230] * 8);
    uVar4 = *(uint *)(param_1[0x236] + (char)param_1[0x230] * 8 + 4);
    if ((uVar4 & 1) != 0) {
      piVar7 = (int *)(*piVar7 + *(int *)((int)pfVar5 + ((int)uVar4 >> 1)));
    }
    (*(code *)*piVar7)();
    iVar3 = *piVar6;
    *piVar6 = iVar3 + 1;
    if (param_1[0x233] != 0) {
      fVar8 = (float)VectorUnsignedToFloat(iVar3 + 1,(byte)(in_fpscr >> 0x15) & 3);
      func_00352210(param_1[0x233],1,fVar8);
    }
    iVar3 = func_00520EE4((int)param_1);
    if (iVar3 == 0) {
      bVar2 = func_00521078((int)param_1);
      if (bVar2) {
        param_1[0x282] = 0;
        fVar8 = func_004F944C();
        param_1[0xf8] = (int)ALBW_AS_U32(fVar8);
      }
      else {
        cVar1 = (char)param_1[0x230];
        if ((cVar1 != '\x06') && (cVar1 != '\x04')) {
          if ((10 < param_1[0x282]) && (cVar1 != '\0' && cVar1 != '\a')) {
            func_0065E254(piVar6,0);
          }
          param_1[0x282] = param_1[0x282] + 1;
          fVar9 = func_004F898C();
          fVar8 = ALBW_AS_F32(param_1[0xf8]) - fVar9;
          if (ALBW_AS_F32(param_1[0xf8]) - fVar9 < DAT_0021e0b8) {
            fVar8 = DAT_0021e0b8;
          }
          param_1[0xf8] = (int)ALBW_AS_U32(fVar8);
        }
      }
    }
    func_004F48F0((int)param_1);
    func_004F5588((int)param_1);
    func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar5);
    func_00491624(afStack_38,0,param_1[0xfa],0);
    func_0015133C(param_1[0x107],afStack_38);
  }
  return;
}

