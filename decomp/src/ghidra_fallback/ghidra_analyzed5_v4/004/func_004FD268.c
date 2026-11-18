#include "ghidra_types.h"

extern int func_002AF82C(undefined4 param_1);
extern int func_002AF83C(undefined4 param_1);
extern int func_004D00E4(int param_1,int param_2,int param_3,uint *param_4);

// USA 004FD268 <- EU 004FD240 (Ghidra, non-matching)

void func_004FD268(int param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined1 *)(albw_frame + 0x0))
  #define uStack_1f (*(undefined1 *)(albw_frame + 0x1))
  #define uStack_1e (*(undefined1 *)(albw_frame + 0x2))
  #define uStack_1d (*(undefined1 *)(albw_frame + 0x3))
  puVar1 = (undefined1 *)func_002AF82C(param_1);
  *(uint *)(param_1 + 0x5a0) = *(uint *)(param_1 + 0x5a0) | 0x200000;
  (*(undefined4 *)&local_20) = CONCAT11(puVar1[2],puVar1[3]);
  (*(undefined4 *)&local_20) = CONCAT12(puVar1[1],(*(undefined4 *)&local_20));
  (*(undefined4 *)&local_20) = CONCAT13(*puVar1,(*(undefined4 *)&local_20));
  uVar6 = 0;
  uVar2 = 0;
  if (*(char *)(param_1 + 0x650) != '\0') {
    do {
      iVar5 = *(int *)(param_1 + 0x5a8 + uVar6 * 0xc);
      if (iVar5 != 0) {
        iVar4 = 0;
        *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x80000;
        if (0 < *(int *)(*(int *)(iVar5 + 0x20) + 4)) {
          do {
            func_004D00E4(iVar5,iVar4,0,(uint *)&local_20);
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(*(int *)(iVar5 + 0x20) + 4));
        }
      }
      uVar2 = (uint)*(byte *)(param_1 + 0x650);
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar2);
  }
  puVar1 = (undefined1 *)func_002AF83C(uVar2);
  *(uint *)(param_1 + 0x5a0) = *(uint *)(param_1 + 0x5a0) | 0x200000;
  (*(undefined4 *)&local_20) = CONCAT11(puVar1[2],puVar1[3]);
  (*(undefined4 *)&local_20) = CONCAT12(puVar1[1],(*(undefined4 *)&local_20));
  (*(undefined4 *)&local_20) = CONCAT13(*puVar1,(*(undefined4 *)&local_20));
  uVar2 = 0;
  if (*(char *)(param_1 + 0x650) != '\0') {
    do {
      piVar3 = (int *)(param_1 + 0x5a8 + uVar2 * 0xc);
      if ((((*(byte *)(piVar3 + 1) & 2) != 0) || ((*(byte *)(piVar3 + 1) & 8) != 0)) &&
         (iVar5 = *piVar3, iVar5 != 0)) {
        iVar4 = 0;
        *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x10000;
        if (0 < *(int *)(*(int *)(iVar5 + 0x20) + 4)) {
          do {
            func_004D00E4(iVar5,iVar4,1,(uint *)&local_20);
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(*(int *)(iVar5 + 0x20) + 4));
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(byte *)(param_1 + 0x650));
  }
  return;
}

