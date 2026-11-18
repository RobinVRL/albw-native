#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_0048C3DC(uint *param_1,uint *param_2);
extern int func_004BC61C(int *param_1);
extern int func_004C43E0(int param_1,int *param_2);
extern int func_00581B9C(int param_1);
extern int func_00581D60(int param_1);
extern int func_00582250(int param_1);
extern int *DAT_003731f4;
extern uint *DAT_003731f8;
extern int *DAT_003731fc;
extern int *DAT_00373200;

// USA 0037307C <- EU 00373058 (Ghidra, non-matching)
// GLOBAL DAT_003731f4 int *
// GLOBAL DAT_003731f8 uint *
// GLOBAL DAT_003731fc int *
// GLOBAL DAT_00373200 int *

void func_0037307C(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  _Alignas(8) unsigned char albw_frame[0x2e0];
  #define local_2e0 (*(int *)(albw_frame + 0x0))
  #define local_2dc (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_2d8 (*(undefined4 *)(albw_frame + 0x8))
  #define local_2d4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_2c4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_2c0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2bc (*(undefined4 *)(albw_frame + 0x24))
  #define local_2b8 (*(undefined2 *)(albw_frame + 0x28))
  #define local_298 (*(undefined4 *)(albw_frame + 0x48))
  #define local_294 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_290 (*(undefined2 *)(albw_frame + 0x50))
  #define local_20 (*(undefined4 *)(albw_frame + 0x2c0))
  func_004BC61C(param_1);
  (**(code **)(*param_1 + 0xb0))(param_1);
  (**(code **)(*param_1 + 0xb4))(param_1);
  if (param_1[0x26c] == 2) {
    uVar8 = func_00111A64((uint *)(*DAT_003731f4 + 0x660));
    bVar9 = (uVar8 & 1) != 0;
    uVar8 = 0;
    if (bVar9) {
      uVar8 = param_1[0x26c];
    }
    if ((bVar9 && uVar8 != 0) && 1 < uVar8) {
      puVar4 = (undefined4 *)param_1[0x26e];
      uVar2 = puVar4[1];
      puVar4[1] = *puVar4;
      *(undefined4 *)param_1[0x26e] = uVar2;
    }
  }
  else {
    func_0048C3DC((uint *)(param_1 + 0x26c),(uint *)(*DAT_003731f4 + 0x660));
  }
  local_2c0 = 0;
  local_2bc = 0;
  local_2c4 = 0;
  local_298 = 0;
  local_294 = 0;
  local_20 = 0;
  func_002DFF7C(&local_2e0);
  local_2e0 = func_0019B04C(*DAT_003731f8);
  piVar1 = DAT_003731fc;
  uVar2 = func_00581D60(*DAT_003731fc);
  local_290 = (undefined2)uVar2;
  local_2c0 = 0;
  iVar7 = *piVar1;
  iVar3 = func_00581B9C(iVar7);
  if (((iVar3 == 1) && (piVar5 = (int *)func_00582250(iVar7), piVar1 = DAT_00373200, *piVar5 != 0))
     && (iVar3 = *(int *)piVar5[2], iVar3 != 0)) {
    iVar7 = param_1[0x26c];
    uVar8 = 0;
    if (0 < iVar7) {
      do {
        if ((((int)uVar8 < (int)*(uint *)(iVar3 + 0x20)) &&
            (*(int *)(iVar3 + 0x28) != 0 && uVar8 < *(uint *)(iVar3 + 0x20))) &&
           (iVar6 = *(int *)(*(int *)(iVar3 + 0x28) + uVar8 * 4), iVar6 != 0)) {
          local_2d4 = *(undefined4 *)(iVar6 + 0x20);
          local_2dc = *(undefined4 *)(iVar6 + 0x18);
          uStack_2d8 = *(undefined4 *)(iVar6 + 0x1c);
          local_2b8 = (undefined2)uVar8;
          func_004C43E0(*piVar1,&local_2e0);
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < iVar7);
    }
  }
  if (param_1[0x1e3] != 0) {
    func_00151148(param_1[0x1e3],1);
  }
  return;
}

