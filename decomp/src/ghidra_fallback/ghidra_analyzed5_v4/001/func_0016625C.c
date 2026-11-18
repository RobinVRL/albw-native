#include "ghidra_types.h"

extern int func_00120FBC(int param_1,undefined4 *param_2,float *param_3,undefined4 *param_4,undefined4 param_5, int param_6,float *param_7);
extern int func_002E1B70(int *param_1);
extern int func_00584AA0(int param_1);
extern int *DAT_001663b8;
extern int *DAT_001663bc;

// USA 0016625C <- EU 00166260 (Ghidra, non-matching)
// GLOBAL DAT_001663b8 int *
// GLOBAL DAT_001663bc int *

undefined4 func_0016625C(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(float *)(albw_frame + 0xc))
  piVar1 = DAT_001663b8;
  if (*(char *)(param_1 + 0xf8) == '\0') {
    if (*(char *)(param_1 + 0xfa) == '\0') {
      if (*(char *)(param_1 + 0xf9) != '\0') {
        *(undefined1 *)(param_1 + 0xf9) = 0;
        func_002E1B70((int *)(param_1 + 0xac));
      }
    }
    else if (*DAT_001663b8 != 0) {
      uStack_18 = *(undefined4 *)(param_1 + 0xb8);
      iVar2 = *(int *)(*DAT_001663b8 + 0x18);
      local_1c = *(float *)(param_1 + 0xb4) + *(float *)(param_1 + 0xf0);
      local_14 = *(float *)(param_1 + 0xbc) + *(float *)(param_1 + 0xf4);
      if (iVar2 != 0) {
        *(undefined2 *)(param_1 + 0xb2) = *(undefined2 *)(param_1 + 0xec);
        func_002E1B70((int *)(param_1 + 0xac));
        iVar2 = func_00120FBC(iVar2,(undefined4 *)(param_1 + 0xac),&local_1c,
                              (undefined4 *)(param_1 + 0xc0),(uint)*(ushort *)(param_1 + 0xec),0,
                              (float *)(param_1 + 0xfc));
        if (iVar2 != 0) {
          *(undefined1 *)(param_1 + 0xfa) = 0;
        }
      }
    }
    return 0;
  }
  if (*(char *)(param_1 + 0xf9) != '\0') {
    *(undefined1 *)(param_1 + 0xf9) = 0;
    *(undefined2 *)(param_1 + 0xb2) = *(undefined2 *)(param_1 + 0xec);
    iVar2 = func_002E1B70((int *)(param_1 + 0xac));
    if (iVar2 == 0) {
      return 1;
    }
    iVar2 = func_00584AA0(*DAT_001663bc);
    if (iVar2 != 0) {
      return 1;
    }
  }
  if (*piVar1 == 0) {
    return 1;
  }
  iVar2 = *(int *)(*piVar1 + 0x18);
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0x10c) < 1)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

