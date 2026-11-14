/* compilefix: USA 00333C10 (EU 00333BEC), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: member reference base type 'uint' (aka 'unsigned int') is not a structure or union
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - arr[i]._O_S_ -> typed byte access at (char *)&arr[i] + O [1]
 *  - Ghidra string label with punctuation (s_T<SE_..._ADDR + n) -> s_cf_<ADDR+n>, the same code-section address (checked: add rX,pc,#imm in the ARM) [1]
 *  - explicit (T)(uintptr_t) casts at int<->pointer mismatches (identity on the 32-bit ARM) [2]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
extern char s_cf_00333df8[];
#include "compilefix.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0011549C(float *param_1,float *param_2,float *param_3);
extern int func_001E3FD8(int param_1);
extern int func_003A4864(undefined4 *param_1,uint *param_2);
extern int func_00435ED0(int param_1,float *param_2);
extern int func_0043610C(int param_1,float *param_2);
extern int func_0043625C(int *param_1,undefined4 *param_2);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDB28(int param_1,int param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int DAT_00333dec;
extern int DAT_00333df0;
extern undefined4 DAT_00333df4;
extern float DAT_00333e14;
extern undefined4 DAT_00333e18;
extern int *DAT_00333e1c;
extern char s_Actor_DoorSwitchWind_kcl_00333df8[];

// USA 00333C10 <- EU 00333BEC (Ghidra, non-matching)
// GLOBAL DAT_00333dec int
// GLOBAL DAT_00333df0 int
// GLOBAL DAT_00333df4 undefined4
// GLOBAL DAT_00333e14 float
// GLOBAL DAT_00333e18 undefined4
// GLOBAL DAT_00333e1c int *
// GLOBAL s_cf_00333df8 string

int * func_00333C10(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define local_c0 (*(int *)(albw_frame + 0x0))
  #define local_bc (*(uint * *)(albw_frame + 0x4))
  #define uStack_b8 (*(undefined4 *)(albw_frame + 0x8))
  #define local_b4 (*(uint * *)(albw_frame + 0xc))
  #define local_b0 (*(int *)(albw_frame + 0x10))
  #define local_ac ((uint *)(albw_frame + 0x14))
  #define uStack_6d (*(undefined1 *)(albw_frame + 0x53))
  #define local_6c (*(float *)(albw_frame + 0x54))
  #define local_68 (*(undefined4 *)(albw_frame + 0x58))
  #define local_64 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x60))
  #define fStack_5c (*(float *)(albw_frame + 0x64))
  #define local_58 (*(undefined4 *)(albw_frame + 0x68))
  #define local_54 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x70))
  #define fStack_4c (*(float *)(albw_frame + 0x74))
  #define afStack_48 ((float *)(albw_frame + 0x78))
  #define local_24 (*(uint *)(albw_frame + 0x9c))
  piVar3 = (int *)(uintptr_t)(func_003A4864(param_1,param_2));
  iVar1 = DAT_00333dec;
  piVar3[200] = DAT_00333dec + 0x5c;
  *piVar3 = iVar1;
  bVar2 = func_00588BF0((int)piVar3,1);
  if (bVar2) {
    *(undefined1 *)((int)piVar3 + 0x2d7) = 1;
  }
  else {
    func_001E3FD8((int)piVar3);
    puVar4 = (undefined4 *)func_0010BAB4(0x48);
    puVar5 = (undefined4 *)0x0;
    if (puVar4 != (undefined4 *)0x0) {
      puVar5 = (undefined4 *)(uintptr_t)(func_004EDC9C(puVar4));
    }
    piVar6 = piVar3 + 0x121;
    piVar3[0x121] = (int)puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      local_b0 = 0x40;
      uStack_6d = 0;
      (*(undefined1 *)((char *)&local_ac[0] + 0)) = 0;
      local_c0 = DAT_00333df0;
      local_bc = (uint *)s_Actor_DoorSwitchWind_kcl_00333df8;
      uStack_b8 = DAT_00333df4;
      local_b4 = local_ac;
      (**(code **)(DAT_00333df0 + 8))(&local_c0);
      uVar7 = 0;
      do {
        if (*(char *)((int)local_bc + uVar7) == '\0') {
          if ((int)uVar7 < 0x40001) goto LAB_00333ce0;
          break;
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < 0x40001);
      uVar7 = 0;
LAB_00333ce0:
      if (local_b0 <= (int)uVar7) {
        uVar7 = local_b0 - 1;
      }
      (**(code **)(local_c0 + 8))(&local_c0);
      func_0010E3C4(local_ac,local_bc,uVar7);
      *(undefined1 *)((int)local_ac + uVar7) = 0;
      func_004EDB28(piVar3[0x121],(int)&uStack_b8);
      local_6c = DAT_00333e14;
      local_68 = DAT_00333e18;
      local_64 = DAT_00333e18;
      local_60 = DAT_00333e18;
      fStack_5c = DAT_00333e14;
      local_58 = DAT_00333e18;
      local_54 = DAT_00333e18;
      local_50 = DAT_00333e18;
      fStack_4c = DAT_00333e14;
      func_00491624(afStack_48,0,piVar3[0xfa],0);
      func_0011549C(&local_6c,&local_6c,afStack_48);
      func_00435ED0(*(int *)(*piVar6 + 0x14),&local_6c);
      func_0043625C(*(int **)(*piVar6 + 0x14),piVar3 + 0xf4);
      func_0043610C(*(int *)(*piVar6 + 0x14),(float *)(param_2 + 4));
      local_24 = piVar3[0xb3];
      func_004EDAD0(*piVar6,&local_24);
      *(short *)(*piVar6 + 0x2c) = (short)piVar3[0x15];
      func_004ED9C8(*piVar6);
      func_004A879C(*DAT_00333e1c,*piVar6,0);
    }
    func_001E3FD8((int)piVar3);
  }
  return piVar3;
}

