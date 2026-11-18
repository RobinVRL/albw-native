/* compilefix: func_004DF62C, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/004/func_004DF62C.c): 2 runtime type check(s) given
 * back their type-descriptor argument r1 (tools/rtti_arg_fix.py, BOOT_LOG 159). */
#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001212EC(int param_1,int *param_2,int param_3,int param_4);
extern int func_002CEF40(int param_1,int param_2);
extern void func_004AD9E8(int param_1,uint param_2,uint param_3,uint param_4,float fparam_0);
extern int func_004DE3E0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,float fparam_0);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern undefined4 DAT_004df844;
extern int *DAT_004df848;
extern undefined4 *DAT_004df84c;
extern uint *DAT_004df850;
extern float DAT_004df854;
extern int *DAT_004df858;
extern int DAT_004df85c;
extern undefined4 *DAT_004df860;
extern int *DAT_004df864;

// USA 004DF62C <- EU 004DF604 (Ghidra, non-matching)
// GLOBAL DAT_004df844 undefined4
// GLOBAL DAT_004df848 int *
// GLOBAL DAT_004df84c undefined4 *
// GLOBAL DAT_004df850 uint *
// GLOBAL DAT_004df854 float
// GLOBAL DAT_004df858 int *
// GLOBAL DAT_004df85c int
// GLOBAL DAT_004df860 undefined4 *
// GLOBAL DAT_004df864 int *

undefined4 func_004DF62C(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  float in_s0;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define auStack_58 ((undefined4 *)(albw_frame + 0x8))
  #define local_2e (*(ushort *)(albw_frame + 0x32))
  fVar7 = DAT_004df854;
  puVar3 = DAT_004df850;
  puVar5 = DAT_004df84c;
  piVar2 = DAT_004df848;
  uVar1 = DAT_004df844;
  puVar6 = (uint *)(param_1 + 0x994);
  iVar4 = *(int *)(param_1 + 0x990);
  if (iVar4 == 0) {
    if (*(int *)(param_1 + 0x994) == 0) {
      func_004AD9E8(*DAT_004df858,10,0,0,in_s0);
      puVar5 = (undefined4 *)func_005841A8(*piVar2,*puVar5,*(int **)(DAT_004df85c + *piVar2));
      puVar5 = (undefined4 *)*puVar5;
      if (((*puVar3 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_004df850), iVar4 != 0)) {
        *DAT_004df860 = uVar1;
      }
      if ((puVar5 == (undefined4 *)0x0) || (iVar4 = (**(code **)*puVar5)(puVar5,DAT_004df860), iVar4 == 0)) {   /* type descriptor restored (rtti_arg_fix) */
        puVar5 = (undefined4 *)0x0;
      }
      if (puVar5 != (undefined4 *)0x0) {
        func_002CEF40((int)puVar5,2);
      }
    }
    if (0x78 < *(uint *)(param_1 + 0x994)) {
      *(int *)(param_1 + 0x990) = *(int *)(param_1 + 0x990) + 1;
    }
    *puVar6 = *(uint *)(param_1 + 0x994) + 1;
    return 0;
  }
  if (iVar4 == 1) {
    puVar5 = (undefined4 *)
             func_005841A8(*DAT_004df848,*DAT_004df84c,*(int **)(DAT_004df85c + *DAT_004df848));
    puVar5 = (undefined4 *)*puVar5;
    if (((*puVar3 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_004df850), iVar4 != 0)) {
      *DAT_004df860 = uVar1;
    }
    if ((puVar5 == (undefined4 *)0x0) || (iVar4 = (**(code **)*puVar5)(puVar5,DAT_004df860), iVar4 == 0)) {   /* type descriptor restored (rtti_arg_fix) */
      puVar5 = (undefined4 *)0x0;
    }
    if (puVar5 != (undefined4 *)0x0) {
      func_002CEF40((int)puVar5,3);
    }
    iVar4 = *(int *)(*DAT_004df864 + 0x18);
    if (iVar4 == 0) {
      return 1;
    }
    func_004DE3E0(auStack_58,param_1,9,fVar7);
    func_001212EC(iVar4,(int *)(param_1 + 0x9d4),(uint)local_2e,0);
  }
  else {
    if (iVar4 != 2) {
      if (iVar4 != 3) {
        return 0;
      }
      return 1;
    }
    *puVar6 = *(int *)(param_1 + 0x994) + 1;
    func_004DE3E0(auStack_58,param_1,9,fVar7);
    if (*puVar6 < (uint)local_2e) {
      return 0;
    }
  }
  *(int *)(param_1 + 0x990) = *(int *)(param_1 + 0x990) + 1;
  return 0;
}

