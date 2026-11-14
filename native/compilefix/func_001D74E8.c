/* compilefix: USA 001D74E8 (EU 001D74E8), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: expression is not assignable
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (*(undefined4 *)p & 0xFFFFFF) = v (Ghidra X._0_3_ store) -> CF_SET3(p, v): the 3 low bytes (strh+strb) [1]
 *  - SUB43(fVar,0) (missing from ghidra_types.h) -> ALBW_AS_U32(fVar) & 0xFFFFFF, the low 3 bytes of the float bits [1]
 *  - implicit float<->int conversions (Ghidra COPY between a float and an int-typed variable or
 *    pool word, e.g. `fVar = _DAT_xxx;`, `puVar[3] = fVar;`) made bit copies [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites, this function's sites checked);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_001D656C(int param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_0037CDA8(int *param_1);
extern int func_0037D530(int param_1,uint param_2,float *param_3);
extern int func_004CF5DC(int param_1,int param_2,int param_3,undefined4 *param_4);
extern int func_00584CA8(int param_1,int param_2,int param_3);
extern int *DAT_001d76bc;

// USA 001D74E8 <- EU 001D74E8 (Ghidra, non-matching)
// GLOBAL DAT_001d76bc int *

undefined4 func_001D74E8(int *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  code *pcVar5;
  uint extraout_r1;
  int *piVar6;
  int *piVar7;
  bool bVar8;
  bool bVar9;
  uint in_fpscr;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define iStack_18 (*(int *)(albw_frame + 0x8))
  piVar6 = (int *)param_1[0x13a];
  piVar7 = &local_20;
  uVar2 = *(uint *)(param_1[0x13c] + (char)param_1[0x136] * 8 + 4);
  pcVar5 = *(code **)(param_1[0x13c] + (char)param_1[0x136] * 8);
  if ((uVar2 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(int *)((int)piVar6 + ((int)uVar2 >> 1)));
  }
  (*pcVar5)();
  iVar3 = param_1[0x135] + 1;
  param_1[0x135] = iVar3;
  if (param_1[0x139] != 0) {
    fVar10 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(param_1[0x139],1,fVar10);
  }
  bVar8 = *(int *)(*DAT_001d76bc + 0xf74) != 0;
  iVar3 = 0;
  if (bVar8) {
    iVar3 = *(int *)(*(int *)(*DAT_001d76bc + 0xf74) + 0x20);
  }
  bVar9 = iVar3 != 0;
  if (bVar8 && bVar9) {
    iVar3 = *(int *)(iVar3 + 4);
  }
  fVar10 = ALBW_AS_F32(local_20); /* bit copy (Ghidra: undefined4 -> float, same register) */
  if ((bVar8 && bVar9) && iVar3 != 0) {
    iVar3 = func_001D656C((int)param_1);
    if (iVar3 == 0) {
      *(undefined1 *)((int)param_1 + 0x555) = 1;
    }
    else {
      *(undefined1 *)((int)param_1 + 0x555) = 0;
    }
    pfVar4 = (float *)func_00584CA8(param_1[0x103],0,5);
    fVar10 = *pfVar4;
    (*(undefined1 *)((char *)&local_20 + 3)) = (byte)((uint)ALBW_AS_U32(fVar10) >> 0x18);
    CF_SET3(((char *)&local_20 + 0), (ALBW_AS_U32(fVar10) & 0xFFFFFF));
    if (*(char *)((int)param_1 + 0x555) == '\0') {
      if ((*(undefined1 *)((char *)&local_20 + 3)) == 0xff) goto LAB_001d761c;
      if ((*(undefined1 *)((char *)&local_20 + 3)) < 0xef) {
        cVar1 = (*(undefined1 *)((char *)&local_20 + 3)) + 0x10;
      }
      else {
        cVar1 = -1;
      }
      local_20 = CONCAT13(cVar1,(undefined3)local_20); /* bit copy */
    }
    else {
      if ((*(undefined1 *)((char *)&local_20 + 3)) == 0) goto LAB_001d761c;
      if ((*(undefined1 *)((char *)&local_20 + 3)) < 0x11) {
        local_20 = ALBW_AS_U32(ALBW_AS_F32(((uint)ALBW_AS_U32(fVar10) & 0xffffff)));
      }
      else {
        local_20 = ALBW_AS_U32(ALBW_AS_F32(CONCAT13((*(undefined1 *)((char *)&local_20 + 3)) - 0x10,(undefined3)local_20)));
      }
    }
    func_004CF5DC(param_1[0x103],0,5,&local_20);
    piVar6 = piVar7;
    fVar10 = ALBW_AS_F32(local_20);
  }
LAB_001d761c:
  local_20 = ALBW_AS_U32(fVar10);
  pfVar4 = (float *)(param_1 + 0xf7);
  func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),pfVar4);
  if (((char)param_1[0x136] != '\0') || (uVar2 = param_1[0x153], (uint)param_1[0x152] < uVar2)) {
    pfVar4 = (float *)(param_1 + 0x132);
    func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),pfVar4);
    uVar2 = extraout_r1;
  }
  func_00169A80((int *)param_1[0x146],uVar2,(undefined4)(uintptr_t)(pfVar4),piVar6);
  func_00168E9C((int *)param_1[0x146],param_1[0x103],(int *)0x0);
  func_0037CDA8(param_1);
  local_20 = ALBW_AS_U32(ALBW_AS_F32(param_1[0xf4]));
  iStack_18 = param_1[0xf6];
  local_1c = ALBW_AS_F32(param_1[0xf5]) + ALBW_AS_F32(param_1[0x142]);
  return func_0037D530((int)param_1,param_1[0xfa],(float *)&local_20);
}

