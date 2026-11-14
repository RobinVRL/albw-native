/* compilefix: USA 00507DA0 (EU 00507D78), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier 's_'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - Ghidra string label with punctuation (s_T<SE_..._ADDR + n) -> s_cf_<ADDR+n>, the same code-section address (checked: add rX,pc,#imm in the ARM) [2]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
extern char s_cf_0050801f[];
extern char s_cf_00508020[];
#include "compilefix.h"

extern int func_00114608(uint param_1,uint param_2);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_0058C060(int param_1,uint param_2);
extern int func_0066B43C(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_00508000;
extern float DAT_00508004;
extern float DAT_00508008;
extern float DAT_0050800c;
extern int DAT_00508010;
extern undefined4 DAT_00508014;
extern uint DAT_00508018;
extern undefined DAT_0050801c;
extern int DAT_00508030;
extern undefined4 _DAT_0050801c;

// USA 00507DA0 <- EU 00507D78 (Ghidra, non-matching)
// GLOBAL DAT_00508000 uint *
// GLOBAL DAT_00508004 float
// GLOBAL DAT_00508008 float
// GLOBAL DAT_0050800c float
// GLOBAL DAT_00508010 int
// GLOBAL DAT_00508014 undefined4
// GLOBAL DAT_00508018 uint
// GLOBAL DAT_0050801c undefined
// GLOBAL DAT_00508030 int
// GLOBAL s_cf_0050801f string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_00507DA0(int param_1,float fparam_0)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  fVar9 = DAT_00508004;
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14) +
          *(int *)(param_1 + 0x478) * 0x30;
  *(undefined4 *)(param_1 + 0x444) = *(undefined4 *)(iVar2 + 0xc);
  *(undefined4 *)(param_1 + 0x448) = *(undefined4 *)(iVar2 + 0x1c);
  *(undefined4 *)(param_1 + 0x44c) = *(undefined4 *)(iVar2 + 0x2c);
  uVar5 = *DAT_00508000;
  *(uint *)(param_1 + 0x440) = uVar5 + 0x40000000;
  if (*(uint *)(param_1 + 0x47c) < *(uint *)(param_1 + 0x480)) {
    uVar3 = *(uint *)(param_1 + 0x47c) + 1;
    *(uint *)(param_1 + 0x47c) = uVar3;
    fVar8 = DAT_00508008;
    if ((*(uint *)(param_1 + 0x480) != 0 && uVar3 != 0) &&
       (fVar8 = fVar9, uVar3 < *(uint *)(param_1 + 0x480))) {
      fVar8 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
      fVar8 = fVar8 * *(float *)(param_1 + 0x484);
    }
    fVar8 = fVar8 + *(float *)(param_1 + 0x46c);
    if ((int)ALBW_AS_U32(fVar8) < 0x3f800000) {
      *(float *)(*(int *)(param_1 + 0x410) + 0x158) = fVar8;
    }
    else {
      *(float *)(*(int *)(param_1 + 0x410) + 0x158) = fVar9;
    }
  }
  uVar3 = DAT_00508018;
  uVar1 = DAT_00508014;
  pfVar4 = (float *)(DAT_00508010 + (uVar5 >> 0x18) * 0x10);
  fVar9 = (float)VectorUnsignedToFloat(uVar5 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x470) = *pfVar4 + pfVar4[1] * fVar9 * DAT_0050800c;
  *(undefined4 *)(param_1 + 0x468) = uVar1;
  uVar10 = func_00114608(uVar3,uVar5 >> 0x18);
  iVar2 = (int)uVar10;
  bVar7 = *(char *)(param_1 + 0x534) != '\0';
  iVar6 = iVar2;
  if (bVar7) {
    iVar6 = -iVar2;
  }
  *(int *)(param_1 + 0x438) = *(int *)(param_1 + 0x438) + iVar6;
  if (bVar7) {
    iVar2 = -iVar2;
  }
  *(int *)(param_1 + 0x43c) = *(int *)(param_1 + 0x43c) + iVar2;
  if (*(uint *)(param_1 + 0x488) < *(uint *)(param_1 + 0x48c)) {
    *(uint *)(param_1 + 0x488) = *(uint *)(param_1 + 0x488) + 1;
  }
  else {
    iVar2 = func_0058C060(param_1,*(uint *)(param_1 + 0x48c));
    uVar1 = _DAT_0050801c;
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x48c) = 0x3c;
      *(undefined4 *)(param_1 + 0x490) = uVar1;
      *(undefined4 *)(param_1 + 0x488) = 0;
      iVar2 = *(int *)(param_1 + 0x4f8);
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0x4fc))) {
        iVar6 = *(int *)(iVar2 + 0x20);
        if ((iVar6 != 0) &&
           ((*(int *)(iVar2 + 0x24) == *(int *)(iVar6 + 0xc) && (0 < *(int *)(iVar6 + 4))))) {
          *(undefined1 *)(iVar6 + 0x280) = 1;
        }
        *(uint *)(iVar2 + 0x3c) = *(uint *)(iVar2 + 0x3c) & 0xfffffffb | 8;
      }
      iVar2 = *(int *)(param_1 + 0x500);
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0x504))) {
        iVar6 = *(int *)(iVar2 + 0x20);
        if ((iVar6 != 0) &&
           ((*(int *)(iVar2 + 0x24) == *(int *)(iVar6 + 0xc) && (0 < *(int *)(iVar6 + 4))))) {
          *(undefined1 *)(iVar6 + 0x280) = 1;
        }
        *(uint *)(iVar2 + 0x3c) = *(uint *)(iVar2 + 0x3c) & 0xfffffffb | 8;
      }
      *(undefined4 *)(param_1 + 0x43c) = *(undefined4 *)(param_1 + 1000);
      *(undefined4 *)(param_1 + 0x438) = 0;
      func_0066B43C((undefined4 *)(param_1 + 0x510),3);
      *(undefined1 *)(param_1 + 0x536) = 0;
    }
  }
  local_14 = s_cf_00508020;
  local_18 = DAT_00508030;
  return func_001507D8(param_1,&local_18,0);
}

