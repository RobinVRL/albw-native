#include "ghidra_types.h"

extern int func_00170378(int param_1,int *param_2,int *param_3,undefined4 *param_4);
extern int func_00170558(int param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_001708A0(int param_1,int *param_2,int param_3);
extern int func_003CC1E4(undefined4 *param_1,uint param_2);
extern int func_003CC230(uint *param_1,undefined4 *param_2,int param_3,uint param_4);
extern int func_005234B8(int param_1,uint param_2);
extern float DAT_00330d54;
extern int *DAT_00330d58;

// USA 00330B40 <- EU 00330B1C (Ghidra, non-matching)
// GLOBAL DAT_00330d54 float
// GLOBAL DAT_00330d58 int *

undefined4 func_00330B40(int param_1,uint param_2,int *param_3,uint param_4)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  ushort *puVar10;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(uint *)(albw_frame + 0x0))
  local_20 = param_4;
  if ((param_2 != 0) &&
     (((iVar3 = func_005234B8(param_1,param_2), iVar3 == 0 || (*(char *)(param_1 + 0xb0) != '\0'))
      || (*(float *)(*(int *)(param_1 + 0x8c) + 0x154) <= DAT_00330d54)))) {
    return 0;
  }
  piVar2 = DAT_00330d58;
  if (*(int *)(*(int *)(param_1 + 0x8c) + 0x154) == 0x3f800000) {
    uVar6 = 1;
    func_001708A0(param_1,param_3,1);
  }
  else {
    if (*(char *)(param_1 + 0xb1) == '\0') {
      iVar3 = *DAT_00330d58;
      puVar9 = *(undefined4 **)(iVar3 + 0x20);
      func_00170378(param_1,param_3,(int *)(iVar3 + 0x14),puVar9);
      uVar7 = 0;
      if (*(int *)(*(int *)(*piVar2 + 0x2be4) + 0x5c) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = **(int **)(*(int *)(*piVar2 + 0x2be4) + 100);
      }
      func_001708A0(iVar5,param_3,0);
      func_00170558(param_1,param_3,uVar7,(int)puVar9);
      if (*(int *)(*(int *)(*piVar2 + 0x2be4) + 0x5c) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = **(undefined4 **)(*(int *)(*piVar2 + 0x2be4) + 100);
      }
      *(undefined4 *)(iVar3 + 0x1c) = uVar7;
      return 0;
    }
    uVar6 = 1;
    puVar10 = (ushort *)
              (**(int **)(*(int *)(param_1 + 0x8c) + 0x20) +
              (uint)**(ushort **)(param_1 + 0x90) * 0x154);
    uVar1 = *puVar10;
    *puVar10 = uVar1 & 0xfffe;
    func_001708A0(param_1,param_3,1);
    if ((uVar1 & 1) != 0) {
      *puVar10 = *puVar10 | 1;
    }
    if ((uVar1 & 0x100) != 0) {
      *puVar10 = *puVar10 | 0x100;
    }
    iVar3 = *(int *)(*piVar2 + 0x2bf0);
    uVar8 = *(int *)(*piVar2 + 0x2bf4) << 2;
    if (iVar3 != 0) {
      puVar4 = func_003CC1E4((undefined4 *)*param_3,(*param_3 - param_3[2] & 0xfffffffcU) + 0x18);
      *param_3 = (int)puVar4;
      puVar4 = func_003CC230(puVar4,&local_20,iVar3,uVar8);
      *param_3 = (int)puVar4;
      if ((uint *)param_3[3] != (uint *)0x0) {
        *(uint *)param_3[3] = (uint)((int)puVar4 - param_3[2]) >> 3;
      }
      param_3[2] = *param_3;
      param_3[3] = local_20;
      uVar6 = local_20;
      param_4 = uVar8;
      if (param_3[4] == 0) {
        param_3[4] = *param_3 - param_3[1] & 0xfffffffc;
      }
    }
  }
  func_00170558(param_1,param_3,uVar6,param_4);
  return 1;
}

