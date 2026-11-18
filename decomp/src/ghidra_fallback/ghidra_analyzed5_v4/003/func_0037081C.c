#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int DAT_00370a30;

// USA 0037081C <- EU 003707F8 (Ghidra, non-matching)
// GLOBAL DAT_00370a30 int

void func_0037081C(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(uint * *)(albw_frame + 0x4))
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)((int)param_1 + 6) = 0xff;
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined1 *)((int)param_1 + 0xd) = 1;
  *(undefined1 *)((int)param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0xf) = 0;
  iVar2 = DAT_00370a30;
  *(byte *)((int)param_1 + 2) = ((byte)((uint)*param_2 >> 0x18) & 2) >> 1;
  *(byte *)((int)param_1 + 7) = (byte)((uint)*param_2 >> 0x1a);
  *(byte *)(param_1 + 2) = (byte)((uint)(*param_2 << 0x1b) >> 0x19);
  *(byte *)((int)param_1 + 9) = (byte)((uint)(*param_2 << 0x19) >> 0x1e);
  *(byte *)((int)param_1 + 10) = (byte)((uint)(*param_2 << 0x17) >> 0x1e);
  *(byte *)((int)param_1 + 0xb) = (byte)((uint)(*param_2 << 0x15) >> 0x1e);
  *(byte *)(param_1 + 3) = (byte)((uint)(*param_2 << 0x13) >> 0x1e);
  *(byte *)((int)param_1 + 0xd) = (byte)((uint)(*param_2 << 0x11) >> 0x1e);
  *(byte *)((int)param_1 + 0xe) = (byte)((uint)(*param_2 << 0xc) >> 0x1b);
  *(byte *)((int)param_1 + 0xf) = (byte)((uint)(*param_2 << 7) >> 0x1b);
  *(undefined2 *)(param_1 + 9) = 0;
  local_2c = (uint *)(param_2 + 1);
  local_30 = iVar2;
  (**(code **)(iVar2 + 8))(&local_30);
  iVar1 = 0;
  do {
    if (*(short *)((int)local_2c + iVar1 * 2) == 0) {
      if (iVar1 < 0x40001) goto LAB_00370964;
      break;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x40001);
  iVar1 = 0;
LAB_00370964:
  if (10 < iVar1) {
    iVar1 = 10;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(param_1 + 4,local_2c,iVar1 << 1);
  *(undefined2 *)((int)(param_1 + 4) + iVar1 * 2) = 0;
  *(undefined2 *)(param_1 + 0xf) = 0;
  local_2c = (uint *)(param_2 + 7);
  local_30 = iVar2;
  (**(code **)(iVar2 + 8))(&local_30);
  iVar2 = 0;
  do {
    if (*(short *)((int)local_2c + iVar2 * 2) == 0) {
      if (iVar2 < 0x40001) goto LAB_003709f0;
      break;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x40001);
  iVar2 = 0;
LAB_003709f0:
  if (10 < iVar2) {
    iVar2 = 10;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(param_1 + 10,local_2c,iVar2 << 1);
  *(undefined2 *)((int)(param_1 + 10) + iVar2 * 2) = 0;
  *(undefined1 *)((int)param_1 + 0x3e) = *(undefined1 *)((int)param_2 + 0x32);
  return;
}

