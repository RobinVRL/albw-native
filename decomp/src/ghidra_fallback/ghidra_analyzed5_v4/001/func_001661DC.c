#include "ghidra_types.h"

extern int func_00120FBC(int param_1,undefined4 *param_2,float *param_3,undefined4 *param_4,undefined4 param_5, int param_6,float *param_7);
extern int func_002E1B70(int *param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_00584AA0(int param_1);
extern int *DAT_001663b8;
extern int *DAT_001663bc;

// USA 001661DC <- EU 001661E0 (Ghidra, non-matching)
// GLOBAL DAT_001663b8 int *
// GLOBAL DAT_001663bc int *

undefined4 func_001661DC(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  uint in_fpscr;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define fStack_1c (*(float *)(albw_frame + 0x4))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  #define fStack_14 (*(float *)(albw_frame + 0xc))
  uVar2 = *(uint *)(*(int *)(param_1 + 0x26c) + *(char *)(param_1 + 0x254) * 8 + 4);
  pcVar5 = *(code **)(*(int *)(param_1 + 0x26c) + *(char *)(param_1 + 0x254) * 8);
  if ((uVar2 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(int *)(*(int *)(param_1 + 0x264) + ((int)uVar2 >> 1)));
  }
  (*pcVar5)((int)(*(int *)(param_1 + 0x264)) + ((int)uVar2 >> 1));
  iVar3 = *(int *)(param_1 + 0x250) + 1;
  *(int *)(param_1 + 0x250) = iVar3;
  if (*(int *)(param_1 + 0x260) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x260),1,fparam_0);
  }
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
      iVar3 = *(int *)(*DAT_001663b8 + 0x18);
      fStack_1c = *(float *)(param_1 + 0xb4) + *(float *)(param_1 + 0xf0);
      fStack_14 = *(float *)(param_1 + 0xbc) + *(float *)(param_1 + 0xf4);
      if (iVar3 != 0) {
        *(undefined2 *)(param_1 + 0xb2) = *(undefined2 *)(param_1 + 0xec);
        func_002E1B70((int *)(param_1 + 0xac));
        iVar3 = func_00120FBC(iVar3,(undefined4 *)(param_1 + 0xac),&fStack_1c,
                              (undefined4 *)(param_1 + 0xc0),(uint)*(ushort *)(param_1 + 0xec),0,
                              (float *)(param_1 + 0xfc));
        if (iVar3 != 0) {
          *(undefined1 *)(param_1 + 0xfa) = 0;
        }
      }
    }
    return 0;
  }
  if (*(char *)(param_1 + 0xf9) != '\0') {
    *(undefined1 *)(param_1 + 0xf9) = 0;
    *(undefined2 *)(param_1 + 0xb2) = *(undefined2 *)(param_1 + 0xec);
    iVar3 = func_002E1B70((int *)(param_1 + 0xac));
    if (iVar3 == 0) {
      return 1;
    }
    iVar3 = func_00584AA0(*DAT_001663bc);
    if (iVar3 != 0) {
      return 1;
    }
  }
  if (*piVar1 == 0) {
    return 1;
  }
  iVar3 = *(int *)(*piVar1 + 0x18);
  if ((iVar3 == 0) || (*(int *)(iVar3 + 0x10c) < 1)) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

