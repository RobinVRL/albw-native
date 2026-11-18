#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_001512E8(int *param_1);
extern int func_001663BC(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5);
extern int func_00334474(int param_1,undefined4 param_2);
extern int func_0033479C(int param_1);
extern int func_004ECF6C(int param_1);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int func_00588BF0(int param_1,int param_2);
extern int DAT_00334d58;
extern int DAT_00334d5c;
extern int DAT_00334d60;
extern undefined DAT_00334d64;
extern undefined4 DAT_00334d78;
extern int *DAT_00334d7c;
extern int DAT_00334d80;
extern int *DAT_00334d84;

// USA 00334B70 <- EU 00334B4C (Ghidra, non-matching)
// GLOBAL DAT_00334d58 int
// GLOBAL DAT_00334d5c int
// GLOBAL DAT_00334d60 int
// GLOBAL DAT_00334d64 undefined
// GLOBAL DAT_00334d78 undefined4
// GLOBAL DAT_00334d7c int *
// GLOBAL DAT_00334d80 int
// GLOBAL DAT_00334d84 int *

int * func_00334B70(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  float fVar7;
  undefined8 uVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(undefined * *)(albw_frame + 0xc))
  piVar4 = func_00150E40(param_1,param_2);
  iVar5 = DAT_00334d58;
  piVar4[200] = DAT_00334d58 + 0x54;
  *piVar4 = iVar5;
  iVar5 = func_0054D964((int)piVar4,0);
  piVar4[0x103] = iVar5;
  *(undefined1 *)(piVar4 + 0x104) = 0;
  *(undefined1 *)((int)piVar4 + 0x411) = 1;
  *(undefined1 *)((int)piVar4 + 0x412) = 0;
  *(undefined1 *)((int)piVar4 + 0x413) = 0;
  *(undefined1 *)(piVar4 + 0x105) = 0;
  iVar1 = DAT_00334d60;
  piVar4[0x106] = 0;
  iVar5 = DAT_00334d5c;
  uVar8 = CONCAT44(iVar1,DAT_00334d5c);
  piVar4[0x107] = 0;
  piVar4[0x108] = iVar1;
  piVar4[0x109] = iVar5;
  piVar4[0x10a] = iVar5;
  piVar4[0x10b] = iVar5;
  piVar4[0x10c] = iVar5;
  fVar7 = func_0054DE3C(piVar4,0,1);
  piVar4[0x10d] = (int)ALBW_AS_U32(fVar7);
  *(undefined1 *)(piVar4 + 0x10e) = 3;
  piVar4[0x10f] = 0;
  puVar6 = (undefined4 *)func_0010BAB4(0x108);
  iVar5 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    local_24 = &DAT_00334d64;
    local_28 = DAT_00334d78;
    iVar5 = func_001663BC(puVar6,&local_28,piVar4[0xb3],5,1);
  }
  piVar2 = DAT_00334d7c;
  piVar4[0x110] = iVar5;
  iVar5 = piVar2[1];
  piVar4[0x113] = *piVar2;
  piVar4[0x114] = iVar5;
  piVar4[0x111] = DAT_00334d80;
  piVar4[0x112] = (int)piVar4;
  piVar4[0x115] = (int)((ulonglong)uVar8 >> 0x20);
  piVar4[0x116] = 0;
  piVar4[0x117] = 0;
  piVar4[0x118] = (int)uVar8;
  iVar5 = func_0054D89C((int)piVar4,0);
  piVar4[0x119] = iVar5;
  bVar3 = func_00588BF0((int)piVar4,1);
  if (bVar3) {
    *(undefined1 *)((int)piVar4 + 0x2d7) = 1;
    return piVar4;
  }
  iVar5 = func_0014E428((int)piVar4,0,0,0,1,0,0);
  piVar4[0x10f] = iVar5;
  if ((int *)piVar4[0x119] != (int *)0x0) {
    func_001512E8((int *)piVar4[0x119]);
  }
  if (*(short *)((int)piVar4 + 0x36) == 0) {
    if ((*(uint *)(*DAT_00334d84 + 0x2b4) & 8) != 0) {
      func_00334474((int)piVar4,4);
      goto LAB_00334d34;
    }
  }
  else {
    bVar3 = func_00588BF0((int)piVar4,0);
    if (!bVar3) {
      func_00334474((int)piVar4,0);
      goto LAB_00334d34;
    }
  }
  func_00334474((int)piVar4,3);
LAB_00334d34:
  func_0033479C((int)piVar4);
  func_004ECF6C((int)piVar4);
  return piVar4;
}

