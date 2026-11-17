/* compilefix: func_002233FC, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/002/func_002233FC.c) with `this` restored in 1
 * member-function-pointer call(s) by tools/pmf_this_fix.py (BOOT_LOG 140): this = BASE + (adj >> 1).
 * Further arguments of those calls are as Ghidra printed them. */
#include "ghidra_types.h"

extern float func_00115DC8(float *param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004D80EC(float *param_1,float *param_2,int param_3);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F86FC(int param_1,undefined1 param_2,float fparam_0);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern int func_004FB0D8(int param_1,float *param_2);
extern int func_0051D27C(int *param_1,int param_2,int param_3);
extern int func_00520FC0(void);
extern int func_00521018(int param_1);
extern int func_0058A1F4(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern int func_0058E2B8(int *param_1);
extern int func_0065E630(undefined4 *param_1,undefined1 param_2);
extern float DAT_00223624;
extern float DAT_00223628;
extern int DAT_0022362c;
extern int DAT_00223630;
extern float DAT_00223634;

// USA 002233FC <- EU 002233FC (Ghidra, non-matching)
// GLOBAL DAT_00223624 float
// GLOBAL DAT_00223628 float
// GLOBAL DAT_0022362c int
// GLOBAL DAT_00223630 int
// GLOBAL DAT_00223634 float

undefined4 func_002233FC(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint in_r3;
  float *pfVar9;
  int *piVar10;
  uint in_fpscr;
  float fVar11;
  undefined8 uVar12;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(uint *)(albw_frame + 0x8))
  local_18 = in_r3;
  iVar2 = func_004F70A8(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  piVar10 = param_1 + 0x22f;
  if (((char)param_1[0x230] != '\x03' && (char)param_1[0x230] != '\x04') &&
     (iVar2 = func_004F8998(param_1,0,(char *)0x0), iVar2 != 0)) {
    func_0065E630(piVar10,3);
  }
  pfVar9 = (float *)param_1[0x234];
  piVar8 = (int *)(param_1[0x236] + (char)param_1[0x230] * 8);
  uVar3 = *(uint *)(param_1[0x236] + (char)param_1[0x230] * 8 + 4);
  if ((uVar3 & 1) != 0) {
    piVar8 = (int *)(*piVar8 + *(int *)((int)pfVar9 + ((int)uVar3 >> 1)));
  }
  (*(int (*)(int *))(code *)*piVar8)(((int *)((int)(pfVar9) + ((int)uVar3 >> 1))));   /* this restored (pmf_this_fix) */
  iVar2 = *piVar10;
  *piVar10 = iVar2 + 1;
  if (param_1[0x233] != 0) {
    fVar11 = (float)VectorUnsignedToFloat(iVar2 + 1,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(param_1[0x233],1,fVar11);
  }
  if ((char)param_1[0x230] != '\x01') {
    fVar11 = ALBW_AS_F32(param_1[0xf8]) - DAT_00223624;
    if (ALBW_AS_F32(param_1[0xf8]) - DAT_00223624 < DAT_00223628) {
      fVar11 = DAT_00223628;
    }
    param_1[0xf8] = (int)ALBW_AS_U32(fVar11);
    func_004FB0D8((int)param_1,(float *)(param_1 + 0xf8));
  }
  func_004F48F0((int)param_1);
  iVar2 = DAT_0022362c;
  param_1[0x244] = DAT_0022362c;
  param_1[0x245] = iVar2;
  param_1[0x246] = iVar2;
  func_004F5588((int)param_1);
  bVar1 = func_00521018((int)param_1);
  if (bVar1) {
    func_00115DC8((float *)(param_1 + 0x244));
  }
  uVar3 = func_0058A1F4((int)param_1);
  if (uVar3 != 0) goto LAB_00223584;
  uVar12 = func_0058AB74((int)param_1);
  iVar2 = DAT_00223630;
  iVar4 = (int)uVar12;
  if ((iVar4 == 5 || iVar4 == 0) || (iVar4 == 1)) {
    pfVar5 = (float *)func_00520FC0();
    uVar6 = func_004D80EC((float *)(param_1 + 0xf4),pfVar5,param_1[0xfa]);
    local_18 = uVar6;
    uVar7 = func_0058E2B8((int *)&local_18);
    uVar3 = *(uint *)(iVar2 + 4);
    if (0x3fffffff < uVar7) {
      uVar6 = 0x80000000 - uVar6;
    }
    if ((uVar6 <= uVar3) || (uVar3 + 0x40000000 < uVar6)) {
      uVar7 = uVar3 + 0x80000000;
      bVar1 = uVar7 <= uVar6;
      if (bVar1) {
        uVar7 = -uVar3;
        uVar3 = uVar7;
      }
      if ((!bVar1 || uVar3 < uVar6) || uVar6 == uVar7) goto LAB_00223568;
    }
    uVar6 = uVar3;
  }
  else {
    uVar6 = 0;
  }
LAB_00223568:
  func_0051D27C(param_1 + 0x24d,uVar6,*(int *)(iVar2 + 8));
  param_1[0x23b] = param_1[0x24d];
LAB_00223584:
  func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar9);
  if ((char)param_1[0x230] != '\x01') {
    return 0;
  }
  return func_004F86FC((int)param_1,2,DAT_00223634);
}

