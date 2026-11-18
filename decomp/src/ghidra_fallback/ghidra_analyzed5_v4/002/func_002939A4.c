#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00320D78(uint *param_1,uint *param_2,uint param_3);
extern undefined4 DAT_00293b00;
extern undefined4 DAT_00293b04;
extern int DAT_00293b08;

// USA 002939A4 <- EU 002939CC (Ghidra, non-matching)
// GLOBAL DAT_00293b00 undefined4
// GLOBAL DAT_00293b04 undefined4
// GLOBAL DAT_00293b08 int

undefined4 func_002939A4(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_3c ((uint *)(albw_frame + 0x4))
  #define local_28 (*(undefined2 *)(albw_frame + 0x18))
  local_28 = 0;
  (**(code **)(*param_3 + 8))(param_3);
  iVar2 = 0;
  do {
    if (*(short *)(param_3[1] + iVar2 * 2) == 0) {
      if (iVar2 < 0x40001) goto LAB_00293a48;
      break;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x40001);
  iVar2 = 0;
LAB_00293a48:
  if (10 < iVar2) {
    iVar2 = 10;
  }
  (**(code **)(*param_3 + 8))(param_3);
  func_0010E3C4(local_3c,(uint *)param_3[1],iVar2 << 1);
  *(undefined2 *)((int)local_3c + iVar2 * 2) = 0;
  iVar2 = param_2 * DAT_00293b08;
  (**(code **)(*param_3 + 8))(param_3);
  uVar1 = 0;
  do {
    if (*(short *)(param_3[1] + uVar1 * 2) == 0) {
      if ((int)uVar1 < 0x40001) goto LAB_00293ad4;
      break;
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 0x40001);
  uVar1 = 0;
LAB_00293ad4:
  (**(code **)(*param_3 + 8))(param_3);
  return func_00320D78((uint *)(param_1 + iVar2 * 4 + 0xd60),(uint *)param_3[1],uVar1 & 0xffff);
}

