#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00122670(int *param_1);
extern int func_0014A354(int param_1,int param_2);
extern int func_0014AA1C(int param_1,char *param_2,int param_3);
extern int func_003C2154(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int func_003C2160(int param_1);
extern int func_0051D5CC(int *param_1);
extern int func_0066BD18(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0029c724;
extern uint *DAT_0029c728;
extern undefined4 *DAT_0029c72c;
extern undefined4 DAT_0029c730;
extern int *DAT_0029c734;
extern undefined4 DAT_0029c738;

// USA 0029C5C8 <- EU 0029C5A4 (Ghidra, non-matching)
// GLOBAL DAT_0029c724 int *
// GLOBAL DAT_0029c728 uint *
// GLOBAL DAT_0029c72c undefined4 *
// GLOBAL DAT_0029c730 undefined4
// GLOBAL DAT_0029c734 int *
// GLOBAL DAT_0029c738 undefined4

undefined4 func_0029C5C8(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint unaff_r6;
  uint unaff_r7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 ((char *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  iVar1 = func_0051D5CC(*(int **)(*param_1 + 0xf4));
  if (iVar1 != 0) {
    iVar1 = *param_1;
    if (3 < *(byte *)(iVar1 + 0xf0)) {
      return func_00122670(*(int **)(iVar1 + 0xf4));
    }
    if ('\x02' < *(char *)(iVar1 + 0xc0)) {
      return func_0066BD18(param_1 + 1,2);
    }
    piVar2 = (int *)func_0014A354(*DAT_0029c724,5);
    if (((*DAT_0029c728 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0029c728), iVar1 != 0)) {
      *DAT_0029c72c = DAT_0029c730;
    }
    if ((piVar2 == (int *)0x0) ||
       (iVar1 = (**(code **)(*piVar2 + 8))(piVar2,DAT_0029c72c), iVar1 == 0)) {
      piVar2 = (int *)0x0;
    }
    if (piVar2 != (int *)0x0) {
      func_003C2154((int)piVar2,0x78,2,0x1e);
    }
    iVar1 = *DAT_0029c734;
    *(uint *)(iVar1 + 0x1138) = unaff_r6 & 0xffffff00 | 8;
    *(undefined4 *)(iVar1 + 0x113c) = 9;
    *(uint *)(iVar1 + 0x1140) = unaff_r7 & 0xff000000 | 0x10000;
    local_20[0] = '\x02';
    local_1c = DAT_0029c738;
    iVar1 = func_0014AA1C(iVar1,local_20,5);
    if (iVar1 != 0) {
      func_00122670(*(int **)(*param_1 + 0xf4));
    }
    if (piVar2 != (int *)0x0) {
      func_003C2160((int)piVar2);
    }
  }
  return 0;
}

