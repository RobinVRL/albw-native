#include "ghidra_types.h"

extern int func_0014B1D4(int param_1,int param_2,int param_3);
extern int func_00231C00(int param_1,int param_2);
extern int func_002FE3E8(int param_1,uint *param_2,int *param_3,uint param_4,uint param_5,int param_6, uint param_7,float fparam_0);
extern int *DAT_002fe3a0;
extern float DAT_002fe3a4;
extern int DAT_002fe3a8;

// USA 002FE2DC <- EU 002FE2B8 (Ghidra, non-matching)
// GLOBAL DAT_002fe3a0 int *
// GLOBAL DAT_002fe3a4 float
// GLOBAL DAT_002fe3a8 int

undefined4 func_002FE2DC(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  ulonglong uVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  *(undefined1 *)(param_1 + 0x90) = 1;
  *(undefined1 *)(param_1 + 0x91) = 8;
  func_0014B1D4(*DAT_002fe3a0,1,1);
  uVar1 = (uint)*(byte *)(param_1 + 0x92);
  if (*(char *)(param_1 + 0x93) == '\0') {
    iVar3 = 8;
    fVar4 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
    fVar5 = (float)VectorSignedToFloat(uVar1 - 1,(byte)(in_fpscr >> 0x15) & 3);
    *(char *)(param_1 + 0x90) = *(char *)(param_1 + 0x90) + '\x01';
  }
  else {
    iVar3 = *(int *)(DAT_002fe3a8 + uVar1 * 4);
    fVar4 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
    fVar5 = DAT_002fe3a4;
  }
  iVar2 = 0;
  uVar6 = (ulonglong)(uint)ALBW_AS_U32((fVar5 / fVar4));
  do {
    func_002FE3E8(param_1,*(uint **)(param_1 + iVar2 * 4 + 0x84),
                  *(int **)(param_1 + 0x70 + iVar2 * 8),0,400,iVar3,iVar3,ALBW_AS_F32(uVar6));
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  local_28 = *(undefined4 *)(param_1 + 0x84);
  local_24 = *(undefined4 *)(param_1 + 0x88);
  return func_00231C00(param_1,(int)&local_28);
}

