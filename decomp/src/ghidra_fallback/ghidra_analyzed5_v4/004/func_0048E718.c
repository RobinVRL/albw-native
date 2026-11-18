#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_0049D4A8(int param_1,undefined4 *param_2);
extern int func_0049F920(undefined4 *param_1,undefined4 param_2);
extern undefined4 DAT_0048e7a4;
extern undefined4 DAT_0048e7a8;
extern int *DAT_0048e7ac;
extern undefined4 *DAT_0048e7b0;
extern undefined4 DAT_0048e7b4;

// USA 0048E718 <- EU 0048E6F0 (Ghidra, non-matching)
// GLOBAL DAT_0048e7a4 undefined4
// GLOBAL DAT_0048e7a8 undefined4
// GLOBAL DAT_0048e7ac int *
// GLOBAL DAT_0048e7b0 undefined4 *
// GLOBAL DAT_0048e7b4 undefined4

int * func_0048E718(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x120];
  #define abStack_118 ((byte *)(albw_frame + 0x8))
  #define local_bc (*(undefined4 *)(albw_frame + 0x64))
  #define auStack_98 ((undefined4 *)(albw_frame + 0x88))
  #define local_1c (*(undefined4 *)(albw_frame + 0x104))
  #define local_18 ((undefined1 *)(albw_frame + 0x108))
  #define local_14 (*(undefined4 *)(albw_frame + 0x10c))
  local_14 = DAT_0048e7a4;
  local_18[0] = 2;
  func_0049F920((undefined4 *)abStack_118,local_18);
  iVar3 = *(int *)(param_1 + 0x1c);
  local_bc = param_2;
  func_00110D44(auStack_98,abStack_118,0x80);
  local_1c = DAT_0048e7a8;
  piVar1 = func_0049D4A8(iVar3,auStack_98);
  piVar2 = (int *)*DAT_0048e7ac;
  if ((((uint)*DAT_0048e7ac & 1) == 0) &&
     (iVar3 = func_00100174(DAT_0048e7ac), piVar2 = (int *)0x0, iVar3 != 0)) {
    *DAT_0048e7b0 = DAT_0048e7b4;
    piVar2 = DAT_0048e7ac;
  }
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)(**(code **)(*piVar1 + 8))(piVar1,DAT_0048e7b0);
  }
  return piVar2;
}

