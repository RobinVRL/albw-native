#include "ghidra_types.h"

extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F86FC(int param_1,undefined1 param_2,float fparam_0);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern float func_0058A404(int param_1);
extern int func_00666318(undefined4 *param_1,undefined1 param_2);
extern int DAT_0035699c;
extern int DAT_003569a0;
extern float DAT_003569a4;
extern int DAT_003569a8;
extern int DAT_003569ac;
extern int DAT_003569bc;
extern float DAT_003569c0;
extern char s_SE_EN_FAINT_003569b0[];

// USA 00356760 <- EU 0035673C (Ghidra, non-matching)
// GLOBAL DAT_0035699c int
// GLOBAL DAT_003569a0 int
// GLOBAL DAT_003569a4 float
// GLOBAL DAT_003569a8 int
// GLOBAL DAT_003569ac int
// GLOBAL DAT_003569bc int
// GLOBAL DAT_003569c0 float
// GLOBAL s_SE_EN_FAINT_003569b0 string

undefined4 func_00356760(int *param_1)

{
  char cVar1;
  short sVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  float *pfVar9;
  int *piVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  if (*(char *)((int)param_1 + 0x859) == '\0') {
    fVar11 = func_0058A404((int)param_1);
    if (DAT_0035699c < (int)ALBW_AS_U32(fVar11)) goto LAB_003567c0;
    sVar2 = (short)param_1[0x142];
    uVar4 = 1;
  }
  else {
    if ((*(char *)((int)param_1 + 0x859) != '\x01') ||
       (fVar11 = func_0058A404((int)param_1), DAT_003569a0 < (int)ALBW_AS_U32(fVar11))) goto LAB_003567c0;
    sVar2 = (short)param_1[0x142];
    uVar4 = 2;
  }
  if (sVar2 < 1) {
    uVar4 = 0;
  }
  *(undefined1 *)((int)param_1 + 0x859) = uVar4;
LAB_003567c0:
  iVar5 = func_004F70A8(param_1);
  if (iVar5 != 0) {
    cVar1 = (char)param_1[0x298];
    piVar10 = param_1 + 0x297;
    if (((cVar1 != '\x04' && cVar1 != '\n') && (cVar1 != '\x05' && cVar1 != '\t')) &&
       (iVar5 = func_004F8998(param_1,0,(char *)0x0), iVar5 != 0)) {
      func_00666318(piVar10,4);
    }
    pfVar9 = (float *)param_1[0x29c];
    piVar6 = (int *)(param_1[0x29e] + (char)param_1[0x298] * 8);
    uVar7 = *(uint *)(param_1[0x29e] + (char)param_1[0x298] * 8 + 4);
    piVar8 = (int *)((int)pfVar9 + ((int)uVar7 >> 1));
    if ((uVar7 & 1) != 0) {
      piVar6 = (int *)(*piVar6 + *piVar8);
    }
    (*(code *)*piVar6)(piVar8);
    iVar5 = *piVar10;
    *piVar10 = iVar5 + 1;
    if (param_1[0x29b] != 0) {
      fVar11 = (float)VectorUnsignedToFloat(iVar5 + 1,(byte)(in_fpscr >> 0x15) & 3);
      func_00352210(param_1[0x29b],1,fVar11);
    }
    fVar11 = DAT_003569a4;
    if ((uint)param_1[0x28d] < (uint)param_1[0x28e]) {
      param_1[0x28d] = param_1[0x28d] + 1;
    }
    fVar12 = ALBW_AS_F32(param_1[0xf8]) - ALBW_AS_F32(param_1[0x277]);
    if (ALBW_AS_F32(param_1[0xf8]) - ALBW_AS_F32(param_1[0x277]) < fVar11) {
      fVar12 = fVar11;
    }
    param_1[0xf8] = (int)ALBW_AS_U32(fVar12);
    iVar5 = DAT_003569a8;
    param_1[0x2dd] = DAT_003569a8;
    param_1[0x2de] = iVar5;
    param_1[0x2df] = iVar5;
    cVar1 = (char)param_1[0x298];
    if (cVar1 == '\b' || cVar1 == '\x04') {
      if ((cVar1 == '\b') && (*(short *)(DAT_003569ac + (int)param_1) == 2)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if ((param_1[0x2a0] != 0) && (!bVar3)) {
        local_14 = s_SE_EN_FAINT_003569b0;
        local_18 = DAT_003569bc;
        func_001507D8((int)param_1,&local_18,0);
      }
    }
    func_004F48F0((int)param_1);
    func_004F5588((int)param_1);
    func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar9);
    if ((char)param_1[0x298] != '\0' && (char)param_1[0x298] != '\x03') {
      return func_004F86FC((int)param_1,2,DAT_003569c0);
    }
  }
  return 0;
}

