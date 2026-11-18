#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00145B68(float *param_1,uint param_2);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern float DAT_0052eb0c;
extern undefined4 DAT_0052eb10;
extern float DAT_0052eb14;

// USA 0052EA80 <- EU 0052EA58 (Ghidra, non-matching)
// GLOBAL DAT_0052eb0c float
// GLOBAL DAT_0052eb10 undefined4
// GLOBAL DAT_0052eb14 float

undefined4 func_0052EA80(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(float *)(albw_frame + 0x0))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x14))
  #define fStack_38 (*(float *)(albw_frame + 0x18))
  #define local_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define fStack_2c (*(float *)(albw_frame + 0x24))
  #define local_28 (*(undefined4 *)(albw_frame + 0x28))
  #define local_20 (*(float *)(albw_frame + 0x30))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x34))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x38))
  func_004D80A4(&fStack_38,*(uint *)(param_1 + 1000),DAT_0052eb0c);
  local_34 = DAT_0052eb10;
  uVar2 = DAT_0052eb10;
  func_004D80A4(&fStack_2c,*(uint *)(param_1 + 1000),DAT_0052eb14);
  local_28 = uVar2;
  func_00115C54(&local_20,&fStack_38,(float *)(param_1 + 0x3d0));
  local_50 = local_20;
  uStack_4c = uStack_1c;
  uStack_48 = uStack_18;
  iVar1 = func_00145B68(&local_50,*(uint *)(param_1 + 0x624));
  if (iVar1 == 0) {
    func_00115C54(&local_20,&fStack_2c,(float *)(param_1 + 0x3d0));
    local_44 = local_20;
    uStack_40 = uStack_1c;
    uStack_3c = uStack_18;
    iVar1 = func_00145B68(&local_44,*(uint *)(param_1 + 0x624));
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

