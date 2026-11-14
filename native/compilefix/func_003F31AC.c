/* compilefix: USA 003F31AC (EU 003F318C), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier 'register0x00000054'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - explicit (T)(uintptr_t) casts at int<->pointer mismatches (identity on the 32-bit ARM) [1]
 *  - register0x00000054 (Ghidra's stack pointer) is really r4: the prologue sets r4 = sp+0x20 to load the stack arguments, then EU 003F31A4 `ldrne r4,[r6,#0x144]` reuses it as the object pointer; replaced by a local obj_r4 (all 53 uses are behind the `param_3 != 0 && obj != 0` test, as in the ARM) [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_005647D4(int param_1,uint *param_2,uint param_3,int param_4,int param_5,int param_6, int param_7);
extern float DAT_003f3498;
extern uint DAT_003f349c;
extern uint DAT_003f34a0;
extern uint DAT_003f34a4;

// USA 003F31AC <- EU 003F318C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 int
// PARAM param_7 Stack[0x8]:4 int
// GLOBAL DAT_003f3498 float
// GLOBAL DAT_003f349c uint
// GLOBAL DAT_003f34a0 uint
// GLOBAL DAT_003f34a4 uint

uint * func_003F31AC(undefined4 param_1,uint *param_2,int param_3,float *param_4,int param_5,
                    int param_6,int param_7)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  undefined *obj_r4 = (undefined *)0; /* r4: Ghidra took it for register0x54 (sp); EU 003F31A4 ldrne r4, [r6, #0x144] */
  
  iVar4 = param_7;
  if (param_3 != 0) {
    obj_r4 = *(undefined **)(param_3 + 0x144);
  }
  if (param_3 != 0 && (undefined4 *)obj_r4 != (undefined4 *)0x0) {
    iVar3 = param_3 + param_6 * 0x10;
    iVar2 = param_3 + param_5 * 0x10;
    uVar12 = VectorFloatToUnsigned(*(float *)((int)obj_r4 + 0x90) * DAT_003f3498,3);
    fVar7 = *(float *)(iVar3 + 0xb8) * *(float *)((int)obj_r4 + 0x1bc) * param_4[2];
    fVar5 = *(float *)(iVar3 + 0xb0) * *(float *)((int)obj_r4 + 0x1b4) * *param_4;
    fVar6 = *(float *)(iVar3 + 0xb4) * *(float *)((int)obj_r4 + 0x1b8) * param_4[1];
    fVar9 = *(float *)(iVar2 + 0xb0) * *(float *)((int)obj_r4 + 0x194) * *param_4;
    fVar11 = *(float *)(iVar2 + 0xb8) * *(float *)((int)obj_r4 + 0x19c) * param_4[2];
    fVar10 = *(float *)(iVar2 + 0xb4) * *(float *)((int)obj_r4 + 0x198) * param_4[1];
    uVar13 = VectorFloatToUnsigned(fVar7 * DAT_003f3498,3);
    uVar8 = VectorFloatToUnsigned(fVar6 * DAT_003f3498,3);
    uVar14 = VectorFloatToUnsigned(fVar5 * DAT_003f3498,3);
    puVar1 = (uint *)(uintptr_t)(func_005647D4((int)((int)obj_r4 + 0x23c),param_2,uVar14 & 0xff,uVar8 & 0xff
                           ,uVar13 & 0xff,uVar12 & 0xff,0));
    uVar12 = DAT_003f34a0;
    uVar8 = DAT_003f349c;
    puVar1[3] = DAT_003f34a4;
    *puVar1 = uVar8;
    puVar1[1] = uVar12;
    if (iVar4 == 0) {
      puVar1[2] = 0x3f800000;
      puVar1[4] = *(uint *)(*(int *)((int)obj_r4 + 0xd8) + 0x334);
      puVar1[6] = 0x3f800000;
      puVar1[5] = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(param_3 + 0x144) + 0xd8);
      puVar1[2] = 0x3f800000;
      puVar1[4] = *(uint *)(iVar4 + 0x334);
      puVar1[5] = 0x3f800000;
      puVar1[6] = 0;
    }
    fVar15 = (float)VectorSignedToFloat(*(undefined4 *)obj_r4,
                                        (byte)(in_fpscr >> 0x15) & 3);
    puVar1[7] = (uint)ALBW_AS_U32((*(float *)(*(int *)((int)obj_r4 + 0xd8) + 0x3f8) -
                      fVar15 * *(float *)(*(int *)((int)obj_r4 + 0xd8) + 0x3f0)));
    fVar15 = (float)VectorSignedToFloat(*(undefined4 *)obj_r4,
                                        (byte)(in_fpscr >> 0x15) & 3);
    puVar1[8] = (uint)ALBW_AS_U32((*(float *)(*(int *)((int)obj_r4 + 0xd8) + 0x3f4) +
                      fVar15 * *(float *)(*(int *)((int)obj_r4 + 0xd8) + 0x3ec)));
    fVar15 = (float)VectorSignedToFloat(*(undefined4 *)obj_r4,
                                        (byte)(in_fpscr >> 0x15) & 3);
    puVar1[9] = (uint)ALBW_AS_U32((*(float *)(*(int *)((int)obj_r4 + 0xd8) + 0x380) -
                      fVar15 * *(float *)(*(int *)((int)obj_r4 + 0xd8) + 0x378)));
    fVar15 = (float)VectorSignedToFloat(*(undefined4 *)obj_r4,
                                        (byte)(in_fpscr >> 0x15) & 3);
    puVar1[10] = (uint)ALBW_AS_U32((*(float *)(*(int *)((int)obj_r4 + 0xd8) + 0x37c) +
                       fVar15 * *(float *)(*(int *)((int)obj_r4 + 0xd8) + 0x374)));
    puVar1[0xb] = 0;
    fVar15 = (float)VectorSignedToFloat(*(undefined4 *)obj_r4,
                                        (byte)(in_fpscr >> 0x15) & 3);
    puVar1[0xc] = (uint)ALBW_AS_U32((fVar15 * *(float *)(*(int *)((int)obj_r4 + 0xd8) + 0x3a4)));
    fVar15 = (float)VectorSignedToFloat(*(undefined4 *)obj_r4,
                                        (byte)(in_fpscr >> 0x15) & 3);
    puVar1[0xd] = (uint)ALBW_AS_U32((*(float *)(*(int *)((int)obj_r4 + 0xd8) + 0x410) +
                        fVar15 * *(float *)(*(int *)((int)obj_r4 + 0xd8) + 0x408)));
    fVar15 = (float)VectorSignedToFloat(*(undefined4 *)obj_r4,
                                        (byte)(in_fpscr >> 0x15) & 3);
    puVar1[0xe] = (uint)ALBW_AS_U32((*(float *)(*(int *)((int)obj_r4 + 0xd8) + 0x394) +
                        fVar15 * *(float *)(*(int *)((int)obj_r4 + 0xd8) + 0x38c)));
    puVar1[0xf] = 0;
    fVar15 = (float)VectorSignedToFloat(*(undefined4 *)obj_r4,
                                        (byte)(in_fpscr >> 0x15) & 3);
    puVar1[0x10] = (uint)ALBW_AS_U32((fVar15 * *(float *)(*(int *)((int)obj_r4 + 0xd8) + 0x41c)));
    fVar15 = (float)VectorSignedToFloat(*(undefined4 *)obj_r4,
                                        (byte)(in_fpscr >> 0x15) & 3);
    puVar1[0x11] = (uint)ALBW_AS_U32((*(float *)(*(int *)((int)obj_r4 + 0xd8) + 0x410) +
                         fVar15 * *(float *)(*(int *)((int)obj_r4 + 0xd8) + 0x408)));
    fVar15 = (float)VectorSignedToFloat(*(undefined4 *)obj_r4,
                                        (byte)(in_fpscr >> 0x15) & 3);
    puVar1[0x12] = (uint)ALBW_AS_U32((*(float *)(*(int *)((int)obj_r4 + 0xd8) + 0x40c) +
                         fVar15 * *(float *)(*(int *)((int)obj_r4 + 0xd8) + 0x404)));
    puVar1[0x13] = *(uint *)((int)obj_r4 + 0x90);
    puVar1[0x14] = (uint)ALBW_AS_U32(fVar11);
    puVar1[0x15] = (uint)ALBW_AS_U32(fVar10);
    puVar1[0x16] = (uint)ALBW_AS_U32(fVar9);
    puVar1[0x17] = *(uint *)((int)obj_r4 + 0x90);
    puVar1[0x18] = (uint)ALBW_AS_U32(fVar7);
    puVar1[0x19] = (uint)ALBW_AS_U32(fVar6);
    puVar1[0x1a] = (uint)ALBW_AS_U32(fVar5);
    puVar1[0x1b] = *(uint *)((int)obj_r4 + 0x60);
    puVar1[0x1c] = *(uint *)((int)obj_r4 + 0x5c);
    puVar1[0x1d] = *(uint *)((int)obj_r4 + 0x58);
    puVar1[0x1e] = *(uint *)((int)obj_r4 + 0x54);
    puVar1[0x1f] = *(uint *)((int)obj_r4 + 0x70);
    puVar1[0x20] = *(uint *)((int)obj_r4 + 0x6c);
    puVar1[0x21] = *(uint *)((int)obj_r4 + 0x68);
    puVar1[0x22] = *(uint *)((int)obj_r4 + 100);
    puVar1[0x23] = *(uint *)((int)obj_r4 + 0x80);
    puVar1[0x24] = *(uint *)((int)obj_r4 + 0x7c);
    puVar1[0x25] = *(uint *)((int)obj_r4 + 0x78);
    param_2 = puVar1 + 0x28;
    puVar1[0x26] = *(uint *)((int)obj_r4 + 0x74);
    puVar1[0x27] = 0;
  }
  return param_2;
}

