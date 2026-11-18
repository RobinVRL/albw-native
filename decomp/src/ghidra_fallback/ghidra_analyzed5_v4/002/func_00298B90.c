// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_002FCBCC(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5);
extern int func_004ECF6C(int param_1);
extern int DAT_00298c3c;
extern int *DAT_00298c40;
extern undefined4 DAT_00298c44;
extern undefined4 DAT_00298c48;

// USA 00298B90 <- EU 00298B6C (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)
// GLOBAL DAT_00298c3c int
// GLOBAL DAT_00298c40 int *
// GLOBAL DAT_00298c44 undefined4
// GLOBAL DAT_00298c48 undefined4

int * func_00298B90(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  piVar2 = func_00150E40(param_1,param_2);
  piVar1 = DAT_00298c40;
  iVar4 = DAT_00298c3c + 0x54;
  *piVar2 = DAT_00298c3c;
  piVar2[200] = iVar4;
  *(undefined1 *)(piVar2 + 0x103) = 0;
  *(undefined1 *)((int)piVar2 + 0x40d) = 0;
  *(undefined1 *)((int)piVar2 + 0x40e) = 0;
  *(undefined1 *)((int)piVar2 + 0x40f) = 0;
  *(undefined1 *)(piVar2 + 0x104) = 0;
  *(undefined1 *)((int)piVar2 + 0x411) = 0;
  piVar2[0x105] = 0;
  piVar2[0x106] = 0;
  piVar2[0x107] = 0;
  piVar2[0x109] = 0;
  piVar2[0x10a] = 0;
  piVar2[0x113] = 0;
  *(undefined1 *)(piVar2 + 0x114) = 0;
  *(undefined1 *)((int)piVar2 + 0x451) = 1;
  *(undefined1 *)((int)piVar2 + 0x452) = 0;
  iVar4 = piVar1[1];
  iVar5 = piVar1[2];
  piVar2[0x116] = *piVar1;
  piVar2[0x117] = iVar4;
  piVar2[0x118] = iVar5;
  piVar2[0x119] = 0;
  puVar3 = (undefined4 *)func_0010BAB4(0x11c);
  iVar4 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    uStack_14 = DAT_00298c44;
    uStack_18 = DAT_00298c48;
    iVar4 = func_002FCBCC(puVar3,&uStack_18,piVar2[0xb3],0,1);
  }
  piVar2[0x105] = iVar4;
  func_004ECF6C((int)piVar2);
  return piVar2;
}

