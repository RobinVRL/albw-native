#include "ghidra_types.h"

extern int func_0014DE98(int param_1,int *param_2);
extern float func_001D6794(int param_1,int param_2);
extern undefined4 DAT_00506f04;
extern int DAT_00506f08;
extern float DAT_00506f0c;

// USA 00506E2C <- EU 00506E04 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// GLOBAL DAT_00506f04 undefined4
// GLOBAL DAT_00506f08 int
// GLOBAL DAT_00506f0c float

undefined4 func_00506E2C(int param_1,int param_2,undefined4 param_3,int param_4,uint param_5)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  uint in_fpscr;
  float fVar4;
  uint uVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(int *)(albw_frame + 0x8))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0xc))
  #define iStack_40 (*(int *)(albw_frame + 0x10))
  #define local_3c (*(undefined4 *)(albw_frame + 0x14))
  #define local_38 (*(undefined4 *)(albw_frame + 0x18))
  #define local_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2c (*(undefined1 *)(albw_frame + 0x24))
  #define local_2b (*(undefined1 *)(albw_frame + 0x25))
  #define local_28 (*(undefined4 *)(albw_frame + 0x28))
  #define local_24 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x30))
  #define local_1c (*(undefined4 *)(albw_frame + 0x34))
  #define local_18 (*(undefined4 *)(albw_frame + 0x38))
  #define local_14 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_10 (*(undefined1 *)(albw_frame + 0x40))
  #define local_f (*(undefined1 *)(albw_frame + 0x41))
  local_48 = DAT_00506f08;
  uStack_44 = DAT_00506f04;
  iStack_40 = DAT_00506f08;
  local_3c = DAT_00506f04;
  local_10 = 1;
  local_2c = 0;
  local_34 = 0;
  local_30 = 0;
  local_2b = 0;
  local_14 = 0;
  local_24 = 0;
  local_18 = 0;
  local_28 = 0;
  local_1c = 0;
  local_20 = 0;
  local_f = 0xc4;
  iVar2 = *(int *)(*(int *)(param_1 + 0x2d0) + 0x1c8 + param_4 * 4);
  if (param_5 < *(uint *)(iVar2 + 200)) {
    local_38 = *(undefined4 *)(*(int *)(iVar2 + 0xd0) + param_5 * 4);
  }
  else {
    local_38 = 0;
  }
  fVar4 = func_001D6794(*(ushort *)(param_2 + 0x2a) & 0xff,*(ushort *)(param_2 + 0x2c) & 0xff);
  uVar5 = (uint)fVar4;
  puVar3 = (undefined4 *)(param_1 + 0x624);
  fVar6 = (float)VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
  fVar1 = fVar6;
  if (fVar6 != fVar4) {
    fVar1 = DAT_00506f0c;
  }
  if (fVar4 <= fVar1 && (fVar6 != fVar4 && DAT_00506f0c != fVar4)) {
    uVar5 = uVar5 - 1;
  }
  if (uVar5 < 8) {
    puVar3 = puVar3 + uVar5;
  }
  local_14 = *puVar3;
  local_30 = param_3;
  return func_0014DE98(*(int *)(param_1 + 0x2d0),&local_48);
}

