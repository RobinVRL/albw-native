#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0048E4B4(int param_1,int *param_2);
extern undefined4 *DAT_004969f0;
extern int DAT_004969f4;
extern undefined4 DAT_004969f8;
extern int *DAT_004969fc;

// USA 00496958 <- EU 00496930 (Ghidra, non-matching)
// GLOBAL DAT_004969f0 undefined4 *
// GLOBAL DAT_004969f4 int
// GLOBAL DAT_004969f8 undefined4
// GLOBAL DAT_004969fc int *

undefined4 func_00496958(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(int *)(albw_frame + 0x8))
  #define local_44 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x10))
  #define local_3c (*(undefined4 *)(albw_frame + 0x14))
  #define local_38 (*(undefined4 *)(albw_frame + 0x18))
  #define local_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2c (*(undefined4 *)(albw_frame + 0x24))
  #define local_28 (*(undefined4 *)(albw_frame + 0x28))
  #define local_24 (*(undefined1 *)(albw_frame + 0x2c))
  puVar1 = DAT_004969f0;
  if (param_2 == 0) {
    iVar3 = 1;
  }
  else {
    iVar3 = func_0010983C(*DAT_004969f0,param_2);
  }
  local_48 = DAT_004969f4;
  uStack_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_44 = *(undefined4 *)(param_3 + 4);
  local_34 = 0x20;
  uVar2 = func_0048E4B4(*DAT_004969fc,&local_48);
  (**(code **)*param_1)(param_1,param_2,uVar2,local_2c);
  if (iVar3 == 1) {
    return 0;
  }
  return func_0010983C(*puVar1,iVar3);
}

