/* compilefix: USA 001437A0 (EU 001437A0), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: expression is not assignable
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (*(undefined4 *)p & 0xFFFFFF) = v (Ghidra X._0_3_ store) -> CF_SET3(p, v): the 3 low bytes (strh+strb) [3]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites, this function's sites checked);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00165E28(int param_1,undefined2 param_2);
extern int func_00292460(int param_1,undefined1 param_2);
extern int func_00361790(int param_1,int param_2,undefined4 param_3);
extern int func_004CDF40(int param_1,int param_2,int param_3);
extern int func_004EF418(int param_1,byte *param_2,int param_3,int param_4);
extern int func_00547514(int param_1);
extern int func_00556BE0(int param_1);
extern int func_00584B94(int param_1,int param_2);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int *DAT_00143afc;
extern int *DAT_00143b00;
extern uint *DAT_00143b04;
extern int *DAT_00143b08;
extern uint *DAT_00143b0c;
extern float *DAT_00143b10;
extern int *DAT_00143b14;
extern int DAT_00143b18;
extern int DAT_00143b1c;
extern undefined4 DAT_00143b20;
extern int *DAT_00143b24;

// USA 001437A0 <- EU 001437A0 (Ghidra, non-matching)
// GLOBAL DAT_00143afc int *
// GLOBAL DAT_00143b00 int *
// GLOBAL DAT_00143b04 uint *
// GLOBAL DAT_00143b08 int *
// GLOBAL DAT_00143b0c uint *
// GLOBAL DAT_00143b10 float *
// GLOBAL DAT_00143b14 int *
// GLOBAL DAT_00143b18 int
// GLOBAL DAT_00143b1c int
// GLOBAL DAT_00143b20 undefined4
// GLOBAL DAT_00143b24 int *

undefined4 func_001437A0(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  int *piVar5;
  undefined4 uVar6;
  bool bVar7;
  ushort *puVar8;
  int iVar9;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(uint *)(albw_frame + 0x8))
  #define local_54 (*(uint *)(albw_frame + 0xc))
  #define local_50 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_4c (*(uint *)(albw_frame + 0x14))
  #define uStack_48 (*(uint *)(albw_frame + 0x18))
  #define uStack_44 (*(uint *)(albw_frame + 0x1c))
  #define uStack_40 (*(uint *)(albw_frame + 0x20))
  #define uStack_3c (*(uint *)(albw_frame + 0x24))
  #define local_38 (*(uint *)(albw_frame + 0x28))
  #define uStack_34 (*(uint *)(albw_frame + 0x2c))
  #define local_30 (*(uint *)(albw_frame + 0x30))
  #define afStack_2c ((float *)(albw_frame + 0x34))
  piVar5 = DAT_00143b08;
  puVar4 = DAT_00143b04;
  piVar3 = DAT_00143b00;
  piVar2 = DAT_00143afc;
  cVar1 = *(char *)(param_1 + 0x414);
  if (cVar1 == '\x02') {
    if (*(short *)(param_1 + 0x2e) == 0) {
      iVar9 = 0x17;
    }
    else if (*(short *)(param_1 + 0x2e) == 2) {
      iVar9 = 0x19;
    }
    else {
      iVar9 = 0x18;
    }
    iVar9 = func_00361790(*DAT_00143b00,iVar9,param_1 + 0x47c);
    if (iVar9 == 0) {
      return 0;
    }
    *(undefined1 *)(param_1 + 0x414) = 3;
    local_58 = *puVar4;
    local_54 = puVar4[1];
    uStack_4c = puVar4[3];
    uStack_48 = puVar4[4];
    uStack_44 = puVar4[5];
    uStack_40 = puVar4[6];
    uStack_3c = puVar4[7];
    local_38 = puVar4[8];
    uStack_34 = puVar4[9];
    local_30 = puVar4[10];
    local_50 = *(undefined4 *)(*(int *)(*piVar2 + 0x18) + 0x1a8);
    func_00115C54(afStack_2c,(float *)(param_1 + 0x3d0),DAT_00143b10);
    return (**(code **)(**(int **)(param_1 + 0x474) + 0x34))
              (*(int **)(param_1 + 0x474),afStack_2c,&local_58,0);
  }
  puVar8 = (ushort *)(*DAT_00143b08 + 0x33e);
  if (cVar1 != '\x03') {
    if (cVar1 != '\x04') {
      if (cVar1 != '\x01') {
        return 0;
      }
      local_58 = *DAT_00143b0c;
      local_54 = DAT_00143b0c[1];
      uStack_4c = DAT_00143b0c[3];
      uStack_48 = DAT_00143b0c[4];
      uStack_44 = DAT_00143b0c[5];
      uStack_40 = DAT_00143b0c[6];
      uStack_3c = DAT_00143b0c[7];
      local_38 = DAT_00143b0c[8];
      uStack_34 = DAT_00143b0c[9];
      local_30 = DAT_00143b0c[10];
      local_50 = *(undefined4 *)(*(int *)(*DAT_00143afc + 0x18) + 0x1a8);
      func_00115C54(afStack_2c,(float *)(param_1 + 0x3d0),DAT_00143b10);
      (**(code **)(**(int **)(param_1 + 0x474) + 0x34))
                (*(int **)(param_1 + 0x474),afStack_2c,&local_58,0);
      *(undefined1 *)(param_1 + 0x414) = 0;
      return 0;
    }
    *puVar8 = *puVar8 | 4;
    if (*(uint *)(param_1 + 0x49c) < *(uint *)(param_1 + 0x4a0)) {
      *(uint *)(param_1 + 0x49c) = *(uint *)(param_1 + 0x49c) + 1;
      return 0;
    }
    local_58 = local_58 & 0xffffff00;
    local_54 = 0;
    CF_SET3(((char *)&local_50 + 0), 0);
    if (*(short *)(param_1 + 0x2e) == 0) {
      local_54 = 2;
      CF_SET3(((char *)&local_50 + 0), 0x10003);
    }
    if (*(short *)(param_1 + 0x2e) == 1) {
      local_54 = 0x22;
      CF_SET3(((char *)&local_50 + 0), 0x10000);
    }
    iVar9 = func_004EF418(*DAT_00143b24,(byte *)&local_58,2,0);
    if (iVar9 == 0) {
      return 0;
    }
    if (*(uint *)(param_1 + 0x4b4) < *(uint *)(param_1 + 0x4b8)) {
      *(uint *)(param_1 + 0x4b4) = *(uint *)(param_1 + 0x4b4) + 1;
      return 0;
    }
    *(undefined1 *)(param_1 + 0x414) = 0;
    *(ushort *)(*piVar5 + 0x33e) = *(ushort *)(*piVar5 + 0x33e) & 0xfffd;
    iVar9 = func_00165E28(*(int *)(param_1 + 0x474),*(undefined2 *)((int)puVar4 + 0x2a));
    if (iVar9 != 0) {
      *(undefined1 *)(param_1 + 0x414) = 0;
    }
    func_00547514(param_1 + 4);
    *(undefined1 *)(param_1 + 0x2d7) = 1;
    return 0;
  }
  if (*(char *)(param_1 + 0x413) != '\x01') {
    return 0;
  }
  *puVar8 = *puVar8 | 4;
  iVar9 = func_00556BE0(*piVar3);
  piVar5 = DAT_00143b14;
  if (iVar9 != 0) {
    return 0;
  }
  if (*(int *)(*DAT_00143b14 + 0x44) == 0) {
    return 0;
  }
  if (*(int *)(*DAT_00143b14 + 0x44) != *(int *)(param_1 + 0x474)) {
    return 0;
  }
  iVar9 = *(int *)(*piVar2 + 0x18);
  if ((iVar9 != 0) && (-1 < *(int *)(iVar9 + 0x10c))) {
    return 0;
  }
  func_00588C14(param_1,1,1);
  iVar9 = DAT_00143b18;
  if (*(short *)(param_1 + 0x2e) == 0) {
    bVar7 = func_00584B94(*piVar5,DAT_00143b1c);
  }
  else {
    if (*(short *)(param_1 + 0x2e) != 1) goto LAB_001439c8;
    bVar7 = func_00584B94(*piVar5,0x174);
  }
  if (bVar7) {
    func_004CDF40(*piVar5,iVar9,1);
  }
LAB_001439c8:
  func_00292460(*piVar3,1);
  *(undefined1 *)(param_1 + 0x414) = 4;
  uVar6 = DAT_00143b20;
  *(undefined4 *)(param_1 + 0x4a0) = 0x6e;
  *(undefined4 *)(param_1 + 0x4a4) = uVar6;
  *(undefined4 *)(param_1 + 0x49c) = 0;
  return 0;
}

