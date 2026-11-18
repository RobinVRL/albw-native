#include "ghidra_types.h"

extern int func_003C7AB0(int param_1,undefined4 param_2,undefined4 param_3);
extern int func_003C8AB4(int *param_1);
extern int func_00499AF0(int param_1,int *param_2,int *param_3);
extern int func_00499B9C(int param_1,int *param_2,int *param_3,undefined4 param_4);
extern undefined4 DAT_00499abc;
extern int DAT_00499ac0;
extern int *DAT_00499ac4;

// USA 00499974 <- EU 0049994C (Ghidra, non-matching)
// GLOBAL DAT_00499abc undefined4
// GLOBAL DAT_00499ac0 int
// GLOBAL DAT_00499ac4 int *

undefined4 func_00499974(int *param_1,undefined1 *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 ((int *)(albw_frame + 0x0))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x20))
  #define local_3c (*(int * *)(albw_frame + 0x24))
  #define local_30 (*(int *)(albw_frame + 0x30))
  #define local_2c (*(undefined4 *)(albw_frame + 0x34))
  #define local_28 (*(int *)(albw_frame + 0x38))
  #define local_24 (*(undefined4 *)(albw_frame + 0x3c))
  uStack_40 = DAT_00499abc;
  local_3c = (int *)0x0;
  local_2c = (**(code **)(*param_1 + 0x70))(param_1);
  iVar2 = DAT_00499ac0;
  local_30 = DAT_00499ac0;
  uVar1 = func_00499AF0((int)&uStack_40,&local_30,param_3);
  param_1[0x14] = uVar1;
  if (((((uVar1 & 0x3fc00) != 0x4400) || ((uVar1 & 0x3ff) < 100)) || (0xb3 < (uVar1 & 0x3ff))) &&
     ((uVar1 & 0x80000000) != 0)) {
    local_60[2] = 0;
    local_60[3] = 0;
    local_60[4] = 0;
    local_60[5] = 0;
    local_60[6] = 0;
    local_60[0] = *DAT_00499ac4;
    *(int *)((int)local_60 + *(int *)(local_60[0] + -0x30)) = DAT_00499ac4[8];
    local_60[1] = DAT_00499ac4[9];
    local_24 = (**(code **)(*param_1 + 0x70))(param_1);
    local_28 = iVar2;
    iVar2 = func_00499B9C((int)local_60,&local_28,param_3,1);
    param_1[0x14] = iVar2;
    if (-1 < iVar2) {
      *param_2 = 1;
      func_003C7AB0((int)local_60,0,param_3);
      func_003C8AB4(local_3c);
      return 1;
    }
    *param_2 = 0;
    func_003C7AB0((int)local_60,0,param_3);
    func_003C8AB4(local_3c);
    return 0;
  }
  *param_2 = 0;
  func_003C8AB4(local_3c);
  return 1;
}

