#include "ghidra_types.h"

extern int func_004C15EC(int param_1,uint *param_2);
extern int func_00520FC0(void);
extern int func_00556068(int param_1);
extern int func_005568E8(int param_1);
extern int *DAT_004c0320;
extern float DAT_004c0324;

// USA 004C01E4 <- EU 004C01BC (Ghidra, non-matching)
// GLOBAL DAT_004c0320 int *
// GLOBAL DAT_004c0324 float

undefined4 * func_004C01E4(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 ((uint *)(albw_frame + 0x0))
  puVar2 = (undefined4 *)0x0;
  if (param_1 != (undefined4 *)0xfffff8a4) {
    puVar2 = (undefined4 *)param_1[0x1dd];
    if (puVar2 == (undefined4 *)0x0 || puVar2 == param_1 + 0x1d7) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = func_00556068((int)puVar2);
    }
    puVar3 = (undefined4 *)param_1[0x204];
    fVar4 = DAT_004c0324;
    if (puVar3 == (undefined4 *)0x0) {
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = param_1;
        if (param_1[0xb3] != 0) goto code_r0x004c02a8;
      }
      else {
        local_20[0] = puVar2[0xb3];
        puVar2 = (undefined4 *)0x0;
        if (param_1[0xb3] != 0) {
          if ((local_20[0] != param_1[0xb3]) &&
             (uVar1 = func_005568E8(*DAT_004c0320), local_20[0] != uVar1)) {
            puVar2 = (undefined4 *)func_004C15EC((int)param_1,local_20);
            return puVar2;
          }
code_r0x004c02a8:
          puVar2 = (undefined4 *)func_00520FC0();
          param_1[0x1fb] = *puVar2;
          param_1[0x1fc] = puVar2[1];
          puVar2 = (undefined4 *)puVar2[2];
          param_1[0x1fd] = puVar2;
          param_1[0x1fc] = ALBW_AS_U32(ALBW_AS_F32(param_1[0x1fc]) + fVar4);
          return puVar2;
        }
      }
    }
    else {
      if (puVar3 == (undefined4 *)param_1[0xb3]) {
        if (puVar2 == (undefined4 *)0x0) {
          return (undefined4 *)0x0;
        }
      }
      else if ((puVar2 != (undefined4 *)0x0) &&
              (puVar2 = (undefined4 *)puVar2[0xb3], puVar2 == puVar3)) {
        uVar1 = func_005568E8(*DAT_004c0320);
        if (param_1[0x204] != uVar1) {
          puVar2 = (undefined4 *)func_004C15EC((int)param_1,param_1 + 0x204);
          return puVar2;
        }
        goto code_r0x004c02a8;
      }
      param_1[0x204] = 0;
    }
  }
  return puVar2;
}

