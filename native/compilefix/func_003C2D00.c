/* compilefix: USA 003C2D00 (EU 003C2CDC), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: operand of type 'float' cannot be cast to a pointer type
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [2]
 *  - explicit casts at pointer-type mismatches (identity on the ARM) [15]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004A9F98(int param_1,uint *param_2,uint param_3);
extern float func_004F944C(void);
extern undefined4 * *DAT_003c30a4;
extern undefined4 DAT_003c30ac;
extern undefined4 *DAT_003c30b0;
extern int *DAT_003c30b4;

// USA 003C2D00 <- EU 003C2CDC (Ghidra, non-matching)
// GLOBAL DAT_003c30a4 undefined4 * *
// GLOBAL DAT_003c30ac undefined4
// GLOBAL DAT_003c30b0 undefined4 *
// GLOBAL DAT_003c30b4 int *

undefined4 func_003C2D00(int param_1,float *param_2,undefined4 **param_3)

{
  uint uVar1;
  float *pfVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 **ppuVar8;
  _Alignas(8) unsigned char albw_frame[0xe0];
  #define local_d4 (*(undefined4 ** *)(albw_frame + 0xc))
  #define local_d0 (*(undefined4 *)(albw_frame + 0x10))
  #define local_cc (*(undefined4 *)(albw_frame + 0x14))
  #define local_c8 (*(undefined4 *)(albw_frame + 0x18))
  #define local_c4 (*(uint *)(albw_frame + 0x1c))
  #define local_c0 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_bc (*(undefined4 *)(albw_frame + 0x24))
  #define local_b8 (*(float * *)(albw_frame + 0x28))
  #define local_b4 (*(float * *)(albw_frame + 0x2c))
  #define local_b0 (*(undefined4 * *)(albw_frame + 0x30))
  #define local_ac (*(undefined1 *)(albw_frame + 0x34))
  #define local_ab (*(undefined1 *)(albw_frame + 0x35))
  #define local_a8 (*(undefined4 ** *)(albw_frame + 0x38))
  #define local_a4 (*(undefined4 * *)(albw_frame + 0x3c))
  #define local_a0 (*(undefined4 *)(albw_frame + 0x40))
  #define local_9c (*(undefined4 * *)(albw_frame + 0x44))
  #define local_98 (*(undefined2 *)(albw_frame + 0x48))
  #define local_94 (*(float *)(albw_frame + 0x4c))
  #define local_90 (*(float *)(albw_frame + 0x50))
  #define local_8c (*(undefined4 * *)(albw_frame + 0x54))
  #define local_88 (*(undefined4 * *)(albw_frame + 0x58))
  #define local_84 (*(undefined4 * *)(albw_frame + 0x5c))
  #define local_80 (*(undefined4 * *)(albw_frame + 0x60))
  #define local_7c (*(float *)(albw_frame + 0x64))
  #define local_78 (*(undefined4 * *)(albw_frame + 0x68))
  #define local_74 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_70 (*(undefined4 * *)(albw_frame + 0x70))
  #define local_64 ((byte *)(albw_frame + 0x7c))
  #define local_58 (*(undefined4 *)(albw_frame + 0x88))
  #define local_54 (*(float *)(albw_frame + 0x8c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x90))
  #define local_4c (*(undefined4 *)(albw_frame + 0x94))
  #define local_48 (*(float *)(albw_frame + 0x98))
  #define local_44 (*(undefined4 *)(albw_frame + 0x9c))
  #define local_40 (*(undefined4 * *)(albw_frame + 0xa0))
  #define local_3c (*(undefined4 * *)(albw_frame + 0xa4))
  #define local_38 (*(undefined4 * *)(albw_frame + 0xa8))
  ppuVar8 = DAT_003c30a4;
  uVar1 = *(uint *)(param_1 + 0x30);
  if (uVar1 == 4) {
    puVar4 = *(undefined4 **)(param_1 + 8);
    *puVar4 = *(undefined4 *)(param_1 + 0xc);
    puVar4[1] = *(undefined4 *)(param_1 + 0x10);
    puVar4[2] = *(undefined4 *)(param_1 + 0x14);
    if (param_2 != (float *)0x0) {
      *param_2 = ALBW_AS_F32(ppuVar8);
      param_2[1] = ALBW_AS_F32(ppuVar8);
      param_2[2] = ALBW_AS_F32(ppuVar8);
    }
  }
  else if (((int)uVar1 < 3) || (uVar1 == 5)) {
    *(undefined1 *)(param_1 + 0x70) = 0;
    *(undefined1 *)(param_1 + 0x71) = 0;
    *(undefined1 *)(param_1 + 0x72) = 0;
    iVar5 = *(int *)(param_1 + 4);
    uVar6 = 0;
    if (ALBW_AS_F32(ppuVar8) < *(float *)(param_1 + 0x6c)) {
      local_54 = ALBW_AS_F32((uVar1 & 0xffff0000 | 0xffff));
      local_64[0] = 0;
      local_64[1] = 0;
      local_64[2] = 0;
      local_64[3] = 0;
      local_64[4] = 0;
      local_64[5] = 0;
      local_64[6] = 0;
      local_64[7] = 0;
      local_64[8] = 0;
      local_64[9] = 0;
      local_64[10] = 0;
      local_64[0xb] = 0;
      local_58 = 0;
      local_50 = 0xff;
      local_4c = 0;
      local_48 = 0.0;
      local_44 = 0;
      local_40 = (undefined4 *)(ppuVar8);
      local_3c = (undefined4 *)CONCAT22((*(undefined2 *)((char *)&local_3c + 2)),0x100);
      func_00110D44((undefined4 *)(&local_d4),local_64,0x2a);
      local_a4 = (undefined4 *)*DAT_003c30b0;
      local_a0 = DAT_003c30b0[1];
      local_9c = (undefined4 *)DAT_003c30b0[2];
      pfVar2 = *(float **)(param_1 + 8);
      local_94 = *pfVar2;
      local_8c = (undefined4 *)CF_FBITS(pfVar2[2]);
      local_90 = pfVar2[1] + *(float *)(param_1 + 0x58);
      local_a8 = ppuVar8;
      local_88 = (undefined4 *)(ppuVar8);
      local_84 = (undefined4 *)(ppuVar8);
      local_80 = (undefined4 *)(ppuVar8);
      func_00115C54(&local_94,&local_94,(float *)(param_1 + 0x60));
      iVar3 = *(int *)(param_1 + 4);
      local_74 = *(undefined4 *)(iVar3 + 0x370);
      local_7c = *(float *)(iVar3 + 0x368);
      local_78 = (undefined4 *)CF_FBITS((*(float *)(iVar3 + 0x36c) + *(float *)(param_1 + 0x58)));
      func_00115C54(&local_7c,&local_7c,(float *)(param_1 + 0x60));
      local_d0 = *(undefined4 *)(param_1 + 0x28);
      local_b4 = &local_7c;
      local_b8 = &local_94;
      local_d4 = &local_88;
      local_a8 = *(undefined4 ***)(param_1 + 0x6c);
      param_3 = (undefined4 **)0x0;
      local_a0 = *(undefined4 *)(param_1 + 0x6c);
      local_c8 = *(undefined4 *)(iVar5 + 0x2cc);
      local_c0 = 0xddf;
      local_c4 = CONCAT22((*(undefined2 *)((char *)&local_c4 + 2)),*(undefined2 *)(iVar5 + 0x54));
      local_a4 = (undefined4 *)(ppuVar8);
      local_9c = (undefined4 *)(ppuVar8);
      iVar3 = func_004A9F98(*DAT_003c30b4,(uint *)&local_d4,0xff);
      if ((iVar3 != 0) &&
         ((local_84 = (undefined4 *)(ppuVar8), ALBW_AS_F32(local_88) != ALBW_AS_F32(ppuVar8) ||
          (ALBW_AS_F32(local_80) != ALBW_AS_F32(ppuVar8))))) {
        param_3 = &local_88;
        func_00115C54(*(float **)(param_1 + 8),*(float **)(param_1 + 8),(float *)param_3);
        uVar6 = 1;
      }
    }
    local_c4 = (uint)param_3 & 0xffff0000 | 0xffff;
    local_d4 = (undefined4 **)0x0;
    local_d0 = 0;
    local_cc = 0;
    local_c8 = 0;
    local_c0 = 0xff;
    uStack_bc = 0;
    local_b8 = (float *)0x0;
    local_b4 = (float *)0x0;
    local_ac = 0;
    local_ab = 1;
    local_b0 = (undefined4 *)(ppuVar8);
    func_00110D44((undefined4 *)(&local_a8),(byte *)&local_d4,0x2a);
    puVar4 = *(undefined4 **)(param_1 + 8);
    local_58 = *puVar4;
    local_50 = puVar4[2];
    local_54 = ALBW_AS_F32(puVar4[1]) + *(float *)(param_1 + 0x58);
    iVar3 = *(int *)(param_1 + 4);
    local_44 = *(undefined4 *)(iVar3 + 0x370);
    local_4c = *(undefined4 *)(iVar3 + 0x368);
    local_48 = *(float *)(iVar3 + 0x36c) + *(float *)(param_1 + 0x58);
    local_a4 = *(undefined4 **)(param_1 + 0x28);
    local_88 = &local_4c;
    local_8c = &local_58;
    local_a8 = &local_40;
    local_7c = *(float *)(param_1 + 0x5c);
    local_74 = *(undefined4 *)(param_1 + 0x5c);
    local_9c = *(undefined4 **)(iVar5 + 0x2cc);
    local_94 = 4.97601e-42;
    local_98 = *(undefined2 *)(iVar5 + 0x54);
    local_78 = (undefined4 *)(ppuVar8);
    local_70 = (undefined4 *)(ppuVar8);
    local_40 = (undefined4 *)(ppuVar8);
    local_3c = (undefined4 *)(ppuVar8);
    local_38 = (undefined4 *)(ppuVar8);
    iVar5 = func_004A9F98(*DAT_003c30b4,(uint *)&local_a8,0xff);
    if (iVar5 != 0) {
      func_00115C54(*(float **)(param_1 + 8),*(float **)(param_1 + 8),(float *)&local_40);
      if (param_2 != (float *)0x0) {
        fVar7 = func_004F944C();
        param_2[1] = fVar7;
      }
      uVar6 = 1;
    }
    return uVar6;
  }
  return 0;
}

