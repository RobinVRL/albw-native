#include "ghidra_types.h"

extern int func_00489F08(int *param_1,undefined4 param_2);
extern int func_0057E2F8(int param_1,int *param_2,int *param_3);
extern undefined4 DAT_0048e56c;
extern int DAT_0048e570;

// USA 0048E4B4 <- EU 0048E48C (Ghidra, non-matching)
// GLOBAL DAT_0048e56c undefined4
// GLOBAL DAT_0048e570 int

undefined4 func_0048E4B4(int param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  _Alignas(8) unsigned char albw_frame[0x150];
  #define local_148 (*(int *)(albw_frame + 0x8))
  #define local_144 (*(undefined1 * *)(albw_frame + 0xc))
  #define uStack_140 (*(undefined4 *)(albw_frame + 0x10))
  #define local_13c ((undefined1 *)(albw_frame + 0x14))
  #define uStack_3d (*(undefined1 *)(albw_frame + 0x113))
  #define local_38 (*(undefined4 *)(albw_frame + 0x118))
  #define local_34 (*(undefined1 * *)(albw_frame + 0x11c))
  #define local_30 (*(int *)(albw_frame + 0x120))
  #define local_2c (*(int *)(albw_frame + 0x124))
  #define local_28 (*(int *)(albw_frame + 0x128))
  #define local_24 (*(int *)(albw_frame + 0x12c))
  #define local_20 (*(int *)(albw_frame + 0x130))
  #define local_1c (*(int *)(albw_frame + 0x134))
  #define local_18 (*(int *)(albw_frame + 0x138))
  #define local_14 (*(undefined1 *)(albw_frame + 0x13c))
  uVar1 = DAT_0048e56c;
  local_144 = local_13c;
  uStack_140 = 0x100;
  uStack_3d = 0;
  local_13c[0] = 0;
  local_148 = DAT_0048e570;
  piVar2 = (int *)func_0057E2F8(param_1,param_2,&local_148);
  uVar3 = 0;
  if (piVar2 != (int *)0x0) {
    local_38 = uVar1;
    local_34 = (undefined1 *)param_2[1];
    local_30 = param_2[2];
    local_2c = param_2[3];
    local_28 = param_2[4];
    local_24 = param_2[5];
    local_20 = param_2[6];
    local_1c = param_2[7];
    local_18 = param_2[8];
    local_14 = (undefined1)param_2[9];
    (**(code **)(local_148 + 8))(&local_148);
    local_34 = local_144;
    uVar3 = func_00489F08(piVar2,&local_38);
    param_2[7] = local_1c;
    param_2[8] = local_18;
    *(undefined1 *)(param_2 + 9) = local_14;
  }
  return uVar3;
}

