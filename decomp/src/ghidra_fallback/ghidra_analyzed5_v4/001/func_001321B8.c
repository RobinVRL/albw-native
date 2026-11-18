#include "ghidra_types.h"

extern int func_0012FC20(int param_1,int param_2,uint param_3);
extern int func_001309A4(int param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_00130C1C(int param_1,undefined4 *param_2,undefined4 *param_3,int *param_4);
extern int func_002FE918(int param_1);
extern int func_003C1C74(int param_1);
extern int func_003CC054(int *param_1,int param_2);
extern int func_003CC124(undefined4 *param_1,undefined4 param_2);
extern int func_0057D5C4(int *param_1);
extern int func_005FFDC0(void);
extern int func_005FFF7C(undefined4 param_1);
extern int func_006003D8(undefined4 param_1,int *param_2);
extern int func_00601378(int param_1);
extern int DAT_0013237c;
extern int DAT_00132380;

// USA 001321B8 <- EU 001321B8 (Ghidra, non-matching)
// GLOBAL DAT_0013237c int
// GLOBAL DAT_00132380 int

undefined1 * func_001321B8(int param_1,int param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(int *)(albw_frame + 0xc))
  #define local_28 (*(int *)(albw_frame + 0x18))
  #define local_24 (*(int *)(albw_frame + 0x1c))
  #define local_20 (*(int *)(albw_frame + 0x20))
  iVar5 = 0;
  piVar1 = (int *)(param_1 + 0x2c20);
  if (param_2 != 0) {
    if (param_2 != 1) {
      if (param_2 == 2) {
        *(undefined4 *)(param_1 + 0x4c) = 0;
        iVar5 = DAT_0013237c;
        iVar3 = *(int *)(param_1 + 0x28dc);
        if ((*(uint *)(iVar3 + 0x2c8) & 1) == 0) {
          iVar3 = iVar3 + 0x10;
        }
        else {
          iVar3 = iVar3 + 400;
        }
        *(int *)(param_1 + 0x20) = iVar3 + 4;
        *(int *)(iVar5 + param_1) = param_1 + 0x2898;
        if (*(int *)(param_1 + 0x28a0) == 0) {
          return (undefined1 *)0x0;
        }
        if ((*(byte *)(DAT_00132380 + param_1) & 2) != 0) {
          return (undefined1 *)(uint)*(byte *)(DAT_00132380 + param_1);
        }
        func_005FFDC0();
        func_006003D8(0x208,&local_24);
        func_003CC124(&local_38,local_24);
        func_0012FC20(param_1,2,0);
        piVar1 = func_0057D5C4(*(int **)(param_1 + 0x29fc));
        func_00130C1C(param_1,(undefined4 *)(*(int *)(param_1 + 0x29f8) + 4),piVar1,&local_38);
        func_001309A4(param_1,&local_38,*(int *)(param_1 + 0x28dc),1);
        uVar4 = local_38 - local_34 & 0xfffffffc;
        if (uVar4 == 0) {
          return (undefined1 *)&local_38;
        }
        func_00601378(uVar4);
        if (local_28 != 0) {
          func_005FFF7C(local_28);
        }
        func_006003D8(0x208,&local_20);
        func_003CC054(&local_38,local_20);
        return (undefined1 *)&local_38;
      }
      goto LAB_001321fc;
    }
    piVar1 = (int *)(param_1 + 0x2c24);
  }
  iVar5 = *piVar1;
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x40);
LAB_001321fc:
  func_0012FC20(param_1,param_2,0);
  piVar1 = func_0057D5C4(*(int **)(param_1 + 0x29fc));
  func_00130C1C(param_1,(undefined4 *)(*(int *)(param_1 + 0x29f8) + 4),piVar1,(int *)0x0);
  if (*(char *)(*(int *)(param_1 + 0x4c) + 0x47) == '\0') {
    return (undefined1 *)0x0;
  }
  if (iVar5 != 0) {
    func_003C1C74(iVar5);
  }
  puVar2 = (undefined1 *)func_002FE918(*(int *)(param_1 + 0x4c));
  return puVar2;
}

