/* compilefix: USA 003839B4 (EU 00383990), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: expression is not assignable
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (*(undefined4 *)p & 0xFFFFFF) = v (Ghidra X._0_3_ store) -> CF_SET3(p, v): the 3 low bytes (strh+strb) [3]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites, this function's sites checked);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_0014ED58(int param_1);
extern int func_0014F4EC(int param_1);
extern int func_004CF5DC(int param_1,int param_2,int param_3,undefined4 *param_4);
extern int func_00543170(int param_1);
extern int func_0058A1F4(int param_1);
extern undefined1 *DAT_00383bec;
extern int DAT_00383bf0;
extern float DAT_00383bf4;
extern float DAT_00383bf8;
extern byte *DAT_00383bfc;
extern byte *DAT_00383c00;
extern int *DAT_00383c04;
extern int *DAT_00383c08;

// USA 003839B4 <- EU 00383990 (Ghidra, non-matching)
// GLOBAL DAT_00383bec undefined1 *
// GLOBAL DAT_00383bf0 int
// GLOBAL DAT_00383bf4 float
// GLOBAL DAT_00383bf8 float
// GLOBAL DAT_00383bfc byte *
// GLOBAL DAT_00383c00 byte *
// GLOBAL DAT_00383c04 int *
// GLOBAL DAT_00383c08 int *

void func_003839B4(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  bool bVar6;
  uint in_fpscr;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(undefined1 *)(albw_frame + 0xc))
  #define local_13 (*(undefined1 *)(albw_frame + 0xd))
  #define local_12 (*(undefined1 *)(albw_frame + 0xe))
  #define local_11 (*(undefined1 *)(albw_frame + 0xf))
  uVar2 = func_0058A1F4(*(int *)(param_1 + 0x10));
  if (uVar2 == 0) {
    func_0014F4EC(*(int *)(param_1 + 0x14));
    iVar3 = func_00543170(*(int *)(param_1 + 0x10));
    iVar4 = *(int *)(param_1 + 0x14);
    uVar2 = *(uint *)(iVar4 + 0x164);
    if (iVar3 == 0) {
      *(uint *)(iVar4 + 0x164) = uVar2 | 0x4000;
      uVar2 = uVar2 & 0xfffeffff | 0x4000;
    }
    else {
      uVar2 = uVar2 | 0x10000;
    }
    *(uint *)(iVar4 + 0x164) = uVar2;
    bVar6 = *(short *)(*(int *)(param_1 + 0x10) + 0x90c) == 0;
    if (bVar6) {
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
    local_18 = 0xffffffff;
    local_14 = DAT_00383bec[3];
    local_13 = DAT_00383bec[2];
    local_12 = DAT_00383bec[1];
    local_11 = *DAT_00383bec;
    iVar3 = func_00543170(*(int *)(param_1 + 0x10));
    if (iVar3 == 0) {
      if ((bVar6) || (*(short *)(param_1 + 0x4e) == 0)) {
        (*(undefined2 *)((char *)&local_18 + 0)) = CONCAT11(DAT_00383c00[2],DAT_00383c00[3]);
        CF_SET3(((char *)&local_18 + 0), CONCAT12(DAT_00383c00[1],(undefined2)local_18));
        local_18 = CONCAT13(0xff,(undefined3)local_18);
      }
      else {
        (*(undefined2 *)((char *)&local_18 + 0)) = CONCAT11(DAT_00383c00[2],DAT_00383c00[3]);
        CF_SET3(((char *)&local_18 + 0), CONCAT12(DAT_00383c00[1],(undefined2)local_18));
        pfVar5 = (float *)(DAT_00383bf0 + (*(uint *)(param_1 + 0x50) >> 0x18) * 0x10);
        fVar8 = (float)VectorUnsignedToFloat
                                 (*(uint *)(param_1 + 0x50) & 0xffffff,(byte)(in_fpscr >> 0x15) & 3)
        ;
        fVar9 = (float)VectorUnsignedToFloat(*DAT_00383c00 - 200,(byte)(in_fpscr >> 0x15) & 3);
        uVar7 = VectorFloatToUnsigned
                          (DAT_00383bf8 + fVar9 * (*pfVar5 + pfVar5[1] * fVar8 * DAT_00383bf4),3);
        local_18 = CONCAT13((char)uVar7,(undefined3)local_18);
      }
    }
    else {
      (*(undefined2 *)((char *)&local_18 + 0)) = CONCAT11(DAT_00383bfc[2],DAT_00383bfc[3]);
      CF_SET3(((char *)&local_18 + 0), CONCAT12(DAT_00383bfc[1],(undefined2)local_18));
      pfVar5 = (float *)(DAT_00383bf0 + (*(uint *)(param_1 + 0x54) >> 0x18) * 0x10);
      fVar8 = (float)VectorUnsignedToFloat
                               (*(uint *)(param_1 + 0x54) & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
      fVar9 = (float)VectorUnsignedToFloat(*DAT_00383bfc - 200,(byte)(in_fpscr >> 0x15) & 3);
      uVar7 = VectorFloatToUnsigned
                        (DAT_00383bf8 + fVar9 * (*pfVar5 + pfVar5[1] * fVar8 * DAT_00383bf4),3);
      local_18 = CONCAT13((char)uVar7,(undefined3)local_18);
    }
    iVar3 = 0;
    iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x14) + 0x20) + 4);
    if (0 < iVar4) {
      do {
        func_004CF5DC(*(int *)(param_1 + 0x14),iVar3,1,(undefined4 *)&local_14);
        func_004CF5DC(*(int *)(param_1 + 0x14),iVar3,2,&local_18);
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar4);
    }
    piVar1 = DAT_00383c08;
    *(int *)(param_1 + 0x54) = *DAT_00383c04 + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x50) = *piVar1 + *(int *)(param_1 + 0x50);
    return;
  }
  func_0014ED58(*(int *)(param_1 + 0x14));
  *(uint *)(*(int *)(param_1 + 0x14) + 0x164) =
       *(uint *)(*(int *)(param_1 + 0x14) + 0x164) | 0x10000;
  return;
}

