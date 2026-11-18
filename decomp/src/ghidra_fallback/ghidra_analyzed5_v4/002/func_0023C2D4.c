#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_0023BC00(int param_1);
extern int func_004356B4(int *param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern int iRam0023c4d8;
extern int iRam0023c4dc;
extern undefined4 uRam0023c4e0;
extern int DAT_0023c4c0;
extern int *DAT_0023c4c4;
extern int DAT_0023c4c8;
extern int *DAT_0023c4cc;
extern int DAT_0023c4d0;
extern int DAT_0023c4d4;

// USA 0023C2D4 <- EU 0023C2D4 (Ghidra, non-matching)
// GLOBAL DAT_0023c4c0 int
// GLOBAL DAT_0023c4c4 int *
// GLOBAL DAT_0023c4c8 int
// GLOBAL DAT_0023c4cc int *
// GLOBAL DAT_0023c4d0 int
// GLOBAL DAT_0023c4d4 int
// GLOBAL UNK_0023c4d8 int
// GLOBAL UNK_0023c4dc int
// GLOBAL UNK_0023c4e0 undefined4

int * func_0023C2D4(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define auStack_2c ((uint *)(albw_frame + 0x4))
  piVar2 = func_00150E40(param_1,param_2);
  piVar3 = DAT_0023c4c4;
  iVar7 = DAT_0023c4c0;
  piVar2[200] = DAT_0023c4c0 + 0x54;
  *piVar2 = iVar7;
  piVar2[0x103] = 0;
  piVar2[0x104] = 0;
  iVar7 = DAT_0023c4c8;
  iVar5 = *piVar3;
  iVar6 = piVar3[1];
  piVar2[0x106] = (int)piVar2;
  piVar2[0x105] = iVar7;
  piVar2[0x107] = iVar5;
  piVar2[0x108] = iVar6;
  piVar2[0x109] = 0;
  piVar2[0x10b] = 0;
  iVar5 = func_0054D89C((int)piVar2,0);
  piVar2[0x10c] = iVar5;
  *(undefined1 *)(piVar2 + 0x10d) = 0;
  *(undefined1 *)((int)piVar2 + 0x435) = 0;
  *(undefined1 *)((int)piVar2 + 0x436) = 0;
  *(undefined1 *)((int)piVar2 + 0x437) = 0;
  piVar2[0x10e] = 0;
  piVar1 = DAT_0023c4cc;
  piVar2[0x10f] = 0;
  piVar2[0x110] = 0;
  piVar2[0x111] = 0;
  piVar2[0x112] = 0;
  iVar5 = DAT_0023c4d0;
  piVar2[0x113] = *piVar1;
  iVar6 = DAT_0023c4d4;
  piVar2[0x114] = piVar1[1];
  piVar2[0x115] = iVar7;
  piVar2[0x119] = iVar5;
  piVar2[0x11a] = iVar6;
  piVar2[0x11b] = iVar5;
  piVar2[0xfb] = (int)(piVar2 + 0x115);
  piVar2[0x11c] = 0;
  iVar7 = piVar3[2];
  iVar6 = piVar3[3];
  piVar2[0x116] = (int)piVar2;
  piVar2[0x117] = iVar7;
  piVar2[0x118] = iVar6;
  iVar7 = func_0014E428((int)piVar2,1,0,0,1,0,0);
  piVar2[0x10b] = iVar7;
  func_00151148(piVar2[0x10c],1);
  bVar8 = *(short *)((int)param_2 + 0x2a) == 1;
  *(bool *)((int)piVar2 + 0x437) = bVar8;
  iVar7 = iRam0023c4d8;
  if (!bVar8) {
    iVar7 = iRam0023c4dc;
  }
  piVar2[0xf7] = iVar5;
  piVar2[0xf8] = iVar5;
  piVar2[0xf9] = iVar7;
  piVar3 = (int *)func_0054D964((int)piVar2,0);
  *(undefined2 *)(piVar3 + 10) = 0xe0;
  iVar7 = piVar2[0xf5];
  iVar5 = piVar2[0xf6];
  piVar3[1] = piVar2[0xf4];
  piVar3[2] = iVar7;
  piVar3[3] = iVar5;
  func_004356B4(piVar3);
  piVar2[0x104] = (int)piVar3;
  puVar4 = (undefined4 *)func_0010BAB4(100);
  iVar7 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    iVar7 = func_004EE484(puVar4);
  }
  piVar2[0x103] = iVar7;
  auStack_2c[0] = piVar2[0xb3];
  func_0014EB8C(iVar7,piVar2[0x104],(undefined2 *)piVar2[0xe8],auStack_2c,(short)piVar2[0x15],
                piVar2 + 0x105,(short)uRam0023c4e0);
  *(undefined1 *)(piVar2[0x103] + 0x61) = 1;
  func_0023BC00((int)piVar2);
  return piVar2;
}

