#include "ghidra_types.h"

extern int func_0015133C(int param_1,undefined4 *param_2);
extern int func_0026171C(int param_1,float *param_2,uint *param_3,float *param_4);
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
extern int func_00664230(undefined4 *param_1,undefined1 param_2);
extern int *DAT_002fa5b0;
extern float DAT_002fa5b4;
extern float DAT_002fa5b8;
extern float DAT_002fa5bc;
extern float DAT_002fa5c0;

// USA 002FA354 <- EU 002FA330 (Ghidra, non-matching)
// GLOBAL DAT_002fa5b0 int *
// GLOBAL DAT_002fa5b4 float
// GLOBAL DAT_002fa5b8 float
// GLOBAL DAT_002fa5bc float
// GLOBAL DAT_002fa5c0 float

void func_002FA354(int *param_1)

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
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define afStack_38 ((float *)(albw_frame + 0x8))
  iVar3 = func_004F70A8(param_1);
  if (iVar3 != 0) {
    piVar6 = param_1 + 0x22f;
    if ((char)param_1[0x230] != '\x04') {
      piVar7 = (int *)param_1[0x10e];
      if ((*piVar7 != 0) && (iVar3 = func_005568E8(*DAT_002fa5b0), *piVar7 != iVar3)) {
        *(undefined1 *)(param_1 + 0x27f) = 1;
      }
      iVar3 = func_004F8998(param_1,0,(char *)0x0);
      if (iVar3 != 0) {
        func_00664230(piVar6,4);
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
        param_1[0x281] = 0;
        fVar8 = func_004F944C();
        param_1[0xf8] = (int)ALBW_AS_U32(fVar8);
      }
      else {
        cVar1 = (char)param_1[0x230];
        if (cVar1 != '\x04') {
          if ((10 < param_1[0x281]) && (cVar1 != '\0' && cVar1 != '\x05')) {
            func_00664230(piVar6,0);
          }
          param_1[0x281] = param_1[0x281] + 1;
          fVar8 = func_004F898C();
          in_fpscr = in_fpscr & 0xfffffff |
                     (uint)(DAT_002fa5b4 <= ALBW_AS_F32(param_1[0xf8]) - fVar8) << 0x1d;
          fVar8 = ALBW_AS_F32(param_1[0xf8]) - fVar8;
          if (!SUB41(in_fpscr >> 0x1d,0)) {
            fVar8 = DAT_002fa5b4;
          }
          param_1[0xf8] = (int)ALBW_AS_U32(fVar8);
        }
      }
    }
    fVar8 = DAT_002fa5b8;
    uVar4 = param_1[0x288];
    if (uVar4 < (uint)param_1[0x289]) {
      uVar4 = uVar4 + 1;
      param_1[0x288] = uVar4;
    }
    if (uVar4 < (uint)param_1[0x289]) {
      fVar9 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      fVar9 = fVar9 * DAT_002fa5bc;
      fVar10 = DAT_002fa5c0;
      if ((DAT_002fa5c0 <= fVar9) && (fVar10 = fVar9, fVar8 < fVar9)) {
        fVar10 = fVar8;
      }
      iVar3 = *(int *)(param_1[0x283] + 0x18);
      *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
      *(float *)(iVar3 + 0x74) = fVar10;
      *(float *)(iVar3 + 0x78) = fVar10;
      *(float *)(iVar3 + 0x7c) = fVar10;
    }
    else {
      iVar3 = *(int *)(param_1[0x283] + 0x18);
      *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
      *(float *)(iVar3 + 0x74) = fVar8;
      *(float *)(iVar3 + 0x78) = fVar8;
      *(float *)(iVar3 + 0x7c) = fVar8;
    }
    func_004F48F0((int)param_1);
    func_004F5588((int)param_1);
    func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar5);
    func_00491624(afStack_38,0,param_1[0xfa],0);
    func_0015133C(param_1[0x107],afStack_38);
    func_0026171C(param_1[0x283],(float *)0x0,(uint *)0x0,(float *)0x0);
  }
  return;
}

