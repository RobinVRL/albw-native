#include "ghidra_types.h"

extern int func_00101DC4(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int DAT_001023dc;
extern int *DAT_001023e0;

// USA 00102304 <- EU 00102304 (Ghidra, non-matching)
// GLOBAL DAT_001023dc int
// GLOBAL DAT_001023e0 int *

int func_00102304(uint param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 ((int *)(albw_frame + 0x8))
  piVar1 = DAT_001023e0;
  iVar3 = DAT_001023dc;
  if ((param_1 & 0xfff) == 0) {
    uVar2 = DAT_001023e0[1];
    if (uVar2 < param_1) {
      if ((uVar2 == 0) || (((uVar2 | param_1) & 0xfffff) == 0)) {
        if (uVar2 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *DAT_001023e0 + uVar2;
        }
        iVar3 = func_00101DC4(local_18,iVar3,0x10003);
        if (-1 < iVar3) {
          if (piVar1[1] == 0) {
            *piVar1 = local_18[0];
          }
          goto LAB_00102398;
        }
      }
    }
    else {
      iVar3 = func_00101DC4(local_18,*DAT_001023e0 + param_1,1);
      if (-1 < iVar3) {
        if (param_1 == 0) {
          *piVar1 = 0;
        }
LAB_00102398:
        piVar1[1] = param_1;
        return iVar3;
      }
    }
  }
  return iVar3;
}

