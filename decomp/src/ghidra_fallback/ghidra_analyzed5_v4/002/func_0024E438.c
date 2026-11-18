#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D88(float *param_1,float *param_2,float fparam_0);
extern int func_0052FBA0(int param_1,uint param_2);
extern float DAT_0024e5a8;
extern int *DAT_0024e5ac;
extern undefined4 DAT_0024e5b0;
extern uint *DAT_0024e5b4;
extern undefined4 *DAT_0024e5b8;

// USA 0024E438 <- EU 0024E438 (Ghidra, non-matching)
// GLOBAL DAT_0024e5a8 float
// GLOBAL DAT_0024e5ac int *
// GLOBAL DAT_0024e5b0 undefined4
// GLOBAL DAT_0024e5b4 uint *
// GLOBAL DAT_0024e5b8 undefined4 *

int func_0024E438(int param_1,undefined4 *param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint in_fpscr;
  float fparam_0;
  ulonglong uVar9;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_5c (*(float *)(albw_frame + 0x4))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x8))
  #define local_54 (*(undefined4 *)(albw_frame + 0xc))
  #define local_4c (*(float *)(albw_frame + 0x14))
  #define local_48 (*(float *)(albw_frame + 0x18))
  #define local_44 (*(float *)(albw_frame + 0x1c))
  piVar1 = DAT_0024e5ac;
  iVar7 = 0;
  iVar6 = 0;
  uVar9 = (ulonglong)(uint)ALBW_AS_U32(DAT_0024e5a8);
  iVar8 = 0;
  local_4c = DAT_0024e5a8;
  local_48 = DAT_0024e5a8;
  local_44 = DAT_0024e5a8;
  local_54 = DAT_0024e5b0;
  do {
    puVar2 = (uint *)(param_1 + iVar6 * 4);
    uVar5 = *puVar2;
    if (uVar5 == 0) {
      if (iVar8 == 0) {
        *puVar2 = param_2[0xb3];
        iVar8 = 1;
        puVar3 = param_2;
        goto LAB_0024e540;
      }
    }
    else {
      puVar3 = (undefined4 *)func_0052FBA0(*piVar1 + 0x3dbbc,uVar5);
      if (((*DAT_0024e5b4 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_0024e5b4), iVar4 != 0)) {
        *DAT_0024e5b8 = local_54;
      }
      if ((puVar3 == (undefined4 *)0x0) ||
         (iVar4 = (**(code **)*puVar3)(puVar3,DAT_0024e5b8), iVar4 == 0)) {
        puVar3 = (undefined4 *)0x0;
      }
      if (puVar3 == (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + iVar6 * 4) = 0;
      }
      else {
LAB_0024e540:
        iVar7 = iVar7 + 1;
        func_00115C54(&local_4c,&local_4c,(float *)(puVar3 + 0xf4));
      }
    }
    iVar6 = iVar6 + 1;
    if (iVar6 == 6) {
      if (iVar8 != 0) {
        local_48 = ALBW_AS_F32(uVar9);
        fparam_0 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
        func_00115D88(&local_5c,&local_4c,fparam_0);
        *(float *)(param_1 + 0x18) = local_5c;
        *(undefined4 *)(param_1 + 0x1c) = uStack_58;
        *(undefined4 *)(param_1 + 0x20) = local_54;
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      }
      return iVar8;
    }
  } while( true );
}

