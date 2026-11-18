#include "ghidra_types.h"

extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_001E1EDC(int param_1,int *param_2);
extern int DAT_00394e08;
extern undefined4 DAT_00394e0c;
extern int DAT_00394e10;
extern int *DAT_00394e14;

// USA 00394D28 <- EU 00394D04 (Ghidra, non-matching)
// GLOBAL DAT_00394e08 int
// GLOBAL DAT_00394e0c undefined4
// GLOBAL DAT_00394e10 int
// GLOBAL DAT_00394e14 int *

int func_00394D28(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(int *)(albw_frame + 0x8))
  #define local_54 (*(int *)(albw_frame + 0xc))
  #define local_50 (*(undefined4 *)(albw_frame + 0x10))
  #define local_4c (*(undefined4 *)(albw_frame + 0x14))
  #define local_48 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x20))
  #define local_3c (*(undefined4 *)(albw_frame + 0x24))
  #define local_38 (*(undefined4 *)(albw_frame + 0x28))
  #define local_34 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x30))
  #define local_2c (*(int *)(albw_frame + 0x34))
  #define iStack_28 (*(int *)(albw_frame + 0x38))
  #define local_24 (*(undefined1 *)(albw_frame + 0x3c))
  #define local_23 (*(undefined1 *)(albw_frame + 0x3d))
  #define local_22 (*(undefined1 *)(albw_frame + 0x3e))
  #define local_21 (*(undefined1 *)(albw_frame + 0x3f))
  #define local_20 (*(undefined1 *)(albw_frame + 0x40))
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar2 = param_1 + 0x24;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (iVar2 != 0) {
    iVar3 = 0;
    iVar4 = 0x3f;
    *(int *)(param_1 + 0x1c) = iVar2;
    do {
      iVar4 = iVar4 + -1;
      *(int *)(iVar2 + iVar3 * 4) = iVar2 + (iVar3 + 1) * 4;
      iVar3 = iVar3 + 1;
    } while (iVar4 != 0);
    *(undefined4 *)(param_1 + 0x120) = 0;
    *(int *)(param_1 + 0x20) = iVar2;
    func_0010B3EC((undefined4 *)(param_1 + 0x10),0x40,param_1 + 0x124);
  }
  local_50 = 0;
  local_58 = DAT_00394e08;
  local_4c = 0;
  local_48 = 0x20;
  uStack_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = DAT_00394e08;
  iStack_28 = DAT_00394e10;
  local_24 = 7;
  local_23 = 4;
  local_21 = 1;
  local_20 = 1;
  local_54 = DAT_00394e10 + -0x1c;
  local_22 = 0xf;
  puVar1 = func_001E1EDC(*DAT_00394e14,&local_58);
  *(undefined4 **)(param_1 + 0x224) = puVar1;
  return param_1;
}

