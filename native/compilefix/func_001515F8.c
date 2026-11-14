/* compilefix: USA 001515F8 (EU 001515F8), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: member reference base type 'uint' (aka 'unsigned int') is not a structure or union
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - arr[i]._O_S_ -> typed byte access at (char *)&arr[i] + O [1]
 *  - explicit (T)(uintptr_t) casts at int<->pointer mismatches (identity on the 32-bit ARM) [3]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int DAT_00151774;
extern uint DAT_00151778;
extern int *DAT_0015177c;
extern int *DAT_00151780;

// USA 001515F8 <- EU 001515F8 (Ghidra, non-matching)
// GLOBAL DAT_00151774 int
// GLOBAL DAT_00151778 uint
// GLOBAL DAT_0015177c int *
// GLOBAL DAT_00151780 int *

int * func_001515F8(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(uint *)(albw_frame + 0x8))
  #define local_24 ((uint *)(albw_frame + 0xc))
  piVar3 = (int *)(uintptr_t)(func_00150E40(param_1,param_2));
  iVar4 = DAT_00151774;
  piVar3[200] = DAT_00151774 + 0x58;
  *piVar3 = iVar4;
  piVar3[0x103] = 0;
  piVar8 = piVar3 + 0x103;
  piVar7 = piVar3 + 0x104;
  piVar3[0x104] = 0;
  iVar4 = func_0054D964((int)piVar3,0);
  piVar3[0x105] = iVar4;
  local_24[0] = DAT_00151778;
  uVar2 = local_24[0];
  (*(undefined2 *)((char *)&local_24[0] + 0)) = (undefined2)DAT_00151778;
  *(undefined2 *)(piVar3 + 0x106) = (undefined2)local_24[0];
  piVar3[0x107] = 0;
  *(undefined1 *)(piVar3 + 0x108) = 1;
  local_24[0] = uVar2;
  puVar5 = (undefined4 *)func_0010BAB4(0x48);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = (undefined4 *)(uintptr_t)(func_004EDC9C(puVar5));
  }
  piVar3[0x103] = (int)puVar6;
  puVar6[6] = piVar3[0x105];
  local_28 = piVar3[0xb3];
  func_004EDAD0(*piVar8,&local_28);
  func_004ED9C8(*piVar8);
  *(undefined2 *)(*piVar8 + 0x2c) = 0xff9c;
  piVar1 = DAT_0015177c;
  *(short *)(*(int *)(*piVar8 + 0x18) + 0x28) = (short)piVar3[0x106];
  func_004A879C(*piVar1,*piVar8,5);
  if ((*(char *)(*DAT_00151780 + 0x18) == '\x10') &&
     (iVar4 = func_0054D964((int)piVar3,1), iVar4 != 0)) {
    puVar5 = (undefined4 *)func_0010BAB4(0x48);
    puVar6 = (undefined4 *)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      puVar6 = (undefined4 *)(uintptr_t)(func_004EDC9C(puVar5));
    }
    piVar3[0x104] = (int)puVar6;
    puVar6[6] = iVar4;
    local_24[0] = piVar3[0xb3];
    func_004EDAD0(*piVar7,local_24);
    func_004ED9C8(*piVar7);
    *(undefined2 *)(*piVar7 + 0x2c) = 0xff9c;
    *(undefined2 *)(*(int *)(*piVar7 + 0x18) + 0x28) = 0x224;
    func_004A879C(*piVar1,*piVar7,2);
    *(undefined1 *)(*piVar7 + 0x44) = 0;
  }
  return piVar3;
}

