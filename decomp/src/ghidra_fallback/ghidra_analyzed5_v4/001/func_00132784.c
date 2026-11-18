#include "ghidra_types.h"

extern int func_0012FC20(int param_1,int param_2,uint param_3);
extern int func_001309A4(int param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_00130C1C(int param_1,undefined4 *param_2,undefined4 *param_3,int *param_4);
extern int func_0016AA24(int param_1);
extern int func_0016C058(int param_1,uint param_2);
extern int func_002FE918(int param_1);
extern int func_003CC054(int *param_1,int param_2);
extern int func_003CC124(undefined4 *param_1,undefined4 param_2);
extern int func_0057D5C4(int *param_1);
extern int func_005FFBDC(int param_1);
extern int func_005FFDC0(void);
extern int func_005FFF7C(undefined4 param_1);
extern int func_006003D8(undefined4 param_1,int *param_2);
extern int func_00601378(int param_1);
extern int *DAT_001329a0;
extern undefined4 DAT_001329a4;
extern int DAT_001329a8;
extern int DAT_001329ac;
extern int DAT_001329b0;

// USA 00132784 <- EU 00132784 (Ghidra, non-matching)
// GLOBAL DAT_001329a0 int *
// GLOBAL DAT_001329a4 undefined4
// GLOBAL DAT_001329a8 int
// GLOBAL DAT_001329ac int
// GLOBAL DAT_001329b0 int

undefined1 * func_00132784(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define local_3c (*(int *)(albw_frame + 0x4))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(int *)(albw_frame + 0x14))
  #define local_28 ((int *)(albw_frame + 0x18))
  piVar1 = DAT_001329a0;
  if (param_2 != 2) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x48);
    puVar3 = (undefined1 *)0x0;
    if (*(char *)(*(int *)(param_1 + 0x48) + 0x47) != '\0') {
      func_006003D8(0x208,&local_40);
      func_0012FC20(param_1,param_2,2);
      piVar2 = func_0057D5C4(*(int **)(param_1 + 0x29fc));
      func_00130C1C(param_1,(undefined4 *)(*(int *)(param_1 + 0x29f8) + 4),piVar2,(int *)0x0);
      puVar3 = (undefined1 *)func_002FE918(*(int *)(param_1 + 0x4c));
    }
    if (param_2 == 0) {
      func_006003D8(DAT_001329a4,&local_40);
      *(int *)(*(int *)(*piVar1 + 0x74) + *(int *)(*(int *)(*piVar1 + 0x74) + 0x48) * 0x20 + 0x20) =
           local_40;
      puVar3 = (undefined1 *)func_005FFBDC(local_40);
    }
    return puVar3;
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  iVar4 = DAT_001329ac;
  piVar2 = *(int **)(DAT_001329a8 + param_1);
  if ((piVar2[0xb2] & 1U) == 0) {
    piVar6 = piVar2 + 4;
  }
  else {
    piVar6 = piVar2 + 100;
  }
  *(int **)(param_1 + 0x20) = piVar6 + 1;
  *(int *)(iVar4 + param_1) = param_1 + 0x28bc;
  if ((*(int *)(param_1 + 0x28c4) != 0) && ((*(byte *)(DAT_001329b0 + param_1) & 0x20) == 0)) {
    iVar4 = (**(code **)(*piVar2 + 0x18))(piVar2,1);
    func_0016C058(*piVar1,iVar4 + 4);
    func_005FFDC0();
    func_006003D8(0x208,&local_2c);
    func_003CC124(&local_40,local_2c);
    func_0012FC20(param_1,2,2);
    piVar2 = func_0057D5C4(*(int **)(param_1 + 0x29fc));
    func_00130C1C(param_1,(undefined4 *)(*(int *)(param_1 + 0x29f8) + 4),piVar2,&local_40);
    func_001309A4(param_1,&local_40,*(undefined4 *)(param_1 + 0x28dc),5);
    uVar5 = local_40 - local_3c & 0xfffffffc;
    if (uVar5 != 0) {
      func_00601378(uVar5);
      if (local_30 != 0) {
        func_005FFF7C(local_30);
      }
      func_006003D8(0x208,local_28);
      func_003CC054(&local_40,local_28[0]);
    }
    func_0016AA24(*piVar1);
    return (undefined1 *)&local_40;
  }
  puVar3 = func_0016AA24(*piVar1);
  return puVar3;
}

