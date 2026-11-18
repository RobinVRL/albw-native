#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115CE4(float *param_1,float *param_2,float *param_3);
extern int func_004356B4(int *param_1);
extern int func_00491338(float *param_1,uint param_2,uint param_3,uint param_4);
extern void func_004D7E0C(float *param_1,uint param_2,uint param_3);
extern undefined4 DAT_002c848c;
extern undefined4 DAT_002c8490;
extern float DAT_002c8494;
extern undefined4 DAT_002c8498;
extern undefined4 DAT_002c849c;

// USA 002C83FC <- EU 002C83D8 (Ghidra, non-matching)
// GLOBAL DAT_002c848c undefined4
// GLOBAL DAT_002c8490 undefined4
// GLOBAL DAT_002c8494 float
// GLOBAL DAT_002c8498 undefined4
// GLOBAL DAT_002c849c undefined4

undefined4 func_002C83FC(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define local_3c (*(undefined4 *)(albw_frame + 0x4))
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define afStack_34 ((float *)(albw_frame + 0xc))
  piVar3 = (int *)(param_1 + 0x47c);
  func_00491338((float *)(*(int *)(param_1 + 0x47c) + 100),*(uint *)(param_1 + 0x20),
                *(uint *)(param_1 + 1000),0);
  local_38 = DAT_002c849c;
  uVar1 = DAT_002c848c;
  iVar2 = *piVar3;
  *(undefined4 *)(iVar2 + 0x58) = DAT_002c8490;
  *(undefined4 *)(iVar2 + 0x5c) = uVar1;
  *(undefined4 *)(iVar2 + 0x60) = uVar1;
  local_40 = DAT_002c8494;
  local_3c = DAT_002c8498;
  func_004D7E0C(afStack_34,*(uint *)(param_1 + 0x20),*(uint *)(param_1 + 1000));
  func_00115CE4(&local_40,afStack_34,&local_40);
  func_00115C54(&local_40,&local_40,(float *)(param_1 + 0x3d0));
  iVar2 = *piVar3;
  *(float *)(iVar2 + 4) = local_40;
  *(undefined4 *)(iVar2 + 8) = local_3c;
  *(undefined4 *)(iVar2 + 0xc) = local_38;
  return func_004356B4((int *)*piVar3);
}

