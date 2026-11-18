#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_004F7A60(int param_1,int param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0058E2B8(int *param_1);
extern int *DAT_00674c10;
extern uint *DAT_00674c14;
extern undefined4 DAT_00674c18;
extern undefined4 *DAT_00674c1c;
extern uint DAT_00674c20;

// USA 00674A78 <- EU 00674A50 (Ghidra, non-matching)
// GLOBAL DAT_00674c10 int *
// GLOBAL DAT_00674c14 uint *
// GLOBAL DAT_00674c18 undefined4
// GLOBAL DAT_00674c1c undefined4 *
// GLOBAL DAT_00674c20 uint

undefined4 func_00674A78(int param_1,int param_2)

{
  uint *puVar1;
  ushort uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 uVar7;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x18))
  #define fStack_24 (*(float *)(albw_frame + 0x1c))
  #define local_20 ((int *)(albw_frame + 0x20))
  if (*(char *)(param_1 + 0x98e) == '\0') {
    if ((*(char *)(param_1 + 0x910) == '\x01') &&
       (*(int *)(param_1 + 1000) == *(int *)(param_1 + 0x8dc))) {
      puVar3 = (undefined4 *)func_0052FBA0(*DAT_00674c10 + 0x3dbbc,*(uint *)(param_2 + 0x28));
      uVar7 = DAT_00674c18;
      puVar1 = DAT_00674c14;
      puVar5 = (uint *)*DAT_00674c14;
      if ((*DAT_00674c14 & 1) == 0) {
        iVar4 = func_00100174((int *)DAT_00674c14);
        puVar5 = (uint *)0x0;
        if (iVar4 != 0) {
          *DAT_00674c1c = uVar7;
          puVar5 = puVar1;
        }
      }
      if ((puVar3 == (undefined4 *)0x0) ||
         (puVar5 = (uint *)(**(code **)*puVar3)(puVar3,DAT_00674c1c), puVar5 == (uint *)0x0)) {
        puVar3 = (undefined4 *)0x0;
      }
      if (puVar3 != (undefined4 *)0x0) {
        puVar5 = (uint *)puVar3[0xe8];
      }
      if ((puVar3 != (undefined4 *)0x0 && puVar5 != (uint *)0x0) &&
         ((uVar2 = (ushort)puVar5[1] & 0xff, uVar2 == 1 || uVar2 == 2 || (uVar2 == 4 || uVar2 == 5))
         )) {
        if (((*puVar1 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_00674c14), iVar4 != 0)) {
          *DAT_00674c1c = uVar7;
        }
        iVar4 = (**(code **)*puVar3)(puVar3,DAT_00674c1c);
        if (iVar4 == 0) {
          puVar3 = (undefined4 *)0x0;
        }
        if (puVar3 != (undefined4 *)0x0) {
          func_00115C70(&local_2c,(float *)(puVar3 + 0xf4),(float *)(param_1 + 0x3d0));
          local_38 = local_2c;
          uStack_34 = uStack_28;
          local_30 = fStack_24;
          func_00115C70(&local_38,(float *)(puVar3 + 0xf4),(float *)(param_1 + 0x3d0));
          local_20[0] = func_004904CC(local_38,local_30);
          local_20[0] = local_20[0] - *(int *)(param_1 + 1000);
          uVar6 = func_0058E2B8(local_20);
          if (uVar6 <= DAT_00674c20) {
            *(undefined1 *)(param_1 + 0x98d) = 1;
          }
        }
      }
    }
    uVar7 = func_004F7A60(param_1,param_2);
    return uVar7;
  }
  return 0;
}

