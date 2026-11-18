#include "ghidra_types.h"

extern int func_003413DC(int param_1,float *param_2,int *param_3);
extern int func_004356B4(int *param_1);
extern int func_004ED9C8(int param_1);
extern float *DAT_002c5e00;
extern int *DAT_002c5e04;
extern float DAT_002c5e08;

// USA 002C5C3C <- EU 002C5C18 (Ghidra, non-matching)
// GLOBAL DAT_002c5e00 float *
// GLOBAL DAT_002c5e04 int *
// GLOBAL DAT_002c5e08 float

void func_002C5C3C(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  #define local_1c (*(int *)(albw_frame + 0x14))
  piVar3 = (int *)(param_1 + 0x450);
  iVar1 = *(int *)(param_1 + 0x450);
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0x47c) == '\0') {
      if (*(char *)(param_1 + 0x47d) == '\x01') {
        *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x458);
        *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 0x45c);
        *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0x460);
        uVar2 = ALBW_AS_U32(VectorSignedToFloat(*(undefined4 *)(param_1 + 0x464),(byte)(in_fpscr >> 0x15) & 3));
        *(undefined4 *)(*piVar3 + 0x60) = uVar2;
        *(undefined1 *)(param_1 + 0x47d) = 0;
        func_004356B4((int *)*piVar3);
        func_004ED9C8(*(int *)(param_1 + 0x454));
      }
    }
    else {
      local_1c = 0;
      local_28 = *DAT_002c5e00;
      local_24 = DAT_002c5e00[1];
      local_20 = DAT_002c5e00[2];
      if (*(char *)(param_1 + 0x47e) != '\0') {
        local_20 = *(float *)(param_1 + 0x474);
        if (*(char *)(param_1 + 0x42c) == '\x01') {
          local_28 = -(local_20 * *(float *)(param_1 + 0x470));
          local_20 = -(local_20 * *(float *)(param_1 + 0x46c));
        }
        else {
          local_28 = local_20 * *(float *)(param_1 + 0x470);
          local_20 = local_20 * *(float *)(param_1 + 0x46c);
        }
      }
      func_003413DC(*DAT_002c5e04,&local_28,&local_1c);
      if (*(char *)(param_1 + 0x47d) == '\x01') {
        iVar1 = *(int *)(param_1 + 0x450);
        *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x458);
        *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 0x45c);
        *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0x460);
        uVar2 = ALBW_AS_U32(VectorSignedToFloat(*(undefined4 *)(param_1 + 0x464),(byte)(in_fpscr >> 0x15) & 3));
        *(undefined4 *)(*piVar3 + 0x60) = uVar2;
        *(undefined1 *)(param_1 + 0x47d) = 0;
        func_004356B4((int *)*piVar3);
        func_004ED9C8(*(int *)(param_1 + 0x454));
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 0x45c);
        iVar1 = *(int *)(param_1 + 0x450);
        if (*(char *)(param_1 + 0x42c) == '\x01') {
          fVar4 = *(float *)(param_1 + 0x458) - *(float *)(param_1 + 0x470) * DAT_002c5e08;
          fVar5 = *(float *)(param_1 + 0x460) - *(float *)(param_1 + 0x46c) * DAT_002c5e08;
        }
        else {
          fVar4 = *(float *)(param_1 + 0x458) + *(float *)(param_1 + 0x470) * DAT_002c5e08;
          fVar5 = *(float *)(param_1 + 0x460) + *(float *)(param_1 + 0x46c) * DAT_002c5e08;
        }
        *(float *)(iVar1 + 4) = fVar4;
        *(undefined4 *)(iVar1 + 8) = uVar2;
        *(float *)(iVar1 + 0xc) = fVar5;
        uVar2 = ALBW_AS_U32(VectorSignedToFloat(*(int *)(param_1 + 0x464) + 1,(byte)(in_fpscr >> 0x15) & 3));
        *(undefined4 *)(*piVar3 + 0x60) = uVar2;
        *(undefined1 *)(param_1 + 0x47d) = 1;
        func_004356B4((int *)*piVar3);
        func_004ED9C8(*(int *)(param_1 + 0x454));
      }
    }
    *(undefined1 *)(param_1 + 0x47c) = 0;
  }
  return;
}

