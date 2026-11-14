/* compilefix: USA 00159FB8 (EU 00159FBC), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: operand of type 'float' cannot be cast to a pointer type
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [1]
 *  - the StateMgr state-handler call (pointer-to-member dispatch, EU 0015A018..0015A050) lost its
 *    `this` in Ghidra's text: passed explicitly, r0 = *(sm+0x14) + (adj >> 1)
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_003C29D8(int *param_1);
extern int func_003C2D00(int param_1,float *param_2,undefined4 **param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern float func_004F48F0(int param_1);
extern float func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern float func_004F898C(void);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern float func_004F9594(void);
extern int func_004FB0D8(int param_1,float *param_2);
extern int func_00658228(undefined4 *param_1,undefined1 param_2);
extern char s_Appear_0015a230[];

// USA 00159FB8 <- EU 00159FBC (Ghidra, non-matching)
// GLOBAL s_Appear_0015a230 string

undefined4 func_00159FB8(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 **ppuVar5;
  undefined4 **ppuVar6;
  int *piVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 ** *)(albw_frame + 0xc))
  #define ppuStack_20 (*(undefined4 ** *)(albw_frame + 0x10))
  iVar1 = func_004F70A8(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  piVar7 = param_1 + 0x22f;
  if (((char)param_1[0x230] != '\x06' && (char)param_1[0x230] != '\a') &&
     (iVar1 = func_004F8998(param_1,0,(char *)0x0), iVar1 != 0)) {
    func_00658228(piVar7,6);
  }
  ppuVar6 = (undefined4 **)param_1[0x234];
  piVar3 = (int *)(param_1[0x236] + (char)param_1[0x230] * 8);
  uVar2 = *(uint *)(param_1[0x236] + (char)param_1[0x230] * 8 + 4);
  if ((uVar2 & 1) != 0) {
    piVar3 = (int *)(*piVar3 + *(int *)((int)ppuVar6 + ((int)uVar2 >> 1)));
  }
  /* StateMgr PMF dispatch: EU 0015A038 r0 = obj(+0x14) + (adj >> 1) is the handler's `this` */
  (*(code *)*piVar3)((int)ppuVar6 + ((int)uVar2 >> 1));
  iVar1 = *piVar7;
  ppuVar5 = (undefined4 **)param_1[0x233];
  *piVar7 = iVar1 + 1;
  if (ppuVar5 != (undefined4 **)0x0) {
    fVar8 = (float)VectorUnsignedToFloat(iVar1 + 1,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210((int)ppuVar5,1,fVar8);
  }
  func_003C29D8(param_1 + 0x238);
  if (param_1[0x244] < 3) {
    uVar2 = param_1[0x167] & 0xffffffef;
  }
  else {
    uVar2 = param_1[0x167] | 0x10;
  }
  param_1[0x167] = uVar2;
  if ((char)param_1[0x230] != '\0') {
    fVar8 = func_004F898C();
    fVar8 = ALBW_AS_F32(param_1[0xf8]) - fVar8;
    fVar9 = func_004F9594();
    if (fVar8 < -fVar9) {
      fVar8 = -fVar9;
    }
    param_1[0xf8] = (int)ALBW_AS_U32(fVar8);
    func_004FB0D8((int)param_1,(float *)(param_1 + 0xf8));
    if ((char)param_1[0x230] == '\x02' || (char)param_1[0x230] == '\x03') {
      if (param_1[0x263] == 0) {
        if (param_1[0xd1] == 0) {
          param_1[0x264] = 0;
          ppuVar5 = (undefined4 **)s_Appear_0015a230;
          goto LAB_0015a164;
        }
        func_004A1B9C(&local_28,param_1[0xd1],(uint *)s_Appear_0015a230);
        param_1[0x263] = local_28;
        param_1[0x264] = (int)local_24;
        ppuVar5 = local_24;
        if (param_1[0x263] == 0) goto LAB_0015a164;
      }
      local_28 = param_1[0xf4];
      ppuStack_20 = (undefined4 **)param_1[0xf6];
      local_24 = (undefined4 **)CF_FBITS((ALBW_AS_F32(param_1[0xf5]) + ALBW_AS_F32(param_1[0x24e])));
      iVar1 = param_1[0x263];
      ppuVar5 = ppuStack_20;
      if (iVar1 != 0) {
        ppuVar5 = *(undefined4 ***)(iVar1 + 0x1c);
        ppuVar6 = (undefined4 **)param_1[0x264];
        if (ppuVar5 == ppuVar6) {
          func_004A2F38(iVar1,&local_28);
        }
      }
      goto LAB_0015a164;
    }
  }
  iVar1 = param_1[0x263];
  if (iVar1 != 0) {
    ppuVar5 = (undefined4 **)param_1[0x264];
    if (*(undefined4 ***)(iVar1 + 0x1c) == ppuVar5) {
      iVar4 = *(int *)(iVar1 + 0x20);
      ppuVar5 = (undefined4 **)0x1;
      if (((iVar4 != 0) &&
          (ppuVar6 = *(undefined4 ***)(iVar1 + 0x24), ppuVar6 == *(undefined4 ***)(iVar4 + 0xc))) &&
         (ppuVar6 = *(undefined4 ***)(iVar4 + 4), 0 < (int)ppuVar6)) {
        *(undefined1 *)(iVar4 + 0x280) = 1;
      }
      *(uint *)(iVar1 + 0x3c) = *(uint *)(iVar1 + 0x3c) & 0xfffffffb | 8;
    }
    param_1[0x263] = 0;
    param_1[0x264] = 0;
  }
LAB_0015a164:
  func_004F48F0((int)param_1);
  *(undefined1 *)(param_1 + 0x25d) = 0;
  func_004F5588((int)param_1);
  func_003C2D00((int)(param_1 + 0x238),(float *)(param_1 + 0xf7),ppuVar5);
  return func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,(float *)ppuVar6);
}

