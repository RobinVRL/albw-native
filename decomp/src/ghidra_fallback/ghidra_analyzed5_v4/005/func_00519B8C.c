#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern int func_0012C790(int param_1);
extern int func_0043C818(int param_1);
extern int DAT_00519d0c;

// USA 00519B8C <- EU 00519B64 (Ghidra, non-matching)
// GLOBAL DAT_00519d0c int

undefined4 func_00519B8C(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  code *pcVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  bool bVar9;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(int *)(albw_frame + 0x4))
  iVar2 = *(int *)(param_1 + 0x54);
  if ((iVar2 != 0) && (*(char *)(iVar2 + 0xd) == '\x03')) {
    uVar4 = (ushort)*(byte *)(iVar2 + 0xe);
    bVar9 = uVar4 == 3;
    if (bVar9) {
      uVar4 = *(ushort *)(param_1 + 0x58);
    }
    if ((bVar9 && uVar4 == 2) && (iVar6 = (int)*(char *)(iVar2 + 0xcc), iVar6 != 4)) {
      if (iVar6 != -1) {
        iVar3 = *(int *)(iVar2 + 0xe8);
        pcVar5 = *(code **)(iVar3 + iVar6 * 8);
        if ((pcVar5 != (code *)0x0) ||
           ((uVar8 = *(uint *)(iVar3 + iVar6 * 8 + 4), (uVar8 & 1) != 0 && (uVar8 != 0)))) {
          uVar8 = *(uint *)(iVar3 + iVar6 * 8 + 4);
          if ((uVar8 & 1) != 0) {
            pcVar5 = *(code **)(pcVar5 + *(int *)(*(int *)(iVar2 + 0xdc) + ((int)uVar8 >> 1)));
          }
          (*pcVar5)((int)(*(int *)(iVar2 + 0xdc)) + ((int)uVar8 >> 1));
        }
      }
      uVar1 = *(undefined1 *)(iVar2 + 0xcc);
      *(undefined1 *)(iVar2 + 0xcc) = 4;
      *(undefined4 *)(iVar2 + 200) = 0;
      *(undefined1 *)(iVar2 + 0xcd) = uVar1;
      if (*(int *)(iVar2 + 0xd8) != 0) {
        if (*(uint *)(iVar2 + 0xd0) < 5) {
          piVar7 = *(int **)(iVar2 + 0xd4);
        }
        else {
          piVar7 = (int *)(*(int *)(iVar2 + 0xd4) + 0x90);
        }
        (**(code **)(*piVar7 + 8))(piVar7);
        local_1c = piVar7[1];
        local_20 = DAT_00519d0c;
        func_0010BEB4(*(int *)(iVar2 + 0xd8),&local_20);
      }
      iVar3 = (int)*(char *)(iVar2 + 0xcc);
      iVar6 = *(int *)(iVar2 + 0xe0);
      pcVar5 = *(code **)(iVar6 + iVar3 * 8);
      if ((pcVar5 != (code *)0x0) ||
         ((uVar8 = *(uint *)(iVar6 + iVar3 * 8 + 4), (uVar8 & 1) != 0 && (uVar8 != 0)))) {
        uVar8 = *(uint *)(iVar6 + iVar3 * 8 + 4);
        if ((uVar8 & 1) != 0) {
          pcVar5 = *(code **)(pcVar5 + *(int *)(*(int *)(iVar2 + 0xdc) + ((int)uVar8 >> 1)));
        }
        (*pcVar5)((int)(*(int *)(iVar2 + 0xdc)) + ((int)uVar8 >> 1));
      }
    }
  }
  iVar2 = *(int *)(param_1 + 0x80);
  if (((iVar2 != 0) && (*(char *)(iVar2 + 0xd) == '\x03')) && (*(char *)(iVar2 + 0xe) == '\x03')) {
    func_0043C818(iVar2);
  }
  if (*(int *)(param_1 + 0x70) == 0) {
    return 0;
  }
  return func_0012C790(*(int *)(param_1 + 0x70));
}

