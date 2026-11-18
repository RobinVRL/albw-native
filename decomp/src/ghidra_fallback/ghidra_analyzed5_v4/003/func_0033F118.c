#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_0034C8F0(uint *param_1,int param_2,int param_3);
extern int func_004FA8A0(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int func_006661D4(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0033f2e8;
extern int *DAT_0033f2ec;
extern uint *DAT_0033f2f0;
extern undefined4 *DAT_0033f2f4;
extern undefined4 DAT_0033f2f8;
extern int DAT_0033f2fc;
extern float DAT_0033f300;
extern undefined4 DAT_0033f304;
extern float DAT_0033f308;
extern float DAT_0033f30c;

// USA 0033F118 <- EU 0033F0F4 (Ghidra, non-matching)
// GLOBAL DAT_0033f2e8 int *
// GLOBAL DAT_0033f2ec int *
// GLOBAL DAT_0033f2f0 uint *
// GLOBAL DAT_0033f2f4 undefined4 *
// GLOBAL DAT_0033f2f8 undefined4
// GLOBAL DAT_0033f2fc int
// GLOBAL DAT_0033f300 float
// GLOBAL DAT_0033f304 undefined4
// GLOBAL DAT_0033f308 float
// GLOBAL DAT_0033f30c float

undefined4 func_0033F118(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  if (*(char *)(param_1 + 0x2d7) == '\0') {
    puVar1 = (undefined4 *)func_0052FBA0(*DAT_0033f2e8 + 0x3dbbc,*(uint *)(param_2 + 0x28));
    if ((((puVar1 != (undefined4 *)0x0) && (puVar1[0xb4] != 0)) &&
        (*(int *)(puVar1[0xb4] + 8) == *DAT_0033f2ec)) && (*(char *)(param_1 + 0x45c) == '\0')) {
      if (((*DAT_0033f2f0 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_0033f2f0), iVar2 != 0)) {
        *DAT_0033f2f4 = DAT_0033f2f8;
      }
      iVar2 = (**(code **)*puVar1)(puVar1,DAT_0033f2f4);
      if (iVar2 == 0) {
        puVar1 = (undefined4 *)0x0;
      }
      if (puVar1 != (undefined4 *)0x0) {
        local_28 = ALBW_AS_F32(puVar1[0xf7]);
        local_24 = puVar1[0xf8];
        local_20 = ALBW_AS_F32(puVar1[0xf9]);
        if ((int)ALBW_AS_U32((local_28 * local_28 + local_20 * local_20)) < DAT_0033f2fc) {
          func_00115C70(&local_28,(float *)(param_1 + 0x3d0),(float *)(puVar1 + 0xf4));
          func_00115DC8(&local_28);
          func_00115D70(&local_28,&local_28,DAT_0033f300);
        }
        uVar3 = DAT_0033f304;
        *(float *)(param_1 + 0x4a4) = local_28;
        *(undefined4 *)(param_1 + 0x4a8) = local_24;
        *(float *)(param_1 + 0x4ac) = local_20;
        *(undefined4 *)(param_1 + 0x4a8) = uVar3;
        func_00115DC8((float *)(param_1 + 0x4a4));
        func_00115D70((float *)(param_1 + 0x3dc),&local_28,DAT_0033f308);
        *(undefined4 *)(param_1 + 0x3e0) = uVar3;
        func_00115D70(&local_28,&local_28,DAT_0033f30c);
        puVar1[0xf7] = ALBW_AS_U32(local_28);
        puVar1[0xf8] = local_24;
        puVar1[0xf9] = ALBW_AS_U32(local_20);
        puVar1[0x13f] = uVar3;
        func_00588C14(param_1,0,1);
        func_006661D4((undefined4 *)(param_1 + 0x458),1);
        return 1;
      }
    }
    iVar2 = func_0034C8F0(*(uint **)(param_1 + 0x41c),*(int *)(param_1 + 0x3a0),param_2);
    if ((iVar2 != 0) && (iVar2 = func_004FA8A0(param_2), iVar2 != 0)) {
      return 1;
    }
  }
  return 0;
}

