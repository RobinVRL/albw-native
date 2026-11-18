#include "ghidra_types.h"

extern int func_005229E8(int param_1,uint param_2);
extern int DAT_004d1e6c;
extern undefined4 DAT_004d1e70;

// USA 004D1D84 <- EU 004D1D5C (Ghidra, non-matching)
// GLOBAL DAT_004d1e6c int
// GLOBAL DAT_004d1e70 undefined4

void func_004D1D84(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(undefined4 * *)(albw_frame + 0x4))
  iVar2 = DAT_004d1e6c;
  uVar4 = 0;
  if (*(int *)(param_1 + 0x538) < 1) {
    return;
  }
  do {
    if ((uVar4 < *(uint *)(param_1 + 0x538)) &&
       (iVar5 = *(int *)(*(int *)(param_1 + 0x540) + uVar4 * 4), iVar5 != 0)) {
      local_2c = func_005229E8(iVar5,0);
      local_30 = iVar2;
      (**(code **)(*param_2 + 8))(param_2);
      (**(code **)(*param_2 + 8))(param_2);
      puVar6 = (undefined4 *)param_2[1];
      (**(code **)(local_30 + 8))(&local_30);
      if (puVar6 == local_2c) {
LAB_004d1e4c:
        bVar1 = true;
      }
      else {
        iVar3 = 0;
        do {
          if (*(char *)(param_2[1] + iVar3) != *(char *)((int)local_2c + iVar3)) break;
          if (*(char *)(param_2[1] + iVar3) == '\0') goto LAB_004d1e4c;
          iVar3 = iVar3 + 1;
        } while (iVar3 < 0x40001);
        bVar1 = false;
      }
      if (bVar1) {
        *(undefined4 *)(*(int *)(iVar5 + 0x14) + 0x10) = DAT_004d1e70;
        return;
      }
    }
    uVar4 = uVar4 + 1;
    if (*(int *)(param_1 + 0x538) <= (int)uVar4) {
      return;
    }
  } while( true );
}

