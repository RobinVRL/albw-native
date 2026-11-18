#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_004A6694(int *param_1,int param_2,uint *param_3);
extern undefined1 DAT_0035247c;
extern int DAT_00352480;
extern int DAT_00352484;
extern int DAT_00352488;

// USA 003522A8 <- EU 00352284 (Ghidra, non-matching)
// GLOBAL DAT_0035247c undefined1
// GLOBAL DAT_00352480 int
// GLOBAL DAT_00352484 int
// GLOBAL DAT_00352488 int

void func_003522A8(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define aiStack_98 ((int *)(albw_frame + 0x8))
  #define local_84 (*(int *)(albw_frame + 0x1c))
  #define local_80 (*(uint * *)(albw_frame + 0x20))
  #define local_7c (*(int *)(albw_frame + 0x24))
  #define local_78 ((uint *)(albw_frame + 0x28))
  #define uStack_39 (*(undefined1 *)(albw_frame + 0x67))
  #define local_38 (*(int *)(albw_frame + 0x68))
  #define local_34 (*(uint * *)(albw_frame + 0x6c))
  #define local_30 (*(int *)(albw_frame + 0x70))
  #define local_2c (*(uint * *)(albw_frame + 0x74))
  iVar4 = DAT_00352480;
  if (*(int *)(param_1 + 0x24) != 0) {
    local_2c = (uint *)&DAT_0035247c;
    local_30 = DAT_00352480;
    local_7c = 0x40;
    uStack_39 = 0;
    local_84 = DAT_00352484;
    local_80 = local_78;
    (**(code **)(DAT_00352480 + 8))(&local_30);
    uVar2 = 0;
    do {
      if (*(char *)((int)local_2c + uVar2) == '\0') {
        if ((int)uVar2 < 0x40001) goto LAB_00352324;
        break;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 0x40001);
    uVar2 = 0;
LAB_00352324:
    if (local_7c <= (int)uVar2) {
      uVar2 = local_7c - 1;
    }
    (**(code **)(local_30 + 8))(&local_30);
    func_0010E3C4(local_78,local_2c,uVar2);
    puVar1 = local_80;
    *(undefined1 *)((int)local_78 + uVar2) = 0;
    local_84 = DAT_00352488;
    local_34 = *(uint **)(*(int *)(*(int *)(param_2 + 8) + 4) + 4);
    local_38 = iVar4;
    (**(code **)(DAT_00352488 + 8))(&local_84);
    iVar4 = 0;
    do {
      if (*(char *)((int)local_80 + iVar4) == '\0') {
        if (iVar4 < 0x40001) goto LAB_003523bc;
        break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x40001);
    iVar4 = 0;
LAB_003523bc:
    iVar3 = iVar4;
    if (iVar4 < 0) {
      iVar3 = 0;
    }
    (**(code **)(local_38 + 8))(&local_38);
    uVar2 = 0;
    do {
      if (*(char *)((int)local_34 + uVar2) == '\0') {
        if ((int)uVar2 < 0x40001) goto LAB_0035240c;
        break;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 0x40001);
    uVar2 = 0;
LAB_0035240c:
    if (local_7c - iVar3 <= (int)uVar2) {
      uVar2 = (local_7c - iVar3) - 1;
    }
    if (0 < (int)uVar2) {
      (**(code **)(local_38 + 8))(&local_38);
      func_0010E3C4((uint *)((int)puVar1 + iVar3),local_34,uVar2);
      if (iVar4 < (int)(iVar3 + uVar2)) {
        *(undefined1 *)((int)puVar1 + iVar3 + uVar2) = 0;
      }
    }
    (**(code **)(local_84 + 8))(&local_84);
    func_004A6694(aiStack_98,*(int *)(param_1 + 0x24),local_80);
  }
  return;
}

