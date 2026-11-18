#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010CC7C(undefined4 *param_1,int param_2,int param_3,int param_4);
extern int func_0010E0B8(undefined4 *param_1,undefined4 param_2);
extern int func_0010EEE0(int param_1);
extern int DAT_0010da0c;
extern int *DAT_0010da10;
extern undefined4 *DAT_0010da14;
extern undefined4 DAT_0010da18;
extern undefined4 DAT_0010da1c;
extern int *DAT_0010da20;

// USA 0010D978 <- EU 0010D978 (Ghidra, non-matching)
// GLOBAL DAT_0010da0c int
// GLOBAL DAT_0010da10 int *
// GLOBAL DAT_0010da14 undefined4 *
// GLOBAL DAT_0010da18 undefined4
// GLOBAL DAT_0010da1c undefined4
// GLOBAL DAT_0010da20 int *

undefined4 func_0010D978(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  iVar1 = DAT_0010da0c;
  func_0010C0B8(DAT_0010da0c);
  puVar3 = DAT_0010da14;
  piVar2 = DAT_0010da10;
  DAT_0010da10[1] = (int)DAT_0010da14;
  func_0010E0B8(puVar3,param_1);
  piVar2[3] = 0;
  local_14 = DAT_0010da18;
  local_18 = DAT_0010da1c;
  piVar5 = func_0010CC7C(*(undefined4 **)piVar2[1],((undefined4 *)piVar2[1])[1],(int)&local_18,0);
  piVar4 = DAT_0010da20;
  if (*DAT_0010da20 < DAT_0010da20[1]) {
    *(int **)(DAT_0010da20[2] + *DAT_0010da20 * 4) = piVar5;
    *piVar4 = *piVar4 + 1;
  }
  *piVar2 = (int)(piVar2 + 2);
  return func_0010EEE0(iVar1);
}

