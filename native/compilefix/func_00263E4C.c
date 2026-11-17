/* compilefix: func_00263E4C, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/002/func_00263E4C.c) with `this` restored in 1
 * member-function-pointer call(s) by tools/pmf_this_fix.py (BOOT_LOG 140): this = BASE + (adj >> 1).
 * Further arguments of those calls are as Ghidra printed them. */
#include "ghidra_types.h"

extern int func_0015133C(int param_1,undefined4 *param_2);
extern int func_0026171C(int param_1,float *param_2,uint *param_3,float *param_4);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CF478(int param_1,int param_2);
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
extern int func_00660490(undefined4 *param_1,undefined1 param_2);
extern float fRam002640f4;
extern float fRam002640f8;
extern int *DAT_002640ec;
extern float DAT_002640f0;

// USA 00263E4C <- EU 00263E74 (Ghidra, non-matching)
// GLOBAL DAT_002640ec int *
// GLOBAL DAT_002640f0 float
// GLOBAL UNK_002640f4 float
// GLOBAL UNK_002640f8 float

void func_00263E4C(int *param_1)

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
  _Alignas(8) unsigned char albw_frame[0x40];
  #define afStack_38 ((float *)(albw_frame + 0x8))
  iVar3 = func_004F70A8(param_1);
  if (iVar3 != 0) {
    piVar6 = param_1 + 0x22f;
    if ((char)param_1[0x230] != '\a') {
      piVar7 = (int *)param_1[0x10e];
      if ((*piVar7 != 0) && (iVar3 = func_005568E8(*DAT_002640ec), *piVar7 != iVar3)) {
        *(undefined1 *)(param_1 + 0x280) = 1;
      }
      iVar3 = func_004F8998(param_1,0,(char *)0x0);
      if (iVar3 != 0) {
        func_00660490(piVar6,7);
      }
    }
    pfVar5 = (float *)param_1[0x234];
    piVar7 = (int *)(param_1[0x236] + (char)param_1[0x230] * 8);
    uVar4 = *(uint *)(param_1[0x236] + (char)param_1[0x230] * 8 + 4);
    if ((uVar4 & 1) != 0) {
      piVar7 = (int *)(*piVar7 + *(int *)((int)pfVar5 + ((int)uVar4 >> 1)));
    }
    (*(int (*)(int *))(code *)*piVar7)(((int *)((int)(pfVar5) + ((int)uVar4 >> 1))));   /* this restored (pmf_this_fix) */
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
        if (cVar1 != '\a') {
          if ((10 < param_1[0x282]) && (cVar1 != '\0' && cVar1 != '\b')) {
            func_00660490(piVar6,0);
          }
          param_1[0x282] = param_1[0x282] + 1;
          fVar8 = func_004F898C();
          in_fpscr = in_fpscr & 0xfffffff |
                     (uint)(DAT_002640f0 <= ALBW_AS_F32(param_1[0xf8]) - fVar8) << 0x1d;
          fVar8 = ALBW_AS_F32(param_1[0xf8]) - fVar8;
          if (!SUB41(in_fpscr >> 0x1d,0)) {
            fVar8 = DAT_002640f0;
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
    iVar3 = param_1[0x291];
    if (iVar3 != 0) {
      if (((char)param_1[0x230] == '\x06' || (char)param_1[0x230] == '\v') &&
         (param_1[0x22f] < 0x23)) {
        func_004CF478(*(int *)(iVar3 + 0x18),1);
        fVar8 = fRam002640f4;
        if (param_1[0x22f] < 0x14) {
          fVar8 = (float)VectorSignedToFloat(param_1[0x22f],(byte)(in_fpscr >> 0x15) & 3);
          fVar8 = fVar8 * fRam002640f8;
        }
        iVar3 = *(int *)(param_1[0x291] + 0x18);
        *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
        *(float *)(iVar3 + 0x74) = fVar8;
        *(float *)(iVar3 + 0x78) = fVar8;
        *(float *)(iVar3 + 0x7c) = fVar8;
      }
      else {
        func_004CF478(*(int *)(iVar3 + 0x18),0);
      }
      func_0026171C(param_1[0x291],(float *)0x0,(uint *)0x0,(float *)0x0);
    }
  }
  return;
}

