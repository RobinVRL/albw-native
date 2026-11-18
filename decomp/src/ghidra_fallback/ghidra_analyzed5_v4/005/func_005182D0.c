#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C4AF4(int param_1,int *param_2,int param_3);
extern uint *DAT_00518368;
extern int *DAT_0051836c;
extern int *DAT_00518370;
extern undefined4 *DAT_00518374;
extern undefined4 DAT_00518378;

// USA 005182D0 <- EU 005182A8 (Ghidra, non-matching)
// GLOBAL DAT_00518368 uint *
// GLOBAL DAT_0051836c int *
// GLOBAL DAT_00518370 int *
// GLOBAL DAT_00518374 undefined4 *
// GLOBAL DAT_00518378 undefined4

int * func_005182D0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x2d0];
  #define local_2d0 ((int *)(albw_frame + 0x0))
  #define local_2b4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_2b0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2ac (*(undefined4 *)(albw_frame + 0x24))
  #define local_288 (*(undefined4 *)(albw_frame + 0x48))
  #define local_284 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_10 (*(undefined4 *)(albw_frame + 0x2c0))
  local_2b0 = 0;
  local_2ac = 0;
  local_2b4 = 0;
  local_288 = 0;
  local_284 = 0;
  local_10 = 0;
  func_002DFF7C(local_2d0);
  local_2d0[0] = func_0019B04C(*DAT_00518368);
  piVar1 = func_004C4AF4(*DAT_0051836c,local_2d0,0);
  piVar3 = (int *)*DAT_00518370;
  if ((((uint)*DAT_00518370 & 1) == 0) &&
     (iVar2 = func_00100174(DAT_00518370), piVar3 = (int *)0x0, iVar2 != 0)) {
    *DAT_00518374 = DAT_00518378;
    piVar3 = DAT_00518370;
  }
  if ((piVar1 == (int *)0x0) ||
     (piVar3 = (int *)(**(code **)*piVar1)(piVar1,DAT_00518374), piVar3 == (int *)0x0)) {
    piVar1 = (int *)0x0;
  }
  *(int **)(param_1 + 0x14) = piVar1;
  return piVar3;
}

