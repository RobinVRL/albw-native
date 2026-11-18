#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00537B38(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern int func_0058E2B8(int *param_1);
extern int func_0068C690(float *param_1);
extern int *DAT_001b0248;
extern int *DAT_001b024c;
extern uint *DAT_001b0250;
extern undefined4 *DAT_001b0254;
extern undefined4 DAT_001b0258;

// USA 001B00E4 <- EU 001B00E4 (Ghidra, non-matching)
// GLOBAL DAT_001b0248 int *
// GLOBAL DAT_001b024c int *
// GLOBAL DAT_001b0250 uint *
// GLOBAL DAT_001b0254 undefined4 *
// GLOBAL DAT_001b0258 undefined4

undefined4 func_001B00E4(int param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 ((int *)(albw_frame + 0xc))
  if (((*(char *)(param_1 + 0x910) == '\x04') && (uVar5 = func_0058AB74(param_1), (int)uVar5 != 0xe)
      ) && (uVar5 = func_0058AB74(param_1), (int)uVar5 != 0xd)) {
    return 0;
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    cVar1 = *(char *)(*(int *)(param_2 + 0x2c) + 1);
    if (cVar1 == '\x05') {
      iVar3 = func_00537B38(*DAT_001b0248);
      if (iVar3 == 3) {
        return 0;
      }
    }
    else if (cVar1 == '\n') {
      puVar2 = (undefined4 *)func_0052FBA0(*DAT_001b024c + 0x3dbbc,*(uint *)(param_2 + 0x28));
      if (((*DAT_001b0250 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_001b0250), iVar3 != 0)) {
        *DAT_001b0254 = DAT_001b0258;
      }
      if ((puVar2 == (undefined4 *)0x0) ||
         (iVar3 = (**(code **)*puVar2)(puVar2,DAT_001b0254), iVar3 == 0)) {
        puVar2 = (undefined4 *)0x0;
      }
      if (puVar2 != (undefined4 *)0x0) {
        local_20 = ALBW_AS_F32(puVar2[0xf4]);
        uStack_1c = puVar2[0xf5];
        uStack_18 = puVar2[0xf6];
        func_00115C70(&local_20,&local_20,(float *)(puVar2 + 0xda));
        local_14[0] = func_0068C690(&local_20);
        local_14[0] = local_14[0] - *(int *)(param_1 + 1000);
        uVar4 = func_0058E2B8(local_14);
        if (uVar4 < 0x40000000) {
          return 0;
        }
      }
    }
  }
  return 1;
}

