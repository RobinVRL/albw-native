/* compilefix: USA 00246FD0 (EU 00246FD0), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier '_local_48'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - _local_XX (Ghidra's 4-byte view of the stack slot local_XX) -> *(undefined4 *)&local_XX (same frame offset) [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites, this function's sites checked);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_0014F0B0(int param_1);
extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern float DAT_0024712c;
extern undefined4 DAT_00247130;
extern undefined4 DAT_00247134;
extern float DAT_00247138;
extern float DAT_0024713c;
extern undefined4 DAT_00247140;
extern int *DAT_00247144;
extern float DAT_00247148;

// USA 00246FD0 <- EU 00246FD0 (Ghidra, non-matching)
// GLOBAL DAT_0024712c float
// GLOBAL DAT_00247130 undefined4
// GLOBAL DAT_00247134 undefined4
// GLOBAL DAT_00247138 float
// GLOBAL DAT_0024713c float
// GLOBAL DAT_00247140 undefined4
// GLOBAL DAT_00247144 int *
// GLOBAL DAT_00247148 float

void func_00246FD0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(int *)(albw_frame + 0x8))
  #define local_54 (*(int *)(albw_frame + 0xc))
  #define local_50 (*(undefined4 *)(albw_frame + 0x10))
  #define local_4c (*(undefined4 *)(albw_frame + 0x14))
  #define local_48 (*(undefined2 *)(albw_frame + 0x18))
  #define uStack_46 (*(ushort *)(albw_frame + 0x1a))
  #define local_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x20))
  #define local_3c (*(undefined4 * *)(albw_frame + 0x24))
  #define local_38 (*(undefined4 * *)(albw_frame + 0x28))
  #define local_34 (*(float *)(albw_frame + 0x2c))
  #define local_30 (*(undefined1 *)(albw_frame + 0x30))
  #define local_2f (*(undefined1 *)(albw_frame + 0x31))
  #define local_2c (*(undefined4 *)(albw_frame + 0x34))
  #define local_28 (*(float *)(albw_frame + 0x38))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x40))
  #define local_1c (*(float *)(albw_frame + 0x44))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x48))
  uVar1 = DAT_00247130;
  fVar5 = DAT_0024712c;
  *(undefined1 *)(param_1 + 0x4dc) = 0;
  uVar2 = DAT_00247134;
  *(undefined4 *)(param_1 + 0x4bc) = uVar1;
  *(float *)(param_1 + 0x4b4) = fVar5;
  fVar3 = DAT_00247138;
  local_58 = 0;
  local_50 = 0;
  local_40 = 0;
  local_34 = DAT_00247138;
  local_30 = 0;
  local_2f = 1;
  local_2c = *(undefined4 *)(param_1 + 0x3d0);
  uStack_24 = *(undefined4 *)(param_1 + 0x3d8);
  local_54 = param_1 + 0x484;
  local_28 = *(float *)(param_1 + 0x3d4) + DAT_0024713c;
  local_20 = *(undefined4 *)(param_1 + 0x3d0);
  uStack_18 = *(undefined4 *)(param_1 + 0x3d8);
  local_1c = *(float *)(param_1 + 0x3d4) + *(float *)(param_1 + 0x46c);
  local_38 = &local_2c;
  local_3c = &local_20;
  local_4c = *(undefined4 *)(param_1 + 0x2cc);
  local_44 = DAT_00247140;
  (*(undefined4 *)&local_48) = CONCAT22((ushort)((uint)uVar2 >> 0x10) | (ushort)((uint)param_2 >> 0x10),
                       *(undefined2 *)(param_1 + 0x54));
  *(undefined1 *)(param_1 + 0x4c1) = 0;
  func_0014F0B0(param_1);
  func_004A8030(*DAT_00247144,&local_58,0xf);
  if (fVar3 <= *(float *)(param_1 + 0x4bc)) {
    fVar4 = (*(float *)(param_1 + 0x4bc) - *(float *)(param_1 + 0x3d4)) /
            *(float *)(param_1 + 0x46c);
    fVar3 = DAT_00247148;
    if ((DAT_00247148 <= fVar4) && (fVar3 = fVar4, fVar5 < fVar4)) {
      fVar3 = fVar5;
    }
    *(float *)(param_1 + 0x4b4) = fVar3;
  }
  return;
}

