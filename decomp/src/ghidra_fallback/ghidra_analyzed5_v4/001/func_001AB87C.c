#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_0042DD38(int param_1,int param_2,int param_3);
extern int func_00522BE4(int param_1,int param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_001ab9b0;
extern int *DAT_001ab9b4;
extern undefined4 DAT_001ab9b8;
extern undefined4 DAT_001ab9bc;
extern undefined4 DAT_001ab9c0;
extern undefined4 DAT_001ab9c4;

// USA 001AB87C <- EU 001AB87C (Ghidra, non-matching)
// GLOBAL DAT_001ab9b0 int *
// GLOBAL DAT_001ab9b4 int *
// GLOBAL DAT_001ab9b8 undefined4
// GLOBAL DAT_001ab9bc undefined4
// GLOBAL DAT_001ab9c0 undefined4
// GLOBAL DAT_001ab9c4 undefined4

undefined4 func_001AB87C(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 (*(undefined4 *)(albw_frame + 0x8))
  #define local_64 (*(undefined4 *)(albw_frame + 0xc))
  #define local_60 (*(undefined4 *)(albw_frame + 0x10))
  #define local_5c (*(undefined4 *)(albw_frame + 0x14))
  #define local_58 (*(undefined4 *)(albw_frame + 0x18))
  #define local_54 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x20))
  #define local_4c (*(undefined4 *)(albw_frame + 0x24))
  #define local_48 (*(undefined4 *)(albw_frame + 0x28))
  #define local_44 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_40 (*(undefined2 *)(albw_frame + 0x30))
  #define local_3c (*(undefined4 *)(albw_frame + 0x34))
  #define local_38 (*(undefined1 *)(albw_frame + 0x38))
  #define local_34 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x40))
  #define local_2c (*(undefined4 *)(albw_frame + 0x44))
  #define local_28 (*(undefined4 *)(albw_frame + 0x48))
  #define local_24 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x50))
  #define local_1c (*(undefined4 *)(albw_frame + 0x54))
  #define local_18 (*(undefined4 *)(albw_frame + 0x58))
  #define local_14 (*(undefined2 *)(albw_frame + 0x5c))
  #define local_10 (*(undefined4 *)(albw_frame + 0x60))
  iVar1 = func_00588BE4(param_1);
  if (iVar1 == *DAT_001ab9b0) {
    iVar4 = *(int *)(*DAT_001ab9b4 + 0xf74);
    iVar1 = 0;
    if (iVar4 != 0) {
      iVar1 = *(int *)(iVar4 + 0x20);
    }
    if (((iVar4 != 0 && iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) && (*(int *)(iVar1 + 0x154) < 2))
    {
      local_64 = DAT_001ab9b8;
      local_60 = DAT_001ab9b8;
      local_5c = DAT_001ab9b8;
      local_58 = DAT_001ab9b8;
      local_54 = DAT_001ab9b8;
      local_50 = DAT_001ab9b8;
      local_4c = DAT_001ab9b8;
      local_48 = DAT_001ab9b8;
      local_44 = DAT_001ab9b8;
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      local_34 = DAT_001ab9bc;
      local_30 = DAT_001ab9bc;
      local_2c = DAT_001ab9bc;
      local_28 = DAT_001ab9c0;
      local_24 = DAT_001ab9c0;
      local_20 = DAT_001ab9c0;
      local_14 = 6;
      local_18 = 0;
      local_1c = 0;
      local_68 = DAT_001ab9c4;
      local_10 = DAT_001ab9b8;
      iVar1 = func_00522BE4(*DAT_001ab9b4,(int)&local_68);
      if (((iVar1 == 0) ||
          (uVar3 = func_0042DD38((int)&local_68,*(int *)(param_1 + 0x430),0), uVar3 == 0)) &&
         (iVar1 = func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0x430),0,2,0,0), iVar1 == 0)) {
        return 0;
      }
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

