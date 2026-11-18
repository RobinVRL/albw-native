#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_004F042C(void);
extern undefined4 DAT_0023e044;
extern undefined4 DAT_0023e048;
extern undefined4 DAT_0023e04c;
extern undefined4 *DAT_0023e050;

// USA 0023DF30 <- EU 0023DF30 (Ghidra, non-matching)
// GLOBAL DAT_0023e044 undefined4
// GLOBAL DAT_0023e048 undefined4
// GLOBAL DAT_0023e04c undefined4
// GLOBAL DAT_0023e050 undefined4 *

void func_0023DF30(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint unaff_r5;
  uint in_fpscr;
  uint uVar4;
  float fVar5;
  undefined4 uVar6;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 ((uint *)(albw_frame + 0x8))
  #define local_70 (*(undefined4 * *)(albw_frame + 0x10))
  #define local_6c (*(undefined4 *)(albw_frame + 0x14))
  #define local_68 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x24))
  #define local_58 (*(uint *)(albw_frame + 0x28))
  #define local_24 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_20 (*(undefined1 *)(albw_frame + 0x60))
  iVar2 = func_004F042C();
  if (iVar2 != 0) {
    iVar2 = iVar2 + 4;
    if ((uint)(int)*(short *)(param_1 + 0x2c) < 0x14) {
      iVar2 = iVar2 + *(short *)(param_1 + 0x2c) * 0x40;
    }
    cVar1 = *(char *)(iVar2 + 5);
    *(char *)(param_1 + 0x7d1) = cVar1;
    if (cVar1 != '\0') {
      local_78[1] = 3;
      local_70 = &local_6c;
      local_20 = 0;
      local_24 = 10;
      local_6c = 0;
      local_78[0] = 1;
      local_58 = unaff_r5 | 0xff;
      local_68 = DAT_0023e048;
      uStack_64 = DAT_0023e044;
      uStack_60 = DAT_0023e04c;
      uStack_5c = DAT_0023e044;
      uVar6 = DAT_0023e044;
      func_0016898C(*(int *)(param_1 + 0x7c8),local_78);
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x7c8) + 0x14) + 0x1c) = 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x7c8) + 0x14) + 0x10) = uVar6;
      iVar2 = *(int *)(param_1 + 0x7c8);
      uVar4 = VectorFloatToUnsigned(ALBW_AS_F32(*(undefined4 *)(*(int *)(iVar2 + 0x14) + 0x14)),3);
      uVar3 = func_00111A64((uint *)*DAT_0023e050);
      iVar2 = *(int *)(iVar2 + 0x14);
      fVar5 = (float)VectorUnsignedToFloat
                               ((int)((ulonglong)uVar4 * (ulonglong)uVar3 >> 0x20),
                                (byte)(in_fpscr >> 0x15) & 3);
      if (*(float *)(iVar2 + 8) != fVar5) {
        *(float *)(iVar2 + 8) = fVar5;
        *(undefined1 *)(iVar2 + 0x26) = 1;
      }
    }
  }
  return;
}

