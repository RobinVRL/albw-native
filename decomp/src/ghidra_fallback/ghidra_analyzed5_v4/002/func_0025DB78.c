#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern int func_0029E394(int param_1);
extern int func_0029E550(int param_1);
extern int func_0031D4D4(int param_1,float fparam_0);
extern int func_0065FF80(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0025dd14;
extern int DAT_0025dd18;
extern int DAT_0025dd1c;

// USA 0025DB78 <- EU 0025DBA0 (Ghidra, non-matching)
// GLOBAL DAT_0025dd14 int *
// GLOBAL DAT_0025dd18 int
// GLOBAL DAT_0025dd1c int

void func_0025DB78(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(int *)(albw_frame + 0x4))
  piVar4 = DAT_0025dd14;
  iVar2 = func_0029E550(*DAT_0025dd14);
  if (iVar2 != 0) {
    func_0029E394(*piVar4);
    iVar2 = *(int *)(param_1 + 0xf4);
    iVar3 = (int)*(char *)(iVar2 + 0x14);
    if (iVar3 != -1) {
      iVar6 = *(int *)(iVar2 + 0x30);
      pcVar5 = *(code **)(iVar6 + iVar3 * 8);
      if ((pcVar5 != (code *)0x0) ||
         ((uVar7 = *(uint *)(iVar6 + iVar3 * 8 + 4), (uVar7 & 1) != 0 && (uVar7 != 0)))) {
        uVar7 = *(uint *)(iVar6 + iVar3 * 8 + 4);
        piVar4 = (int *)(*(int *)(iVar2 + 0x24) + ((int)uVar7 >> 1));
        if ((uVar7 & 1) != 0) {
          pcVar5 = *(code **)(pcVar5 + *piVar4);
        }
        (*pcVar5)(piVar4,3);
      }
    }
    uVar1 = *(undefined1 *)(iVar2 + 0x14);
    *(undefined1 *)(iVar2 + 0x14) = 3;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined1 *)(iVar2 + 0x15) = uVar1;
    if (*(int *)(iVar2 + 0x20) != 0) {
      if (*(uint *)(iVar2 + 0x18) < 4) {
        piVar4 = *(int **)(iVar2 + 0x1c);
      }
      else {
        piVar4 = (int *)(*(int *)(iVar2 + 0x1c) + 0x6c);
      }
      (**(code **)(*piVar4 + 8))(piVar4);
      local_1c = piVar4[1];
      local_20 = DAT_0025dd18;
      func_0010BEB4(*(int *)(iVar2 + 0x20),&local_20);
    }
    iVar6 = (int)*(char *)(iVar2 + 0x14);
    iVar3 = *(int *)(iVar2 + 0x28);
    pcVar5 = *(code **)(iVar3 + iVar6 * 8);
    if ((pcVar5 != (code *)0x0) ||
       ((uVar7 = *(uint *)(iVar3 + iVar6 * 8 + 4), (uVar7 & 1) != 0 && (uVar7 != 0)))) {
      uVar7 = *(uint *)(iVar3 + iVar6 * 8 + 4);
      if ((uVar7 & 1) != 0) {
        pcVar5 = *(code **)(pcVar5 + *(int *)(*(int *)(iVar2 + 0x24) + ((int)uVar7 >> 1)));
      }
      (*pcVar5)((int)(*(int *)(iVar2 + 0x24)) + ((int)uVar7 >> 1));
    }
    func_0031D4D4(*(int *)(param_1 + 0xf4),*(float *)(DAT_0025dd1c + 0x24));
    func_0065FF80((undefined4 *)(param_1 + 200),2);
  }
  return;
}

