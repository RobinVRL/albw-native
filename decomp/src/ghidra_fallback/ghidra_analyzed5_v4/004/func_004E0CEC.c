#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C4AF4(int param_1,int *param_2,int param_3);
extern int func_00581D60(int param_1);
extern int func_0066A650(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_004e0e04;
extern int *DAT_004e0e08;
extern int *DAT_004e0e0c;
extern uint *DAT_004e0e10;
extern undefined4 *DAT_004e0e14;
extern undefined4 DAT_004e0e18;

// USA 004E0CEC <- EU 004E0CC4 (Ghidra, non-matching)
// GLOBAL DAT_004e0e04 uint *
// GLOBAL DAT_004e0e08 int *
// GLOBAL DAT_004e0e0c int *
// GLOBAL DAT_004e0e10 uint *
// GLOBAL DAT_004e0e14 undefined4 *
// GLOBAL DAT_004e0e18 undefined4

void func_004E0CEC(undefined4 param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x2e0];
  #define local_2d8 (*(int *)(albw_frame + 0x8))
  #define local_2d4 (*(int *)(albw_frame + 0xc))
  #define local_2d0 (*(int *)(albw_frame + 0x10))
  #define local_2cc (*(int *)(albw_frame + 0x14))
  #define local_2bc (*(undefined4 *)(albw_frame + 0x24))
  #define local_2b8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_2b4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_2b0 (*(undefined2 *)(albw_frame + 0x30))
  #define local_290 (*(undefined4 *)(albw_frame + 0x50))
  #define local_28c (*(undefined4 *)(albw_frame + 0x54))
  #define local_288 (*(undefined2 *)(albw_frame + 0x58))
  #define local_18 (*(undefined4 *)(albw_frame + 0x2c8))
  local_2b8 = 0;
  local_2b4 = 0;
  local_2bc = 0;
  local_290 = 0;
  local_28c = 0;
  local_18 = 0;
  func_002DFF7C(&local_2d8);
  local_2d8 = func_0019B04C(*DAT_004e0e04);
  uVar1 = func_00581D60(*DAT_004e0e08);
  local_288 = (undefined2)uVar1;
  local_2d4 = *param_2;
  local_2d0 = param_2[1];
  local_2cc = param_2[2];
  local_2b0 = 1;
  local_2b8 = 0;
  piVar2 = func_004C4AF4(*DAT_004e0e0c,&local_2d8,0);
  if (((*DAT_004e0e10 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_004e0e10), iVar3 != 0)) {
    *DAT_004e0e14 = DAT_004e0e18;
  }
  if ((piVar2 == (int *)0x0) || (iVar3 = (**(code **)*piVar2)(piVar2,DAT_004e0e14), iVar3 == 0)) {
    piVar2 = (int *)0x0;
  }
  if (piVar2 != (int *)0x0) {
    piVar2[0x141] = *param_2;
    piVar2[0x142] = param_2[1];
    piVar2[0x143] = param_2[2];
    piVar2[0x144] = *param_3;
    piVar2[0x145] = param_3[1];
    piVar2[0x146] = param_3[2];
    func_0066A650(piVar2 + 0x135,4);
  }
  return;
}

