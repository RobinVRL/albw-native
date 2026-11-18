#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00588BE4(int param_1);
extern int func_00659A54(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00195d94;
extern int DAT_00195d98;
extern uint *DAT_00195d9c;
extern int *DAT_00195da0;
extern undefined4 DAT_00195da4;
extern undefined4 *DAT_00195da8;
extern int *DAT_00195dac;
extern int DAT_00195db0;

// USA 00195C34 <- EU 00195C34 (Ghidra, non-matching)
// GLOBAL DAT_00195d94 int *
// GLOBAL DAT_00195d98 int
// GLOBAL DAT_00195d9c uint *
// GLOBAL DAT_00195da0 int *
// GLOBAL DAT_00195da4 undefined4
// GLOBAL DAT_00195da8 undefined4 *
// GLOBAL DAT_00195dac int *
// GLOBAL DAT_00195db0 int

undefined4 func_00195C34(undefined4 *param_1)

{
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_34 ((float *)(albw_frame + 0xc))
  #define local_2c (*(float *)(albw_frame + 0x14))
  uVar4 = DAT_00195da4;
  piVar3 = DAT_00195da0;
  puVar2 = DAT_00195d9c;
  bVar1 = false;
  puVar8 = *(undefined4 **)(DAT_00195d98 + *DAT_00195d94);
  puVar6 = *(undefined4 **)(*DAT_00195d94 + 0x3dbc0);
  if (puVar6 != puVar8) {
    do {
      puVar7 = (undefined4 *)*puVar6;
      if (((*puVar2 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_00195d9c), iVar5 != 0)) {
        *DAT_00195da8 = uVar4;
      }
      if ((puVar7 == (undefined4 *)0x0) ||
         (iVar5 = (**(code **)*puVar7)(puVar7,DAT_00195da8), iVar5 == 0)) {
        puVar7 = (undefined4 *)0x0;
      }
      if ((puVar7 != (undefined4 *)0x0 && puVar7 != param_1) &&
         (((iVar5 = func_00588BE4((int)puVar7), iVar5 == *piVar3 ||
           (iVar5 = func_00588BE4((int)puVar7), iVar5 == *DAT_00195dac)) &&
          (func_00115C70(local_34,(float *)(param_1 + 0xf4),(float *)(puVar7 + 0xf4)),
          (int)ALBW_AS_U32(SQRT(local_34[0] * local_34[0] + local_2c * local_2c)) <= DAT_00195db0)))) {
        bVar1 = true;
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 != puVar8);
    if (bVar1) {
      return func_00659A54(param_1 + 0x107,9);
    }
  }
  if ((uint)param_1[0x107] < (uint)param_1[0x112]) {
    return 0;
  }
  return func_00659A54(param_1 + 0x107,8);
}

