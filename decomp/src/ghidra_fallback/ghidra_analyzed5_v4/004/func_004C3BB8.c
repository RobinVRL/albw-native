#include "ghidra_types.h"

extern undefined8 func_0010E3B0(int param_1,uint *param_2);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00320B74(int *param_1);
extern int func_00320DB0(uint *param_1);
extern int func_004A143C(byte *param_1,uint param_2);
extern ulonglong func_004AD77C(int param_1);
extern int func_00584740(int param_1,int param_2);
extern undefined8 func_0058D59C(int param_1,uint *param_2);
extern undefined8 func_0058E26C(int param_1,uint *param_2);
extern int *DAT_004c3d74;
extern int *DAT_004c3d78;
extern int *DAT_004c3d7c;
extern int *DAT_004c3d80;
extern int *DAT_004c3d84;
extern int *DAT_004c3d88;
extern int *DAT_004c3d8c;
extern int *DAT_004c3d90;
extern uint DAT_004c3d94;

// USA 004C3BB8 <- EU 004C3B90 (Ghidra, non-matching)
// GLOBAL DAT_004c3d74 int *
// GLOBAL DAT_004c3d78 int *
// GLOBAL DAT_004c3d7c int *
// GLOBAL DAT_004c3d80 int *
// GLOBAL DAT_004c3d84 int *
// GLOBAL DAT_004c3d88 int *
// GLOBAL DAT_004c3d8c int *
// GLOBAL DAT_004c3d90 int *
// GLOBAL DAT_004c3d94 uint

undefined4 func_004C3BB8(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  
  if (((*(char *)(*DAT_004c3d74 + 0x25) == '\0') && (iVar2 = *DAT_004c3d78, iVar2 != 0)) &&
     (*(char *)(iVar2 + 0x18) < ' ')) {
    func_0010E3C4((uint *)(*(int *)(param_1 + 0x14) + 0x40),(uint *)(*DAT_004c3d7c + 0x48),0x80);
    func_0058D59C(*DAT_004c3d80,(uint *)(*(int *)(param_1 + 0x14) + 0xc0));
    if (*DAT_004c3d84 != 0) {
      func_00584740(*DAT_004c3d84,*(int *)(param_1 + 0x14) + 0x260);
    }
    if (*DAT_004c3d88 != 0) {
      func_0058E26C(*DAT_004c3d88,(uint *)(*(int *)(param_1 + 0x14) + 0x360));
    }
    if (*DAT_004c3d8c != 0) {
      func_0010E3B0(*DAT_004c3d8c,(uint *)(*(int *)(param_1 + 0x14) + 0xd80));
    }
    piVar5 = DAT_004c3d90;
    func_004AD77C(*DAT_004c3d90);
    func_0010E3C4((uint *)(*(int *)(param_1 + 0x14) + 0x560),(uint *)(param_1 + 0x18),0x800);
    **(int **)(param_1 + 0x14) = (int)*(char *)(iVar2 + 0x18);
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = *(undefined4 *)(iVar2 + 0x1c);
    *(int *)(*(int *)(param_1 + 0x14) + 8) = param_2;
    piVar5 = *(int **)(*(int *)(*piVar5 + 0x38) + param_2 * 0x28 + 0xe60);
    if (piVar5 != (int *)0x0) {
      iVar2 = *(int *)(param_1 + 0x14);
      (**(code **)(*piVar5 + 8))(piVar5);
      uVar3 = 0;
      do {
        if (*(char *)(piVar5[1] + uVar3) == '\0') {
          if (((int)uVar3 < 0x40001) && (uVar3 - 1 < 0x33)) {
            (**(code **)(*piVar5 + 8))(piVar5);
            func_0010E3C4((uint *)(iVar2 + 0xc),(uint *)piVar5[1],uVar3);
            *(undefined1 *)(iVar2 + uVar3 + 0xc) = 0;
            goto LAB_004c3d34;
          }
          break;
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < 0x40001);
      *(undefined1 *)(iVar2 + 0xc) = 0;
    }
LAB_004c3d34:
    func_00320B74(*(int **)(param_1 + 0x14));
    func_00320DB0((uint *)(*(int *)(param_1 + 0x14) + 0xd60));
    pbVar1 = *(byte **)(param_1 + 0x14);
    uVar4 = *(uint *)(pbVar1 + 0xdfc);
    uVar3 = func_004A143C(pbVar1,DAT_004c3d94);
    *(uint *)(pbVar1 + 0xdfc) = uVar3;
    if (uVar3 != uVar4) {
      return 1;
    }
  }
  return 0;
}

