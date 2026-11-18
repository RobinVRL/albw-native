#include "ghidra_types.h"

extern int func_0010E0E0(int *param_1);
extern int func_0010E15C(int *param_1);
extern int func_004A1520();
extern int func_005FF9AC(int param_1,int param_2);
extern undefined4 DAT_002feb4c;
extern undefined4 *DAT_002feb50;

// USA 002FEAFC <- EU 002FEAD8 (Ghidra, non-matching)
// GLOBAL DAT_002feb4c undefined4
// GLOBAL DAT_002feb50 undefined4 *

undefined4 func_002FEAFC(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  *param_1 = DAT_002feb4c;
  puVar1 = DAT_002feb50;
  local_18 = param_4;
  if (*(char *)((int)param_1 + 0x45) != '\0') {
    func_0010E0E0((int *)*DAT_002feb50);
    iVar2 = 0;
    *(undefined1 *)((int)param_1 + 0x45) = 0;
    do {
      local_18 = param_1[iVar2 + 10];
      func_005FF9AC(1,(int)&local_18);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 2);
    func_0010E15C((int *)*puVar1);
  }
  return func_004A1520(param_1);
}

