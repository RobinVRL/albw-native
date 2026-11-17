/* compilefix: func_0027FBE4, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/002/func_0027FBE4.c) with `this` restored in 1
 * member-function-pointer call(s) by tools/pmf_this_fix.py (BOOT_LOG 140): this = BASE + (adj >> 1).
 * Further arguments of those calls are as Ghidra printed them. */
#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_001E5B70(int param_1,float fparam_0);
extern int func_001E5BE4(int param_1);
extern int func_001E5EAC(int param_1,float fparam_0);
extern int func_0027F1E0(int param_1);
extern int func_0027F56C(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0027FB10(int param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004ED9C8(int param_1);
extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int func_0052FDCC(int param_1,undefined4 *param_2);
extern int func_0052FE5C(int param_1);
extern int *DAT_0027fe70;
extern uint *DAT_0027fe74;
extern undefined4 *DAT_0027fe78;
extern undefined4 DAT_0027fe7c;
extern float DAT_0027fe80;
extern float DAT_0027fe84;

// USA 0027FBE4 <- EU 0027FC0C (Ghidra, non-matching)
// GLOBAL DAT_0027fe70 int *
// GLOBAL DAT_0027fe74 uint *
// GLOBAL DAT_0027fe78 undefined4 *
// GLOBAL DAT_0027fe7c undefined4
// GLOBAL DAT_0027fe80 float
// GLOBAL DAT_0027fe84 float

undefined4 func_0027FBE4(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  uint in_fpscr;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(undefined4 *)(albw_frame + 0x0))
  #define local_3c (*(float *)(albw_frame + 0x4))
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(float *)(albw_frame + 0x2c))
  if (*(char *)(param_1 + 0x4c0) != '\0') goto LAB_0027fce8;
  if (*(char *)(param_1 + 0x5c) == '\0') {
LAB_0027fccc:
    if (*(int *)(param_1 + 0x4ec) == *(int *)(param_1 + 0x4f0)) goto LAB_0027fce8;
  }
  else {
    puVar2 = (undefined4 *)func_0052FBDC(*DAT_0027fe70 + 0x3dbbc,(int)*(short *)(param_1 + 0x5e),0);
    if (((*DAT_0027fe74 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_0027fe74), iVar3 != 0)) {
      *DAT_0027fe78 = DAT_0027fe7c;
    }
    if ((puVar2 == (undefined4 *)0x0) ||
       (iVar3 = (**(code **)*puVar2)(puVar2,DAT_0027fe78), iVar3 == 0)) {
      puVar2 = (undefined4 *)0x0;
    }
    if ((puVar2 == (undefined4 *)0x0) ||
       (*(int *)(param_1 + 0x4ec) == (int)*(short *)(puVar2 + 0x124))) goto LAB_0027fccc;
  }
  func_0027F1E0(param_1);
LAB_0027fce8:
  func_0027FB10(param_1);
  piVar7 = *(int **)(param_1 + 0x4d0);
  piVar5 = (int *)(*(int *)(param_1 + 0x4d8) + *(char *)(param_1 + 0x4c0) * 8);
  uVar4 = *(uint *)(*(int *)(param_1 + 0x4d8) + *(char *)(param_1 + 0x4c0) * 8 + 4);
  if ((uVar4 & 1) != 0) {
    piVar5 = (int *)(*piVar5 + *(int *)((int)piVar7 + ((int)uVar4 >> 1)));
  }
  (*(int (*)(int *))(code *)*piVar5)(((int *)((int)(piVar7) + ((int)uVar4 >> 1))));   /* this restored (pmf_this_fix) */
  iVar6 = *(int *)(param_1 + 0x4cc);
  iVar3 = *(int *)(param_1 + 0x4bc) + 1;
  *(int *)(param_1 + 0x4bc) = iVar3;
  if (iVar6 != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(iVar6,1,fparam_0);
  }
  if ((*(char *)(param_1 + 0x4c0) == '\x02') &&
     ((*(float *)(param_1 + 0x478) != *(float *)(param_1 + 0x49c) ||
      (*(float *)(param_1 + 0x480) != *(float *)(param_1 + 0x4a4))))) {
    func_001E5B70(param_1,DAT_0027fe80);
    func_001E5BE4(param_1);
  }
  func_0052FDCC(param_1,&local_40);
  local_3c = local_3c + DAT_0027fe84;
  iVar3 = *(int *)(param_1 + 0x40c);
  *(undefined4 *)(iVar3 + 4) = local_40;
  *(float *)(iVar3 + 8) = local_3c;
  *(undefined4 *)(iVar3 + 0xc) = local_38;
  func_0027F56C(param_1,local_38,iVar6,piVar7);
  if (*(char *)(param_1 + 0x4c0) == '\x01') {
    bVar1 = func_0052FE5C(param_1);
    iVar3 = *(int *)(param_1 + 0x504);
    if (bVar1) {
      iVar3 = *(int *)(param_1 + 0x508);
    }
    func_001119F4(&local_40,
                  (undefined4 *)
                  (*(int *)(*(int *)(*(int *)(param_1 + 0x4b0) + 0x24) + 0x14) + iVar3 * 0x30));
    func_001E5EAC(param_1,(local_14 - *(float *)(param_1 + 0x50c)) + *(float *)(param_1 + 0x3d8));
  }
  func_004ED9C8(*(int *)(param_1 + 0x4e0));
  if (*(int *)(param_1 + 0x4e4) != 0) {
    return func_004ED9C8(*(int *)(param_1 + 0x4e4));
  }
  return 0;
}

