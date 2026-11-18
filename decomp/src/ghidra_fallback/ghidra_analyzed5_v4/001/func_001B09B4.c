#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004356B4(int *param_1);
extern int func_004A8F40(int param_1,int *param_2,uint param_3);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int DAT_001b0b74;
extern int *DAT_001b0b78;
extern int DAT_001b0b7c;
extern float DAT_001b0b80;
extern int DAT_001b0b84;
extern float DAT_001b0b88;
extern uint DAT_001b0b8c;
extern uint DAT_001b0b90;
extern int *DAT_001b0b94;

// USA 001B09B4 <- EU 001B09B4 [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_001b0b74 int
// GLOBAL DAT_001b0b78 int *
// GLOBAL DAT_001b0b7c int
// GLOBAL DAT_001b0b80 float
// GLOBAL DAT_001b0b84 int
// GLOBAL DAT_001b0b88 float
// GLOBAL DAT_001b0b8c uint
// GLOBAL DAT_001b0b90 uint
// GLOBAL DAT_001b0b94 int *

bool func_001B09B4(int param_1)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  uint unaff_r6;
  uint in_fpscr;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(undefined4 *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define local_3c (*(int *)(albw_frame + 0x14))
  #define local_38 (*(int *)(albw_frame + 0x18))
  #define iStack_34 (*(int *)(albw_frame + 0x1c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2c (*(uint *)(albw_frame + 0x24))
  #define local_28 (*(undefined4 *)(albw_frame + 0x28))
  #define local_24 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x30))
  #define local_1c (*(undefined1 *)(albw_frame + 0x34))
  if (((*(int *)(param_1 + 0x9a8) != 0) && (0 < *(short *)(DAT_001b0b74 + param_1))) &&
     (*(char *)(param_1 + 0x910) != '\x05')) {
    *(undefined1 *)(param_1 + 0xa33) = 0;
    *(undefined1 *)(param_1 + 0xa31) = 1;
    *(undefined4 *)(param_1 + 0xa24) = 0x1f;
    if (*(char *)(param_1 + 0xa34) != '\0') {
      iVar1 = func_00588BE4(param_1);
      if (iVar1 == *DAT_001b0b78) {
        local_40 = *(float *)(DAT_001b0b7c + 0x24);
        local_48 = *(float *)(DAT_001b0b7c + 0x1c);
        local_44 = *(undefined4 *)(DAT_001b0b7c + 0x20);
      }
      else {
        local_40 = *(float *)(DAT_001b0b7c + 0x18);
        local_48 = *(float *)(DAT_001b0b7c + 0x10);
        local_44 = *(undefined4 *)(DAT_001b0b7c + 0x14);
      }
      func_004D7F70(&local_48,*(uint *)(param_1 + 1000));
      pfVar2 = (float *)(DAT_001b0b84 + (*(uint *)(param_1 + 0xa28) >> 0x18) * 0x10);
      fVar4 = (float)VectorUnsignedToFloat
                               (*(uint *)(param_1 + 0xa28) & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
      local_40 = local_40 - (*pfVar2 + pfVar2[1] * fVar4 * DAT_001b0b80) * DAT_001b0b88;
      func_00115C54(&local_48,&local_48,(float *)(param_1 + 0x3d0));
      iVar1 = *(int *)(param_1 + 0x9a8);
      *(float *)(iVar1 + 4) = local_48;
      *(undefined4 *)(iVar1 + 8) = local_44;
      *(float *)(iVar1 + 0xc) = local_40;
      func_004356B4(*(int **)(param_1 + 0x9a8));
      local_2c = unaff_r6 & 0xffff0000 | DAT_001b0b8c;
      local_3c = 0;
      iStack_34 = param_1 + 0xa04;
      local_38 = param_1 + 0x9f4;
      local_1c = 0;
      local_20 = *(undefined4 *)(param_1 + 0x9a8);
      local_30 = *(undefined4 *)(param_1 + 0x2cc);
      local_28 = 1;
      local_24 = *(undefined4 *)(param_1 + 0x9c0);
      uVar3 = func_004A8F40(*DAT_001b0b94,&local_3c,DAT_001b0b90);
      return uVar3 != 0;
    }
  }
  return false;
}

