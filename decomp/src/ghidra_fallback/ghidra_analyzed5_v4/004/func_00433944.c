#include "ghidra_types.h"

extern int func_00433B08(undefined4 *param_1,int param_2);
extern undefined1 DAT_00433a90;
extern int DAT_00433a98;

// USA 00433944 <- EU 00433924 (Ghidra, non-matching)
// GLOBAL DAT_00433a90 undefined1
// GLOBAL DAT_00433a98 int

int func_00433944(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  bool bVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(int *)(albw_frame + 0xc))
  #define local_20 (*(int *)(albw_frame + 0x10))
  #define local_1c (*(undefined1 * *)(albw_frame + 0x14))
  local_20 = DAT_00433a98;
  local_1c = &DAT_00433a90;
  (**(code **)(*param_1 + 8))(param_1);
  (**(code **)(*param_1 + 8))(param_1);
  puVar4 = (undefined1 *)param_1[1];
  (**(code **)(local_20 + 8))(&local_20);
  bVar5 = true;
  bVar1 = bVar5;
  if (puVar4 != local_1c) {
    iVar2 = 0;
    do {
      if (*(char *)(param_1[1] + iVar2) != local_1c[iVar2]) break;
      if (*(char *)(param_1[1] + iVar2) == '\0') goto LAB_004339c0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x40001);
    bVar1 = false;
  }
LAB_004339c0:
  if (bVar1) {
    return 0x1f;
  }
  iVar2 = 0;
  do {
    func_00433B08(&local_28,iVar2);
    (**(code **)(local_28 + 8))(&local_28);
    (**(code **)(local_28 + 8))(&local_28);
    iVar3 = local_24;
    (**(code **)(*param_1 + 8))(param_1);
    bVar1 = bVar5;
    if (iVar3 != param_1[1]) {
      iVar3 = 0;
      do {
        if (*(char *)(local_24 + iVar3) != *(char *)(param_1[1] + iVar3)) break;
        if (*(char *)(local_24 + iVar3) == '\0') goto LAB_00433a5c;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x40001);
      bVar1 = false;
    }
LAB_00433a5c:
    if (bVar1) {
      return (int)(char)iVar2;
    }
    iVar2 = iVar2 + 1;
    if (0x11 < iVar2) {
      return -1;
    }
  } while( true );
}

