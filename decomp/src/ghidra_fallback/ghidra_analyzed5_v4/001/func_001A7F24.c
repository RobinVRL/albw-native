#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_004F4A68();
extern float *DAT_001a8014;
extern int DAT_001a8018;
extern float DAT_001a801c;
extern int DAT_001a8020;

// USA 001A7F24 <- EU 001A7F24 (Ghidra, non-matching)
// GLOBAL DAT_001a8014 float *
// GLOBAL DAT_001a8018 int
// GLOBAL DAT_001a801c float
// GLOBAL DAT_001a8020 int

undefined4 func_001A7F24(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  if ((1 << (*(ushort *)(param_2 + 0x20) & 0x1f) & 0x58U) != 0) {
    local_20 = *DAT_001a8014;
    local_1c = DAT_001a8014[1];
    local_18 = DAT_001a8014[2];
    func_004D7F70(&local_20,*(uint *)(param_1 + 1000));
    iVar1 = DAT_001a8018;
    if (((*(uint *)(DAT_001a8018 + 4) & 1) == 0) &&
       (iVar2 = func_00100174((int *)(DAT_001a8018 + 4)), iVar2 != 0)) {
      uVar3 = 0x80000000 - *(int *)(param_1 + 0x918);
      iVar2 = DAT_001a8020 + (uVar3 >> 0x18) * 0x10;
      fVar4 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(iVar1 + 8) = *(float *)(iVar2 + 8) + *(float *)(iVar2 + 0xc) * fVar4 * DAT_001a801c
      ;
    }
    if (*(float *)(param_2 + 4) * local_20 + *(float *)(param_2 + 8) * local_1c +
        *(float *)(param_2 + 0xc) * local_18 < *(float *)(iVar1 + 8)) {
      *(undefined1 *)(param_1 + 0x934) = 1;
    }
  }
  return func_004F4A68(param_1,param_2);
}

