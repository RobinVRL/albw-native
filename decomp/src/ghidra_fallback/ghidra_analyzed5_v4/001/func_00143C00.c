#include "ghidra_types.h"

extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C43E0(int param_1,int *param_2);
extern int func_00581D60(int param_1);
extern uint *DAT_00143cc4;
extern int *DAT_00143cc8;
extern int DAT_00143ccc;
extern int *DAT_00143cd0;

// USA 00143C00 <- EU 00143C00 (Ghidra, non-matching)
// GLOBAL DAT_00143cc4 uint *
// GLOBAL DAT_00143cc8 int *
// GLOBAL DAT_00143ccc int
// GLOBAL DAT_00143cd0 int *

undefined4 func_00143C00(int param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  _Alignas(8) unsigned char albw_frame[0x2f0];
  #define local_2f0 (*(int *)(albw_frame + 0x0))
  #define local_2ec (*(undefined4 *)(albw_frame + 0x4))
  #define local_2e8 (*(undefined4 *)(albw_frame + 0x8))
  #define local_2e4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_2d4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_2d0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2cc (*(undefined4 *)(albw_frame + 0x24))
  #define local_2c6 (*(undefined2 *)(albw_frame + 0x2a))
  #define local_2c4 (*(undefined2 *)(albw_frame + 0x2c))
  #define local_2a8 (*(undefined4 *)(albw_frame + 0x48))
  #define local_2a4 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_2a0 (*(undefined2 *)(albw_frame + 0x50))
  #define local_30 (*(undefined4 *)(albw_frame + 0x2c0))
  uVar7 = (ulonglong)*(uint *)(param_1 + 1000);
  local_2d0 = 0;
  local_2cc = 0;
  local_2d4 = 0;
  local_2a8 = 0;
  local_2a4 = 0;
  local_30 = 0;
  func_002DFF7C(&local_2f0);
  piVar4 = DAT_00143cd0;
  iVar3 = DAT_00143ccc;
  piVar2 = DAT_00143cc8;
  puVar1 = DAT_00143cc4;
  iVar6 = 0;
  do {
    local_2f0 = func_0019B04C(*puVar1);
    uVar5 = func_00581D60(*piVar2);
    local_2a0 = (undefined2)uVar5;
    local_2d0 = (undefined4)uVar7;
    local_2c4 = 1;
    local_2c6 = (undefined2)*(undefined4 *)(iVar3 + iVar6 * 4);
    local_2ec = *(undefined4 *)(param_1 + 0x3d0);
    local_2e8 = *(undefined4 *)(param_1 + 0x3d4);
    local_2e4 = *(undefined4 *)(param_1 + 0x3d8);
    local_2a4 = *(undefined4 *)(param_1 + 0x2cc);
    func_004C43E0(*piVar4,&local_2f0);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 3);
  return 1;
}

