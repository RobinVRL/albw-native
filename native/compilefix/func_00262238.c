/* compilefix: USA 00262238 (EU 00262260), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: operand of type 'float' cannot be cast to a pointer type
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [2]
 *  - explicit casts at pointer-type mismatches (identity on the ARM) [4]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_00323DF0(char *param_1,char param_2,int *param_3);
extern int func_00323E88(char *param_1,uint param_2,uint *param_3);
extern int func_003242F8(int param_1,float *param_2);
extern int func_003243A8(char *param_1,float *param_2,float *param_3);
extern int func_0036CE40(int *param_1,uint *param_2);
extern int func_0036CF20(undefined4 *param_1);
extern int func_0036CF2C(uint *param_1,undefined4 param_2,float fparam_0);
extern int func_00436700(int param_1,undefined4 *param_2);
extern int func_004905E0(float fparam_0);
extern int func_0051D020(undefined4 *param_1,undefined4 *param_2);
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern int func_0058A7D4(void);
extern int func_0058E2B8(int *param_1);
extern int func_0066034C(undefined4 *param_1,undefined1 param_2);
extern float DAT_00262598;
extern float DAT_0026259c;
extern undefined4 DAT_002625a0;
extern uint DAT_002625a4;
extern float DAT_002625a8;
extern float DAT_002625e8;
extern char s_SE_Gooze_V_MOVE_002625d8[];

// USA 00262238 <- EU 00262260 (Ghidra, non-matching)
// GLOBAL DAT_00262598 float
// GLOBAL DAT_0026259c float
// GLOBAL DAT_002625a0 undefined4
// GLOBAL DAT_002625a4 uint
// GLOBAL DAT_002625a8 float
// GLOBAL DAT_002625e8 float
// GLOBAL s_SE_Gooze_V_MOVE_002625d8 string

undefined4 func_00262238(int param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define local_3c (*(char * *)(albw_frame + 0x4))
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x14))
  #define local_28 (*(float *)(albw_frame + 0x18))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x20))
  func_00115D70((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x3dc),DAT_00262598);
  iVar2 = func_003243A8((char *)(param_1 + 0x8f0),(float *)(param_1 + 0x3d0),
                        (float *)(param_1 + 0x3dc));
  if (iVar2 == 0) {
    if (*(char *)(param_1 + 0xa00) == '\0') {
      fVar7 = DAT_0026259c;
      func_003242F8(param_1 + 0x8f0,&local_40);
      if (local_38 == fVar7 && local_40 == fVar7) {
        iVar2 = 0;
      }
      else if (local_38 < fVar7) {
        if (local_40 < fVar7) {
          if (local_40 < local_38) {
            iVar2 = func_004905E0(local_38 / local_40);
            iVar2 = -0x40000000 - iVar2;
          }
          else {
            iVar2 = func_004905E0(local_40 / local_38);
            iVar2 = iVar2 + -0x80000000;
          }
        }
        else {
          fVar7 = -local_38;
          if (fVar7 < local_40) {
            iVar2 = func_004905E0(fVar7 / local_40);
            iVar2 = iVar2 + 0x40000000;
          }
          else {
            iVar2 = func_004905E0(local_40 / fVar7);
            iVar2 = -0x80000000 - iVar2;
          }
        }
      }
      else if (local_40 < fVar7) {
        fVar7 = -local_40;
        if (local_38 < fVar7) {
          iVar2 = func_004905E0(local_38 / fVar7);
          iVar2 = iVar2 + -0x40000000;
        }
        else {
          iVar2 = func_004905E0(fVar7 / local_38);
          iVar2 = -iVar2;
        }
      }
      else if (local_38 < local_40) {
        iVar2 = func_004905E0(local_38 / local_40);
        iVar2 = 0x40000000 - iVar2;
      }
      else {
        iVar2 = func_004905E0(local_40 / local_38);
      }
      local_34 = ALBW_AS_F32((iVar2 - *(int *)(param_1 + 1000)));
      uVar5 = func_0058E2B8((int *)&local_34);
      if (uVar5 < DAT_002625a4) {
        func_0051D2CC((int *)(param_1 + 1000),iVar2,DAT_002625a8);
      }
      else {
        *(int *)(param_1 + 1000) = iVar2;
      }
    }
    else {
      fVar7 = DAT_0026259c;
      func_0036CF20(*(undefined4 **)(param_1 + 0xa04));
      uVar8 = CONCAT44(DAT_002625a0,fVar7);
      iVar2 = 0;
      do {
        if ((*(char *)(param_1 + 0x8e0) != iVar2) ||
           (bVar1 = func_00323DF0((char *)(param_1 + 0x8f0),(char)iVar2,(int *)0x0), bVar1)) {
          func_0036CF2C(*(uint **)(param_1 + 0xa04),iVar2,ALBW_AS_F32(((ulonglong)uVar8 >> 0x20)));
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 4);
      puVar3 = (uint *)func_0058A7D4();
      fVar6 = ALBW_AS_F32(uVar8);
      uVar4 = func_0036CE40(*(int **)(param_1 + 0xa04),puVar3);
      *(char *)(param_1 + 0x8e0) = (char)uVar4;
      fVar7 = SQRT(*(float *)(param_1 + 0x3dc) * *(float *)(param_1 + 0x3dc) +
                   *(float *)(param_1 + 0x3e4) * *(float *)(param_1 + 0x3e4));
      local_40 = fVar6;
      local_3c = (char *)CF_FBITS(fVar6);
      local_38 = fVar6;
      func_00436700((int)(char)uVar4,(undefined4 *)(&local_40));
      func_00115D70(&local_28,&local_40,fVar7);
      local_34 = local_28;
      uStack_30 = uStack_24;
      uStack_2c = uStack_20;
      func_0051D020((undefined4 *)(param_1 + 0x3dc),(undefined4 *)(&local_34));
      *(undefined1 *)(param_1 + 0xa00) = 0;
    }
  }
  else {
    fVar7 = DAT_0026259c;
    puVar3 = (uint *)func_0058A7D4();
    uVar8 = func_00323E88((char *)(param_1 + 0x8f0),(int)*(char *)(param_1 + 0x8e0),puVar3);
    *(char *)(param_1 + 0x8e0) = (char)uVar8;
    fVar6 = SQRT(*(float *)(param_1 + 0x3dc) * *(float *)(param_1 + 0x3dc) +
                 *(float *)(param_1 + 0x3e4) * *(float *)(param_1 + 0x3e4));
    local_40 = fVar7;
    local_3c = (char *)CF_FBITS(fVar7);
    local_38 = fVar7;
    func_00436700((int)uVar8,(undefined4 *)(&local_40));
    func_00115D70(&local_28,&local_40,fVar6);
    local_34 = local_28;
    uStack_30 = uStack_24;
    uStack_2c = uStack_20;
    func_0051D020((undefined4 *)(param_1 + 0x3dc),(undefined4 *)(&local_34));
    *(undefined1 *)(param_1 + 0xa00) = 0;
  }
  if (*(uint *)(param_1 + 0x8e4) < *(uint *)(param_1 + 0x8e8)) {
    local_3c = s_SE_Gooze_V_MOVE_002625d8;
    local_40 = DAT_002625e8;
    return func_001507D8(param_1,(int *)&local_40,0);
  }
  return func_0066034C((undefined4 *)(param_1 + 0x8bc),1);
}

