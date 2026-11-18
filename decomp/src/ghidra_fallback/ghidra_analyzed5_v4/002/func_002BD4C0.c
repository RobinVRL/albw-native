#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern int func_0014DBF4(int *param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_002917A4(int param_1,float *param_2,undefined4 param_3,float fparam_0);
extern int func_00291A38(int param_1,float *param_2,float fparam_0);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004F9FC4(int param_1,int param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FBA3C(int param_1,undefined4 param_2,int param_3);
extern int func_004FC244(int *param_1,int *param_2,int param_3,undefined4 param_4,int param_5);
extern int iRam002bd838;
extern undefined4 DAT_002bd7dc;
extern int DAT_002bd7e0;
extern float DAT_002bd7f8;
extern int *DAT_002bd7fc;
extern char s_BreakRed_002bd7ec[];
extern char s_Break_002bd7e4[];

// USA 002BD4C0 <- EU 002BD49C (Ghidra, non-matching)
// GLOBAL DAT_002bd7dc undefined4
// GLOBAL DAT_002bd7e0 int
// GLOBAL DAT_002bd7f8 float
// GLOBAL DAT_002bd7fc int *
// GLOBAL UNK_002bd838 int
// GLOBAL s_BreakRed_002bd7ec string
// GLOBAL s_Break_002bd7e4 string

uint func_002BD4C0(int *param_1,uint param_2,int param_3)

{
  _Alignas(8) unsigned char albw_frame[0x30]; /* entry_sp - 0x30 .. entry_sp + 0x0 */
#define stack0xffffffd8 (*(undefined4 *)(albw_frame + 0x8))
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  
  cVar1 = *(char *)(param_3 + 0x24);
  if (param_2 == 3) {
    return 0;
  }
  if (param_2 == 0xb) {
    return 0x10;
  }
  if (cVar1 != '\t') {
    if ((char)param_1[599] != '\0') {
      if (0 < *(short *)(DAT_002bd7e0 + (int)param_1)) {
        uVar2 = param_2 & 0xff;
        bVar9 = 0x1d < uVar2;
        bVar8 = uVar2 == 0x1e;
        if (!bVar8) {
          uVar2 = uVar2 - 0xe;
          bVar9 = 2 < uVar2;
        }
        if ((!bVar9 || (bVar8 || uVar2 == 3)) || (param_2 == 0x1d || cVar1 == '\x02')) {
          func_004FC244(param_1,(int *)param_1[0x10f],0xc,0,1);
          func_004FABDC((int)param_1,0xd,0xffffffff,0);
          iVar4 = iRam002bd838;
          param_1[0xf7] = iRam002bd838;
          param_1[0xf9] = iVar4;
          return 0xe;
        }
      }
      param_1[0x168] = param_1[0x168] | 0x80;
      return param_2;
    }
    func_004F9FC4((int)param_1,param_1[0x10f]);
    func_004FBA3C((int)param_1,(int)*(char *)(param_3 + 0x24),(int)*(char *)(param_3 + 0x25));
    if (cVar1 == '\x05') {
      iVar4 = func_002917A4(*DAT_002bd7fc,param_1 + 0xf4,0,DAT_002bd7f8);
    }
    else {
      if (cVar1 != '\b') {
        if (cVar1 == '\x0e') {
          func_0014DBF4(param_1,(int *)&stack0xffffffd8,param_1 + 0xf4,0);
        }
        goto LAB_002bd780;
      }
      iVar4 = func_00291A38(*DAT_002bd7fc,param_1 + 0xf4,DAT_002bd7f8);
    }
    if (iVar4 != 0) {
      func_0014DBF4(param_1,(int *)&stack0xffffffd8,param_1 + 0xf4,0);
    }
LAB_002bd780:
    param_1[0x252] = 0x20;
    return 0;
  }
  if (param_1[0x1e7] == 0) {
    return 0;
  }
  cVar1 = (char)param_1[0x230];
  if (cVar1 == '\x02' || cVar1 == '\x05') {
    iVar4 = param_1[0xd1];
    pcVar5 = s_Break_002bd7e4;
  }
  else {
    if (cVar1 != '\x03' && cVar1 != '\x04') goto LAB_002bd584;
    iVar4 = param_1[0xd1];
    pcVar5 = s_BreakRed_002bd7ec;
  }
  if (iVar4 != 0) {
    func_004A1B9C((int *)&stack0xffffffd8,iVar4,(uint *)pcVar5);
  }
LAB_002bd584:
  iVar4 = (int)(char)param_1[0x230];
  if (iVar4 != 6) {
    if (iVar4 != -1) {
      iVar7 = param_1[0x237];
      pcVar6 = *(code **)(iVar7 + iVar4 * 8);
      if ((pcVar6 != (code *)0x0) ||
         (uVar2 = *(uint *)(iVar7 + iVar4 * 8 + 4), (uVar2 & 1) != 0 && uVar2 != 0)) {
        uVar2 = *(uint *)(iVar7 + iVar4 * 8 + 4);
        piVar3 = (int *)(param_1[0x234] + ((int)uVar2 >> 1));
        if ((uVar2 & 1) != 0) {
          pcVar6 = *(code **)(pcVar6 + *piVar3);
        }
        (*pcVar6)(piVar3,6);
      }
    }
    iVar4 = param_1[0x230];
    *(undefined1 *)(param_1 + 0x230) = 6;
    param_1[0x22f] = 0;
    *(char *)((int)param_1 + 0x8c1) = (char)iVar4;
    if (param_1[0x233] != 0) {
      if ((uint)param_1[0x231] < 7) {
        piVar3 = (int *)param_1[0x232];
      }
      else {
        piVar3 = (int *)(param_1[0x232] + 0xd8);
      }
      (**(code **)(*piVar3 + 8))(piVar3);
      func_0010BEB4(param_1[0x233],(int *)&stack0xffffffd8);
    }
    iVar7 = (int)(char)param_1[0x230];
    iVar4 = param_1[0x235];
    pcVar6 = *(code **)(iVar4 + iVar7 * 8);
    if ((pcVar6 != (code *)0x0) ||
       ((uVar2 = *(uint *)(iVar4 + iVar7 * 8 + 4), (uVar2 & 1) != 0 && (uVar2 != 0)))) {
      uVar2 = *(uint *)(iVar4 + iVar7 * 8 + 4);
      if ((uVar2 & 1) != 0) {
        pcVar6 = *(code **)(pcVar6 + *(int *)(param_1[0x234] + ((int)uVar2 >> 1)));
      }
      (*pcVar6)((int)(param_1[0x234]) + ((int)uVar2 >> 1));
    }
  }
  return 0;
}

