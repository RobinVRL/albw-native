#include "ghidra_types.h"

extern int func_00184440(void);
extern int func_00184538(int param_1);
extern int func_001846B0(int param_1,undefined4 *param_2,undefined4 param_3,uint param_4,float fparam_0);
extern int func_00184B1C(int param_1,float *param_2);
extern int func_004BFE7C(int param_1,float *param_2,int *param_3,uint *param_4,uint param_5,float fparam_0);
extern int func_004C0350(int param_1);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_00611198(int param_1,int param_2,undefined1 param_3);
extern undefined *DAT_00183cb8;
extern int *DAT_00183cbc;
extern float DAT_00183cc0;
extern int *DAT_00183cc4;
extern float DAT_00183cc8;

// USA 00183AE8 <- EU 00183AE8 (Ghidra, non-matching)
// GLOBAL DAT_00183cb8 undefined *
// GLOBAL DAT_00183cbc int *
// GLOBAL DAT_00183cc0 float
// GLOBAL DAT_00183cc4 int *
// GLOBAL DAT_00183cc8 float

undefined4 func_00183AE8(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  float *pfVar7;
  int *piVar8;
  code *pcVar9;
  
  if ((char)param_1[0x272] != '\0') {
    *(undefined1 *)(param_1 + 0x272) = 0;
    param_1[0x26e] = -0x80000000;
  }
  if (param_1[0x1f0] == 0) {
    piVar8 = (int *)0xffffffff;
    pcVar9 = *(code **)(*param_1 + 0xac);
    if (param_1[0xfa] == param_1[9]) {
      (*pcVar9)(param_1,0);
      if ((short)param_1[0x271] == 0) goto LAB_00183bd8;
      *(short *)(param_1 + 0x271) = (short)param_1[0x271] + -1;
    }
    else {
      (*pcVar9)(param_1,2);
      piVar8 = DAT_00183cbc;
      pcVar9 = DAT_00183cb8;
      func_0051D2F4(param_1 + 0xfa,param_1[9],(int)DAT_00183cbc,(int)DAT_00183cb8,DAT_00183cc0);
    }
  }
  else {
    cVar1 = *(char *)((int)param_1 + 0x85b);
    pcVar9 = (code *)((int)param_1 + 0x85b);
    piVar8 = param_1 + 0xfa;
    iVar3 = func_004BFE7C((int)param_1,(float *)(param_1 + 0xf4),piVar8,(uint *)pcVar9,
                          param_1[0x1f0],ALBW_AS_F32(param_1[0x20d]));
    if (iVar3 == 2 || iVar3 == 4) {
      uVar4 = param_1[0x1f0];
      iVar3 = *(int *)(uVar4 + 0x28);
      if (iVar3 != 0) {
        uVar4 = *(uint *)(uVar4 + 0x20);
      }
      if (((iVar3 != 0 && (uint)(int)cVar1 < uVar4) &&
          (iVar3 = *(int *)(iVar3 + cVar1 * 4), iVar3 != 0)) && (*(int *)(iVar3 + 0x50) == 1)) {
        *(undefined1 *)(param_1 + 0x272) = 1;
LAB_00183bd8:
        return func_00611198((int)param_1,7,0);
      }
    }
    func_004C0350((int)param_1);
  }
  iVar5 = *DAT_00183cc4;
  iVar3 = 0;
  if (iVar5 != 0) {
    iVar3 = *(int *)(iVar5 + 0x44);
  }
  if (((iVar5 == 0 || iVar3 == 0) && (iVar3 = func_00184538((int)param_1), iVar3 != 0)) &&
     (iVar3 = func_00184440(), iVar3 != 0)) {
    puVar6 = (undefined4 *)func_00520FC0();
    bVar2 = func_001846B0((int)param_1,puVar6,piVar8,(uint)pcVar9,DAT_00183cc8);
    if (!bVar2) {
      if (*(char *)((int)param_1 + 0x9f9) != '\b') {
        pfVar7 = (float *)func_00520FC0();
        iVar3 = func_00184B1C((int)param_1,pfVar7);
        if (iVar3 == 0) {
          return 0;
        }
      }
      return func_00611198((int)param_1,8,0);
    }
  }
  return 0;
}

