/* compilefix: func_004F68AC, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/004/func_004F68AC.c) with `this` restored in method calls (on a
 * stack object after its vtable store, or virtual slot 0) by tools/vtable_this_fix.py, BOOT_LOG 147. */
#include "ghidra_types.h"

extern int func_0014E138(int param_1,int param_2);
extern int func_001DDDE8(int param_1,float *param_2,int param_3,float fparam_0);
extern int func_0026171C(int param_1,float *param_2,uint *param_3,float *param_4);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_00520FC0(void);
extern undefined4 DAT_004f6ae0;
extern int *DAT_004f6ae4;
extern float DAT_004f6ae8;
extern float DAT_004f6aec;
extern float DAT_004f6af0;
extern int *DAT_004f6af4;
extern int *DAT_004f6af8;
extern float DAT_004f6afc;

// USA 004F68AC <- EU 004F6884 (Ghidra, non-matching)
// GLOBAL DAT_004f6ae0 undefined4
// GLOBAL DAT_004f6ae4 int *
// GLOBAL DAT_004f6ae8 float
// GLOBAL DAT_004f6aec float
// GLOBAL DAT_004f6af0 float
// GLOBAL DAT_004f6af4 int *
// GLOBAL DAT_004f6af8 int *
// GLOBAL DAT_004f6afc float

undefined4 func_004F68AC(int param_1,int param_2,undefined4 param_3,float *param_4)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  
  puVar3 = *(undefined4 **)(param_1 + 0x438);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = DAT_004f6ae0;
  }
  fVar10 = DAT_004f6ae8;
  piVar2 = DAT_004f6ae4;
  *(uint *)(param_1 + 0x5a0) = *(uint *)(param_1 + 0x5a0) & 0xfdffffff;
  if (param_2 == 2) {
    *(float *)(param_1 + 0x4f4) =
         fVar10 + *(float *)(*piVar2 + 0x20) * (*(float *)(param_1 + 0x4f0) - fVar10);
    if ((DAT_004f6aec < *(float *)(param_1 + 0x84c)) &&
       (pfVar4 = (float *)func_00520FC0(), fVar10 = *pfVar4 - *(float *)(param_1 + 0x3d0),
       fVar11 = pfVar4[2] - *(float *)(param_1 + 0x3d8),
       fVar10 * fVar10 + fVar11 * fVar11 <= *(float *)(param_1 + 0x84c))) {
      func_001DDDE8(*DAT_004f6af4,(float *)(param_1 + 0x3d0),(uint)*(byte *)(param_1 + 0x850),
                    DAT_004f6af0);
    }
  }
  else if (param_2 == 0) {
    fVar11 = *(float *)(param_1 + 0x4f4);
    fVar10 = fVar10 + *(float *)(*piVar2 + 0x20) * (*(float *)(param_1 + 0x4f0) - fVar10);
    *(float *)(param_1 + 0x4f4) = fVar10;
    if ((((*(uint *)(param_1 + 0x59c) & 0x4000000) == 0) || (*(int *)(*DAT_004f6af8 + 0x44) == 0))
       || (*(char *)(param_1 + 0x8b6) != '\0')) {
      if (fVar10 == fVar11) goto LAB_004f6ad0;
    }
    else {
      cVar1 = *(char *)(param_1 + 0x848);
      bVar9 = cVar1 == '\0';
      if (bVar9) {
        cVar1 = *(char *)(param_1 + 0x7fc);
      }
      if (bVar9 && cVar1 == '\0') {
        *(float *)(param_1 + 0x3d4) = DAT_004f6afc + *(float *)(param_1 + 0x3d4);
      }
      if (*(undefined4 **)(param_1 + 0x800) == (undefined4 *)0x0) {
        func_004F5588(param_1);
      }
      else {
        (**(code **)**(undefined4 **)(param_1 + 0x800))(*(undefined4 **)(param_1 + 0x800));   /* this restored (vtable_this_fix) */
      }
    }
    uVar5 = *(uint *)(param_1 + 0x59c);
    *(uint *)(param_1 + 0x59c) = uVar5 & 0xfffffcff;
    if (*(undefined4 **)(param_1 + 0x804) == (undefined4 *)0x0) {
      func_004F5BD8(param_1,(uint *)0x0,(int **)0x0,param_4);
    }
    else {
      (**(code **)**(undefined4 **)(param_1 + 0x804))(*(undefined4 **)(param_1 + 0x804));   /* this restored (vtable_this_fix) */
    }
    if ((uVar5 & 0x100) == 0) {
      uVar6 = *(uint *)(param_1 + 0x59c) & 0xfffffeff;
    }
    else {
      uVar6 = *(uint *)(param_1 + 0x59c) | 0x100;
    }
    *(uint *)(param_1 + 0x59c) = uVar6;
    if ((uVar5 & 0x200) == 0) {
      uVar6 = uVar6 & 0xfffffdff;
    }
    else {
      uVar6 = uVar6 | 0x200;
    }
    *(uint *)(param_1 + 0x59c) = uVar6;
    iVar7 = *(int *)(param_1 + 0x890);
    for (iVar8 = *(int *)(param_1 + 0x888) - iVar7; iVar8 != (param_1 + 0x884) - iVar7;
        iVar8 = *(int *)(iVar8 + iVar7 + 4) - iVar7) {
      func_0026171C(iVar8,(float *)0x0,(uint *)0x0,(float *)0x0);
    }
  }
LAB_004f6ad0:
  return func_0014E138(param_1,param_2);
}

