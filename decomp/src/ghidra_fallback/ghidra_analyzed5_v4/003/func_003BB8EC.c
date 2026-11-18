#include "ghidra_types.h"

extern int func_00130C1C(int param_1,undefined4 *param_2,undefined4 *param_3,int *param_4);
extern int func_00323158(undefined4 param_1,uint param_2,int param_3);
extern int func_003CC054(int *param_1,int param_2);
extern int func_003CC124(undefined4 *param_1,undefined4 param_2);
extern int func_005FFDC0(void);
extern int func_005FFF7C(undefined4 param_1);
extern int func_006003D8(undefined4 param_1,int *param_2);
extern int func_00601378(int param_1);
extern int *DAT_003bbaa8;
extern int *DAT_003bbaac;
extern int *DAT_003bbab0;
extern int *DAT_003bbab4;

// USA 003BB8EC <- EU 003BB8C8 (Ghidra, non-matching)
// GLOBAL DAT_003bbaa8 int *
// GLOBAL DAT_003bbaac int *
// GLOBAL DAT_003bbab0 int *
// GLOBAL DAT_003bbab4 int *

int * func_003BB8EC(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_3c (*(int *)(albw_frame + 0x4))
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(int *)(albw_frame + 0xc))
  #define local_28 (*(int *)(albw_frame + 0x18))
  #define local_18 (*(int *)(albw_frame + 0x28))
  piVar1 = DAT_003bbaa8;
  puVar2 = (undefined4 *)0x0;
  puVar4 = (undefined4 *)0x0;
  if (param_2 == 0) {
    uVar6 = *(undefined4 *)(param_1 + 0x204);
    iVar5 = **(int **)(*(int *)(param_1 + 500) + 0x20);
    *(undefined4 *)(iVar5 + 0x13c) = *(undefined4 *)(param_1 + 0x200);
    *(undefined4 *)(iVar5 + 0x140) = uVar6;
    *(byte *)(iVar5 + 2) = *(byte *)(iVar5 + 2) & 0xfe;
    iVar5 = *piVar1;
    puVar2 = (undefined4 *)(iVar5 + 0x15bc);
    puVar4 = (undefined4 *)(iVar5 + 0x161c);
  }
  else if (param_2 == 1) {
    uVar6 = *(undefined4 *)(param_1 + 0x20c);
    iVar5 = **(int **)(*(int *)(param_1 + 500) + 0x20);
    *(undefined4 *)(iVar5 + 0x13c) = *(undefined4 *)(param_1 + 0x208);
    *(undefined4 *)(iVar5 + 0x140) = uVar6;
    *(byte *)(iVar5 + 2) = *(byte *)(iVar5 + 2) & 0xfe;
    iVar5 = *piVar1;
    puVar2 = (undefined4 *)(iVar5 + 0x15ec);
    puVar4 = (undefined4 *)(iVar5 + 0x165c);
  }
  iVar5 = *DAT_003bbaac;
  *(undefined4 *)(iVar5 + 0x14) = 0;
  *(undefined2 *)(iVar5 + 0x18) = 0xffff;
  *(undefined2 *)(iVar5 + 0x1a) = 0xffff;
  *(undefined4 *)(iVar5 + 0x1c) = 0;
  *(undefined1 *)(iVar5 + 0x2c) = 0;
  *(undefined1 *)(iVar5 + 0x2d) = 0xff;
  *(undefined2 *)(iVar5 + 0x2e) = 0xffff;
  *(undefined4 *)(iVar5 + 0x28) = 0;
  *(int *)(iVar5 + 0x24) = *DAT_003bbab0 + 0x10;
  *(undefined4 **)(iVar5 + 0x20) = puVar2;
  func_00323158(*(undefined4 *)(*DAT_003bbab4 + 0x1c),2,0);
  func_005FFDC0();
  func_006003D8(0x208,&local_18);
  func_003CC124(&local_38,local_18);
  func_00130C1C(iVar5,puVar2,puVar4,&local_38);
  uVar3 = 0;
  iVar5 = *(int *)(*(int *)(param_1 + 500) + 0x5c);
  if (0 < iVar5) {
    do {
      if (uVar3 < *(uint *)(*(int *)(param_1 + 500) + 0x5c)) {
        piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 500) + 100) + uVar3 * 4);
      }
      else {
        piVar1 = (int *)0x0;
      }
      (**(code **)(*piVar1 + 8))(piVar1,7,&local_38);
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar5);
  }
  uVar3 = local_38 - local_34 & 0xfffffffc;
  if (uVar3 != 0) {
    func_00601378(uVar3);
    if (local_28 != 0) {
      func_005FFF7C(local_28);
    }
    func_006003D8(0x208,&local_3c);
    func_003CC054(&local_38,local_3c);
  }
  return &local_38;
}

