#include "ghidra_types.h"

extern int func_0011EB7C(int param_1,int *param_2);
extern int func_00582858(uint *param_1,uint param_2);
extern int func_00582888(int param_1,uint param_2);
extern int func_0069149C(undefined4 param_1,int param_2,int *param_3,uint param_4);
extern int DAT_00582828;
extern int DAT_0058282c;

// USA 005826A4 <- EU 0058267C (Ghidra, non-matching)
// GLOBAL DAT_00582828 int
// GLOBAL DAT_0058282c int

undefined4 func_005826A4(int param_1,int *param_2,int *param_3,int *param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  bool bVar8;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(int *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(int *)(albw_frame + 0x14))
  iVar4 = DAT_0058282c;
  iVar3 = DAT_00582828;
  if ((*(char *)param_4[1] == '\0') || (*(char *)param_3[1] == '\0' || param_2 == (int *)0x0)) {
    return 0;
  }
  piVar6 = param_4;
  if (*(int *)(param_1 + 0x54) == 0) {
LAB_00582748:
    iVar5 = func_0069149C(param_1 + 0x38,*(int *)(param_1 + 0x38),param_3,(uint)piVar6);
    if (iVar5 == 0) {
      puVar7 = (uint *)0x0;
      goto LAB_005826ec;
    }
    puVar1 = (undefined4 *)(iVar5 + 0x18);
    if (puVar1 != (undefined4 *)0x0) goto LAB_005826e8;
  }
  else {
    puVar1 = (undefined4 *)
             func_0069149C(param_1 + 0x4c,*(int *)(param_1 + 0x4c),param_3,(uint)param_4);
    bVar8 = puVar1 == (undefined4 *)0x0;
    if (!bVar8) {
      puVar1 = puVar1 + 6;
      bVar8 = puVar1 == (undefined4 *)0x0;
    }
    if (bVar8) goto LAB_00582748;
LAB_005826e8:
    puVar7 = (uint *)*puVar1;
LAB_005826ec:
    if (puVar7 != (uint *)0x0) {
      uVar2 = func_0011EB7C((int)puVar7,param_4);
      if (-1 < (int)uVar2) {
        iVar3 = func_00582888((int)puVar7,uVar2);
        iVar4 = func_00582858(puVar7,uVar2);
        param_2[3] = uVar2;
        *param_2 = iVar4;
        param_2[1] = (int)puVar7;
        param_2[2] = iVar3;
        return 1;
      }
      local_2c = *(int *)(iVar3 + 8);
      local_30 = iVar4;
      *param_2 = local_2c;
      (**(code **)(iVar4 + 8))(&local_30);
      iVar3 = 0;
      do {
        if (*(short *)(local_2c + iVar3 * 2) == 0) goto joined_r0x00582810;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x40001);
      goto LAB_005827bc;
    }
  }
  local_34 = *(int *)(iVar3 + 0xc);
  local_38 = iVar4;
  *param_2 = local_34;
  (**(code **)(iVar4 + 8))(&local_38);
  iVar3 = 0;
  do {
    if (*(short *)(local_34 + iVar3 * 2) == 0) goto joined_r0x00582810;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x40001);
LAB_005827bc:
  iVar3 = 0;
LAB_00582814:
  param_2[2] = iVar3 << 1;
  return 0;
joined_r0x00582810:
  if (iVar3 < 0x40001) goto LAB_00582814;
  goto LAB_005827bc;
}

