#include "ghidra_types.h"

extern int DAT_0026eb98;

// USA 0026EA80 <- EU 0026EAA8 (Ghidra, non-matching)
// GLOBAL DAT_0026eb98 int

int func_0026EA80(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(int *)(albw_frame + 0xc))
  piVar3 = (int *)0x0;
  iVar2 = *(int *)(param_1 + 0x7c);
  local_24 = param_2;
  local_28 = DAT_0026eb98;
joined_r0x0026eacc:
  if (iVar2 != 0) {
    (**(code **)(local_28 + 8))(&local_28);
    (**(code **)(local_28 + 8))(&local_28);
    iVar1 = local_24;
    param_1 = (**(code **)(*(int *)(iVar2 + 0x10) + 8))((int *)(iVar2 + 0x10));
    iVar4 = *(int *)(iVar2 + 0x14);
    if (iVar1 != iVar4) {
      param_1 = 0;
      do {
        iVar1 = (int)*(char *)(local_24 + param_1);
        if (iVar1 == 0) {
          param_4 = (uint)*(byte *)(iVar4 + param_1);
        }
        if (iVar1 == 0 && param_4 == 0) break;
        if (iVar1 == 0) {
LAB_0026eb80:
          iVar2 = *(int *)(iVar2 + 4);
          goto joined_r0x0026eacc;
        }
        param_4 = (uint)*(char *)(iVar4 + param_1);
        if (param_4 == 0) goto LAB_0026eb88;
        if (iVar1 < (int)param_4) goto LAB_0026eb80;
        if ((int)param_4 < iVar1) goto LAB_0026eb88;
        param_1 = param_1 + 1;
        if (0x3ffff < param_1) break;
      } while( true );
    }
    if (iVar2 != 0) {
      piVar3 = (int *)(iVar2 + 0x18);
    }
  }
  if (piVar3 != (int *)0x0) {
    param_1 = *piVar3;
  }
  if (piVar3 == (int *)0x0 || param_1 == 0) {
    param_1 = 0;
  }
  return param_1;
LAB_0026eb88:
  iVar2 = *(int *)(iVar2 + 8);
  goto joined_r0x0026eacc;
}

