#include "ghidra_types.h"

extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_004CEAF0(int param_1);
extern int func_004F68AC();
extern float DAT_00202d50;
extern undefined4 DAT_00202d54;
extern float DAT_00202d58;
extern int *DAT_00202d5c;
extern float DAT_00202d60;
extern int DAT_00202d64;
extern float DAT_00202d68;
extern float DAT_00202d6c;

// USA 00202C20 <- EU 00202C20 (Ghidra, non-matching)
// GLOBAL DAT_00202d50 float
// GLOBAL DAT_00202d54 undefined4
// GLOBAL DAT_00202d58 float
// GLOBAL DAT_00202d5c int *
// GLOBAL DAT_00202d60 float
// GLOBAL DAT_00202d64 int
// GLOBAL DAT_00202d68 float
// GLOBAL DAT_00202d6c float

undefined4 func_00202C20(int param_1,int param_2,undefined4 param_3,float *param_4)

{
  float fVar1;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  uint in_fpscr;
  uint uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(undefined4 *)(albw_frame + 0xc))
  #define local_40 (*(undefined4 *)(albw_frame + 0x10))
  #define local_3c (*(undefined4 *)(albw_frame + 0x14))
  #define local_38 (*(undefined4 *)(albw_frame + 0x18))
  #define local_34 (*(float *)(albw_frame + 0x1c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2c (*(undefined4 *)(albw_frame + 0x24))
  #define local_28 (*(undefined4 *)(albw_frame + 0x28))
  #define local_24 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_20 (*(float *)(albw_frame + 0x30))
  #define local_1c (*(undefined4 *)(albw_frame + 0x34))
  uVar8 = DAT_00202d54;
  uVar5 = in_fpscr & 0xfffffff |
          (uint)(*(float *)(param_1 + 0xc) - DAT_00202d50 <= *(float *)(param_1 + 0x3d4)) << 0x1d;
  if (!SUB41(uVar5 >> 0x1d,0)) {
    *(float *)(param_1 + 0x3d4) = *(float *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x3e0) = uVar8;
  }
  func_004F68AC(param_1,param_2,param_3,param_4);
  iVar4 = DAT_00202d64;
  fVar1 = DAT_00202d60;
  local_48 = DAT_00202d58;
  if (*(char *)(param_1 + 0x8c0) != '\x03' && *(char *)(param_1 + 0x8c0) != '\x04') {
    uVar2 = *DAT_00202d5c + *(int *)(param_1 + 0x904);
    *(uint *)(param_1 + 0x904) = uVar2;
    pfVar3 = (float *)(iVar4 + (uVar2 >> 0x18) * 0x10);
    fVar6 = (float)VectorUnsignedToFloat(uVar2 & 0xffffff,(byte)(uVar5 >> 0x15) & 3);
    fVar7 = *(float *)(param_1 + 0x8f4);
    *(float *)(param_1 + 0x8f4) =
         fVar7 + ((local_48 + (*pfVar3 + pfVar3[1] * fVar6 * fVar1) * DAT_00202d68) - fVar7) *
                 DAT_00202d6c;
  }
  local_2c = *(undefined4 *)(param_1 + 0x8f4);
  local_34 = local_48;
  local_20 = local_48;
  iVar4 = *(int *)(param_1 + 0x40c);
  *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
  local_44 = uVar8;
  local_40 = uVar8;
  local_3c = uVar8;
  local_38 = uVar8;
  local_30 = uVar8;
  local_28 = uVar8;
  local_24 = uVar8;
  local_1c = uVar8;
  func_001157FC((float *)(iVar4 + 0x80),(float *)(*(int *)(param_1 + 0x40c) + 0x80),&local_48);
  return func_004CEAF0(*(int *)(param_1 + 0x40c));
}

