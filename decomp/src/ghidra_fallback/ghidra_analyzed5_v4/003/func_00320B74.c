#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int *DAT_00320cac;
extern int DAT_00320cd0;
extern char s_LocationName_loc_name_linkhouse_00320cb0[];
extern char s_cf_00320cb0[];

// USA 00320B74 <- EU 00320B50 (Ghidra, non-matching)
// GLOBAL DAT_00320cac int *
// GLOBAL DAT_00320cd0 int
// GLOBAL s_cf_00320cb0 string

void func_00320B74(int *param_1)

{
  uint uVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(uint * *)(albw_frame + 0x4))
  switch(*param_1) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
    if ((param_1[1] < *(int *)(*DAT_00320cac + 0x44 + *param_1 * 0x16c)) && (-1 < param_1[1])) {
      return;
    }
  }
  *param_1 = 2;
  param_1[1] = 0;
  local_20 = DAT_00320cd0;
  param_1[2] = 0;
  local_1c = (uint *)s_LocationName_loc_name_linkhouse_00320cb0;
  (**(code **)(local_20 + 8))(&local_20);
  uVar1 = 0;
  do {
    if (*(char *)((int)local_1c + uVar1) == '\0') {
      if (((int)uVar1 < 0x40001) && (uVar1 - 1 < 0x33)) {
        (**(code **)(local_20 + 8))(&local_20);
        func_0010E3C4((uint *)(param_1 + 3),local_1c,uVar1);
        *(undefined1 *)((int)param_1 + uVar1 + 0xc) = 0;
        return;
      }
      break;
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 0x40001);
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}

