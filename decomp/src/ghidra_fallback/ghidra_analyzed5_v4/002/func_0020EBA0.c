#include "ghidra_types.h"

extern int func_0036BE78();
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_0065D630(undefined4 *param_1,undefined1 param_2);
extern float DAT_0020ec74;
extern float DAT_0020ec78;
extern float DAT_0020ec7c;
extern float DAT_0020ec80;
extern int DAT_0020ec84;
extern int DAT_0020ec88;

// USA 0020EBA0 <- EU 0020EBA0 (Ghidra, non-matching)
// GLOBAL DAT_0020ec74 float
// GLOBAL DAT_0020ec78 float
// GLOBAL DAT_0020ec7c float
// GLOBAL DAT_0020ec80 float
// GLOBAL DAT_0020ec84 int
// GLOBAL DAT_0020ec88 int

undefined4 func_0020EBA0(int param_1)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  uint in_fpscr;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  local_18 = *(float *)(param_1 + 0x3d0);
  uStack_10 = *(undefined4 *)(param_1 + 0x3d8);
  local_14 = *(undefined4 *)(param_1 + 0xb88);
  func_004D838C((float *)(param_1 + 0xb84),&local_18,DAT_0020ec7c,DAT_0020ec78,DAT_0020ec74);
  uVar2 = *(uint *)(param_1 + 0xd1c);
  pfVar3 = (float *)(DAT_0020ec84 + (uVar2 >> 0x18) * 0x10);
  fVar4 = (float)VectorUnsignedToFloat(uVar2 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0xd24) =
       *(float *)(param_1 + 0xb84) +
       (*pfVar3 + pfVar3[1] * fVar4 * DAT_0020ec80) * *(float *)(param_1 + 0xd20);
  iVar1 = DAT_0020ec88;
  *(undefined4 *)(param_1 + 0xd28) = *(undefined4 *)(param_1 + 0xb88);
  *(undefined4 *)(param_1 + 0xd2c) = *(undefined4 *)(param_1 + 0xb8c);
  *(uint *)(param_1 + 0xd1c) = uVar2 + iVar1;
  if (100 < *(int *)(param_1 + 0x8bc)) {
    func_0065D630((undefined4 *)(param_1 + 0x8bc),0xe);
  }
  return func_0036BE78(param_1 + 0xa7c);
}

