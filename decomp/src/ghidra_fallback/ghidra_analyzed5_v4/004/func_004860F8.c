#include "ghidra_types.h"

extern int func_00427688(undefined4 param_1);
extern undefined8 func_00689928(int *param_1,int *param_2,uint param_3);
extern undefined4 DAT_004861a8;
extern int DAT_004861ac;
extern undefined4 DAT_004861b0;

// USA 004860F8 <- EU 004860D0 (Ghidra, non-matching)
// GLOBAL DAT_004861a8 undefined4
// GLOBAL DAT_004861ac int
// GLOBAL DAT_004861b0 undefined4

uint func_004860F8(int param_1,int *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(undefined4 *)(albw_frame + 0x4))
  uVar1 = (uint)*(char *)(param_1 + 0xe1);
  switch(uVar1) {
  case 2:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
    uVar1 = func_00427688(uVar1);
    if (uVar1 < 2) {
      local_c = DAT_004861a8;
      local_10 = DAT_004861ac;
      uVar2 = func_00689928(param_2,&local_10,0xffffffff);
      uVar1 = (uint)uVar2;
    }
    else if (2 < uVar1) goto LAB_00486164;
    break;
  case 0xc:
  case 0xd:
    uVar1 = func_00427688(uVar1);
    if (uVar1 < 3) {
      return uVar1;
    }
LAB_00486164:
    local_c = DAT_004861b0;
    local_10 = DAT_004861ac;
    uVar2 = func_00689928(param_2,&local_10,0xffffffff);
    return (uint)uVar2;
  }
  return uVar1;
}

