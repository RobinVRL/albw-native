#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004F3574(int param_1);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern float func_004F944C(void);
extern int func_004FB0D8(int param_1,float *param_2);
extern int func_00521078(int param_1);
extern int func_00588BE4(int param_1);
extern int func_0066ACA4(undefined4 *param_1,undefined1 param_2);
extern int *DAT_004f3a68;
extern float DAT_004f3a6c;
extern float DAT_004f3a70;
extern int *DAT_004f3a74;
extern uint DAT_004f3a8c;
extern char s_SE_FireGimos_FRAME_004f3a78[];

// USA 004F37A8 <- EU 004F3780 (Ghidra, non-matching)
// GLOBAL DAT_004f3a68 int *
// GLOBAL DAT_004f3a6c float
// GLOBAL DAT_004f3a70 float
// GLOBAL DAT_004f3a74 int *
// GLOBAL DAT_004f3a8c uint
// GLOBAL s_SE_FireGimos_FRAME_004f3a78 string

/* WARNING: Variable defined which should be unmapped: objStack_18 */

void func_004F37A8(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  float *pfVar7;
  int *piVar8;
  uint in_fpscr;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define objStack_18 ((uint *)(albw_frame + 0x8))
  iVar2 = (short)param_1[0x246] + -1;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  *(short *)(param_1 + 0x246) = (short)iVar2;
  iVar2 = func_004F70A8(param_1);
  if (iVar2 != 0) {
    if (*(char *)(param_1[0x233] + 0x44) != '\0') {
      objStack_18[0] = 0;
      objStack_18[1] = 0;
      func_0014E2A0((int)param_1,param_1[0x230],param_1 + 0x24c,0x1600,0,0);
      iVar2 = func_00588BE4((int)param_1);
      if (iVar2 == *DAT_004f3a68) {
        objStack_18[0] = 0;
        objStack_18[1] = 0;
        func_0014E2A0((int)param_1,param_1[0x232],param_1 + 0x250,0x1000,0,0);
      }
    }
    piVar8 = param_1 + 0x235;
    if (((char)param_1[0x236] == '\x02' || (char)param_1[0x236] == '\x03') &&
       (iVar2 = func_004F8998(param_1,0,(char *)0x0), iVar2 != 0)) {
      func_0066ACA4(piVar8,7);
    }
    pfVar7 = (float *)param_1[0x23a];
    piVar3 = (int *)(param_1[0x23c] + (char)param_1[0x236] * 8);
    uVar4 = *(uint *)(param_1[0x23c] + (char)param_1[0x236] * 8 + 4);
    piVar5 = (int *)((int)pfVar7 + ((int)uVar4 >> 1));
    if ((uVar4 & 1) != 0) {
      piVar3 = (int *)(*piVar3 + *piVar5);
    }
    (*(code *)*piVar3)(piVar5);
    iVar2 = *piVar8;
    iVar6 = param_1[0x239];
    *piVar8 = iVar2 + 1;
    if (iVar6 != 0) {
      fVar9 = (float)VectorUnsignedToFloat(iVar2 + 1,(byte)(in_fpscr >> 0x15) & 3);
      func_00352210(iVar6,1,fVar9);
    }
    fVar9 = DAT_004f3a6c;
    if ((ALBW_AS_F32(param_1[0x244]) <= ALBW_AS_F32(param_1[0xf5])) &&
       (bVar1 = func_00521078((int)param_1), fVar9 = DAT_004f3a6c, bVar1)) {
      fVar9 = func_004F944C();
    }
    param_1[0x243] = (int)ALBW_AS_U32(fVar9);
    fVar9 = ALBW_AS_F32(param_1[0xf8]) - ALBW_AS_F32(param_1[0x241]);
    if (ALBW_AS_F32(param_1[0xf8]) - ALBW_AS_F32(param_1[0x241]) < ALBW_AS_F32(param_1[0x243])) {
      fVar9 = ALBW_AS_F32(param_1[0x243]);
    }
    param_1[0xf8] = (int)ALBW_AS_U32(fVar9);
    fVar9 = ALBW_AS_F32(param_1[0x245]) - ALBW_AS_F32(param_1[0x241]);
    if (ALBW_AS_F32(param_1[0x245]) - ALBW_AS_F32(param_1[0x241]) < ALBW_AS_F32(param_1[0x243])) {
      fVar9 = ALBW_AS_F32(param_1[0x243]);
    }
    param_1[0x245] = (int)ALBW_AS_U32(fVar9);
    param_1[0x244] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0x244]) + fVar9));
    func_004FB0D8((int)param_1,(float *)(param_1 + 0xf8));
    fVar9 = ALBW_AS_F32(param_1[0x244]) - ALBW_AS_F32(param_1[0xf5]);
    if (ALBW_AS_F32(param_1[0x244]) - ALBW_AS_F32(param_1[0xf5]) < DAT_004f3a70) {
      fVar9 = DAT_004f3a70;
    }
    param_1[0x15d] = (int)ALBW_AS_U32(fVar9);
    func_004F48F0((int)param_1);
    iVar2 = func_00588BE4((int)param_1);
    if (iVar2 == *DAT_004f3a74) {
      func_00169A80((int *)param_1[0x22f],*DAT_004f3a74,iVar6,(int *)pfVar7);
      func_00168E9C((int *)param_1[0x22f],param_1[0x103],(int *)0x0);
    }
    func_004F3574((int)param_1);
    func_004F5588((int)param_1);
    func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar7);
    iVar2 = param_1[0x23f];
    if (((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == param_1[0x240])) &&
       (((*(uint *)(iVar2 + 0x3c) & 4) != 0 || (*(uint *)(iVar2 + 0x3c) & 0x40) != 0 ||
        (((iVar6 = *(int *)(iVar2 + 0x20), iVar6 != 0 &&
          (*(int *)(iVar2 + 0x24) == *(int *)(iVar6 + 0xc))) && (0 < *(int *)(iVar6 + 4))))))) {
      objStack_18[1] = (uint)s_SE_FireGimos_FRAME_004f3a78;
      objStack_18[0] = DAT_004f3a8c;
      func_001507D8((int)param_1,(int *)objStack_18,0);
    }
  }
  return;
}

