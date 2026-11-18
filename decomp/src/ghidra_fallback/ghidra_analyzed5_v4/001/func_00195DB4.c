#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00588BE4(int param_1);
extern int func_00659A54(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_00195f44;
extern float DAT_00195f48;
extern int DAT_00195f4c;
extern float DAT_00195f50;
extern int *DAT_00195f54;
extern int DAT_00195f58;
extern uint *DAT_00195f5c;
extern int *DAT_00195f60;
extern undefined4 DAT_00195f64;
extern undefined4 *DAT_00195f68;
extern int *DAT_00195f6c;
extern int DAT_00195f70;

// USA 00195DB4 <- EU 00195DB4 (Ghidra, non-matching)
// GLOBAL DAT_00195f44 undefined4
// GLOBAL DAT_00195f48 float
// GLOBAL DAT_00195f4c int
// GLOBAL DAT_00195f50 float
// GLOBAL DAT_00195f54 int *
// GLOBAL DAT_00195f58 int
// GLOBAL DAT_00195f5c uint *
// GLOBAL DAT_00195f60 int *
// GLOBAL DAT_00195f64 undefined4
// GLOBAL DAT_00195f68 undefined4 *
// GLOBAL DAT_00195f6c int *
// GLOBAL DAT_00195f70 int

undefined4 func_00195DB4(undefined4 *param_1)

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
  *(undefined4 *)(*(int *)(param_1[0x104] + 0x14) + 0x10) = DAT_00195f44;
  func_0014FAFC((int)param_1,param_1[0xfa],DAT_00195f48);
  func_0051D2F4(param_1 + 0xfa,param_1[0x117],1,DAT_00195f4c,DAT_00195f50);
  uVar4 = DAT_00195f64;
  piVar3 = DAT_00195f60;
  puVar2 = DAT_00195f5c;
  bVar1 = false;
  puVar8 = *(undefined4 **)(DAT_00195f58 + *DAT_00195f54);
  puVar6 = *(undefined4 **)(*DAT_00195f54 + 0x3dbc0);
  if (puVar6 != puVar8) {
    do {
      puVar7 = (undefined4 *)*puVar6;
      if (((*puVar2 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_00195f5c), iVar5 != 0)) {
        *DAT_00195f68 = uVar4;
      }
      if ((puVar7 == (undefined4 *)0x0) ||
         (iVar5 = (**(code **)*puVar7)(puVar7,DAT_00195f68), iVar5 == 0)) {
        puVar7 = (undefined4 *)0x0;
      }
      if ((puVar7 != (undefined4 *)0x0 && puVar7 != param_1) &&
         (((iVar5 = func_00588BE4((int)puVar7), iVar5 == *piVar3 ||
           (iVar5 = func_00588BE4((int)puVar7), iVar5 == *DAT_00195f6c)) &&
          (func_00115C70(local_34,(float *)(param_1 + 0xf4),(float *)(puVar7 + 0xf4)),
          (int)ALBW_AS_U32(SQRT(local_34[0] * local_34[0] + local_2c * local_2c)) <= DAT_00195f70)))) {
        bVar1 = true;
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 != puVar8);
    if (bVar1) goto LAB_00195f18;
  }
  if ((uint)param_1[0x107] < (uint)param_1[0x112]) {
    return 0;
  }
LAB_00195f18:
  return func_00659A54(param_1 + 0x107,7);
}

