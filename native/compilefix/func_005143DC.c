/* compilefix: USA 005143DC (EU 005143B4), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier 'BADSPACEBASE'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - ((int)(BADSPACEBASE *)0 + ADDR) + n (a pc-relative address) -> s_cf_<ADDR+n> (string in the code section) [1]
 *  - explicit casts at pointer-type mismatches (identity on the ARM) [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
extern char s_cf_00514590[];
#include "compilefix.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_0037BB40(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,uint param_4, float fparam_0,float fparam_1);
extern int func_004905E0(float fparam_0);
extern int func_004CF478(int param_1,int param_2);
extern float fRam00514578;
extern float fRam00514584;
extern float fRam00514588;
extern int iRam005145a0;
extern undefined4 uRam0051457c;
extern undefined4 uRam00514580;
extern undefined4 uRam0051458c;

// USA 005143DC <- EU 005143B4 (Ghidra, non-matching)
// GLOBAL UNK_00514578 float
// GLOBAL UNK_0051457c uint
// GLOBAL UNK_00514580 uint
// GLOBAL UNK_00514584 float
// GLOBAL UNK_00514588 float
// GLOBAL UNK_0051458c undefined4
// GLOBAL UNK_005145a0 int

undefined4 func_005143DC(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define afStack_84 ((float *)(albw_frame + 0xc))
  #define fStack_7c (*(float *)(albw_frame + 0x14))
  #define aiStack_78 ((int *)(albw_frame + 0x18))
  #define iStack_18 (*(int *)(albw_frame + 0x78))
  #define pcStack_14 (*(char * *)(albw_frame + 0x7c))
  puVar1 = (uint *)func_002C11E8(aiStack_78,10,10,0);
  func_0016898C(*(int *)(param_1 + 0x4b0),puVar1);
  func_004CF478(*(int *)(param_1 + 0x51c),1);
  func_00115C70(afStack_84,(float *)(param_1 + 0x574),(float *)(param_1 + 0x3d0));
  if (fStack_7c == fRam00514578 && afStack_84[0] == fRam00514578) {
    iVar2 = 0;
  }
  else if (fStack_7c < fRam00514578) {
    if (afStack_84[0] < fRam00514578) {
      if (afStack_84[0] < fStack_7c) {
        iVar2 = func_004905E0(fStack_7c / afStack_84[0]);
        iVar2 = -0x40000000 - iVar2;
      }
      else {
        iVar2 = func_004905E0(afStack_84[0] / fStack_7c);
        iVar2 = iVar2 + -0x80000000;
      }
    }
    else {
      fStack_7c = -fStack_7c;
      if (fStack_7c < afStack_84[0]) {
        iVar2 = func_004905E0(fStack_7c / afStack_84[0]);
        iVar2 = iVar2 + 0x40000000;
      }
      else {
        iVar2 = func_004905E0(afStack_84[0] / fStack_7c);
        iVar2 = -0x80000000 - iVar2;
      }
    }
  }
  else if (afStack_84[0] < fRam00514578) {
    afStack_84[0] = -afStack_84[0];
    if (fStack_7c < afStack_84[0]) {
      iVar2 = func_004905E0(fStack_7c / afStack_84[0]);
      iVar2 = iVar2 + -0x40000000;
    }
    else {
      iVar2 = func_004905E0(afStack_84[0] / fStack_7c);
      iVar2 = -iVar2;
    }
  }
  else if (fStack_7c < afStack_84[0]) {
    iVar2 = func_004905E0(fStack_7c / afStack_84[0]);
    iVar2 = 0x40000000 - iVar2;
  }
  else {
    iVar2 = func_004905E0(afStack_84[0] / fStack_7c);
  }
  uVar3 = uRam0051457c;
  if (0x3fffffff < iVar2) {
    uVar3 = uRam00514580;
  }
  func_0037BB40((undefined4 *)(param_1 + 0x59c),(undefined4 *)(param_1 + 0x3d0),
                (undefined4 *)((float *)(param_1 + 0x574)),uVar3,fRam00514588,fRam00514584);
  iStack_18 = iRam005145a0;
  *(undefined4 *)(param_1 + 0x598) = uRam0051458c;
  pcStack_14 = (char *)((int)s_cf_00514590);
  return func_00150A84((int *)param_1,&iStack_18,0);
}

