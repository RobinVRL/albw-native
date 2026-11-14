/* compilefix: USA 00308C2C (EU 00308C08), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: operand of type 'float' cannot be cast to a pointer type
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [2]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115CE4(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_004356B4(int *param_1);
extern float func_004D7E0C(float *param_1,uint param_2,uint param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern float * * *DAT_00309004;
extern int *DAT_00309008;
extern uint DAT_0030900c;
extern float DAT_00309010;
extern undefined4 DAT_00309014;
extern float * *DAT_00309018;
extern uint DAT_0030901c;
extern float * * *DAT_00309020;
extern float *DAT_00309024;
extern uint DAT_00309028;
extern float DAT_0030902c;

// USA 00308C2C <- EU 00308C08 (Ghidra, non-matching)
// GLOBAL DAT_00309004 float * * *
// GLOBAL DAT_00309008 int *
// GLOBAL DAT_0030900c uint
// GLOBAL DAT_00309010 float
// GLOBAL DAT_00309014 undefined4
// GLOBAL DAT_00309018 float * *
// GLOBAL DAT_0030901c uint
// GLOBAL DAT_00309020 float * * *
// GLOBAL DAT_00309024 float *
// GLOBAL DAT_00309028 uint
// GLOBAL DAT_0030902c float

undefined4 func_00308C2C(int param_1,float *param_2,int param_3)

{
  short sVar1;
  undefined2 uVar2;
  float ***pppfVar3;
  float ***pppfVar4;
  float ***pppfVar5;
  float *pfVar6;
  int *piVar7;
  float *pfVar8;
  uint uVar9;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_a8 (*(float ** *)(albw_frame + 0x8))
  #define uStack_a4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_a0 (*(float ** *)(albw_frame + 0x10))
  #define local_9c (*(float ** *)(albw_frame + 0x14))
  #define local_98 (*(float ** *)(albw_frame + 0x18))
  #define local_94 (*(float ** *)(albw_frame + 0x1c))
  #define local_90 (*(float ** *)(albw_frame + 0x20))
  #define ppfStack_8c (*(float ** *)(albw_frame + 0x24))
  #define local_88 (*(float ** *)(albw_frame + 0x28))
  #define local_84 (*(float * *)(albw_frame + 0x2c))
  #define local_80 (*(int *)(albw_frame + 0x30))
  #define local_7c (*(int *)(albw_frame + 0x34))
  #define local_78 (*(float ** *)(albw_frame + 0x38))
  #define local_74 (*(float ** *)(albw_frame + 0x3c))
  #define ppfStack_70 (*(float ** *)(albw_frame + 0x40))
  #define ppfStack_6c (*(float ** *)(albw_frame + 0x44))
  #define local_68 (*(float ** *)(albw_frame + 0x48))
  #define ppfStack_64 (*(float ** *)(albw_frame + 0x4c))
  #define ppfStack_60 (*(float ** *)(albw_frame + 0x50))
  #define local_5c (*(float ** *)(albw_frame + 0x54))
  #define ppfStack_58 (*(float ** *)(albw_frame + 0x58))
  #define local_54 (*(float ** *)(albw_frame + 0x5c))
  #define fStack_50 (*(float *)(albw_frame + 0x60))
  #define pfStack_4c (*(float * *)(albw_frame + 0x64))
  #define local_48 (*(float * *)(albw_frame + 0x68))
  #define fStack_44 (*(float *)(albw_frame + 0x6c))
  #define local_40 (*(float * *)(albw_frame + 0x70))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x74))
  #define pfStack_38 (*(float * *)(albw_frame + 0x78))
  #define local_34 (*(float *)(albw_frame + 0x7c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x80))
  #define local_2c (*(float *)(albw_frame + 0x84))
  uVar9 = DAT_0030901c;
  pppfVar3 = DAT_00309004;
  local_84 = (float *)*DAT_00309008;
  local_80 = DAT_00309008[1];
  local_7c = DAT_00309008[2];
  sVar1 = *(short *)(*(int *)(param_1 + 0x418) + 0x54);
  uVar2 = SUB42(DAT_00309004,0);
  if (sVar1 == 8) {
    piVar7 = *(int **)(param_1 + 0x418);
    if (param_3 == 0) {
      local_a8 = &local_84;
      local_78 = (float **)DAT_00309020;
      fVar10 = func_0054DE3C(param_1,0,1);
      func_00115D70((float *)&local_a0,(float *)local_78,fVar10);
      pppfVar5 = &local_90;
      local_90 = local_a0;
      ppfStack_8c = local_9c;
      local_88 = local_98;
      pppfVar4 = (float ***)local_a8;
    }
    else {
      func_004D7E0C((float *)(piVar7 + 0x19),DAT_0030901c,*(uint *)(param_1 + 1000));
      pppfVar4 = DAT_00309020;
      local_a8 = &local_84;
      fVar10 = func_0054DE3C(param_1,0,1);
      func_00115D70((float *)&local_78,(float *)pppfVar4,fVar10);
      pfVar6 = DAT_00309024;
      local_88 = (float **)&local_94;
      local_94 = local_78;
      local_90 = local_74;
      ppfStack_8c = ppfStack_70;
      fVar10 = func_0054DE3C(param_1,0,2);
      func_00115D70((float *)&local_74,pfVar6,-fVar10);
      local_a0 = local_74;
      local_9c = ppfStack_70;
      local_98 = ppfStack_6c;
      func_00115C54((float *)local_a8,(float *)local_88,(float *)&local_a0);
      pppfVar5 = (float ***)&local_84;
      pppfVar4 = pppfVar5;
    }
    func_00115CE4((float *)pppfVar4,(float *)(piVar7 + 0x19),(float *)pppfVar5);
    func_00115C54((float *)&local_84,(float *)&local_84,param_2);
    local_a8 = (float **)0xa4;
    *(undefined2 *)(piVar7 + 10) = 0xa4;
    piVar7[1] = (int)local_84;
    piVar7[2] = local_80;
    piVar7[3] = local_7c;
    func_004356B4(piVar7);
    piVar7 = *(int **)(param_1 + 0x420);
    if (param_3 == 0) {
      uVar9 = 0;
    }
    func_004D7E0C((float *)(piVar7 + 0x19),uVar9,*(uint *)(param_1 + 1000));
    piVar7[1] = (int)local_84;
    piVar7[2] = local_80;
    piVar7[3] = local_7c;
    local_9c = (float **)pppfVar3;
    local_a8 = (float **)CONCAT22((*(undefined2 *)((char *)&local_a8 + 2)),uVar2);
    *(undefined2 *)(piVar7 + 10) = uVar2;
  }
  else {
    if (sVar1 != 7) {
      if (sVar1 == 9) {
        piVar7 = *(int **)(param_1 + 0x418);
        func_004D7E0C((float *)&local_78,DAT_0030900c,*(uint *)(param_1 + 1000));
        func_004D80A4(&local_34,*(uint *)(param_1 + 1000),DAT_00309010);
        local_30 = DAT_00309014;
        local_9c = (float **)CF_FBITS(-local_34);
        local_94 = (float **)CF_FBITS(-local_2c);
        local_98 = DAT_00309018;
        func_00115D70((float *)&local_48,(float *)&local_9c,ALBW_AS_F32(piVar7[0x1c]));
        pfVar6 = (float *)(piVar7 + 0x16);
        pfVar8 = (float *)(piVar7 + 0x19);
        local_54 = (float **)local_48;
        fStack_50 = fStack_44;
        pfStack_4c = local_40;
        func_00115C70((float *)&local_40,pfVar8,pfVar6);
        local_a8 = (float **)local_40;
        uStack_a4 = uStack_3c;
        local_a0 = (float **)pfStack_38;
        func_00115CE4(pfVar8,(float *)&local_78,(float *)&local_a8);
        func_00115C54(pfVar6,pfVar6,(float *)&local_54);
        func_00115C54(pfVar8,pfVar8,pfVar6);
        local_90 = (float **)0xa4;
        *(undefined2 *)(piVar7 + 10) = 0xa4;
        func_004356B4(piVar7);
        piVar7 = *(int **)(param_1 + 0x420);
        local_90 = (float **)pppfVar3;
        *(undefined2 *)(piVar7 + 10) = uVar2;
        func_004356B4(piVar7);
      }
      return 0;
    }
    piVar7 = *(int **)(param_1 + 0x418);
    func_004D7E0C(&fStack_50,DAT_00309028,*(uint *)(param_1 + 1000));
    pppfVar4 = DAT_00309020;
    fVar10 = func_0054DE3C(param_1,0,1);
    func_00115D70((float *)&local_5c,(float *)pppfVar4,fVar10);
    pfVar6 = DAT_00309024;
    local_68 = local_5c;
    ppfStack_64 = ppfStack_58;
    ppfStack_60 = local_54;
    fVar10 = func_0054DE3C(param_1,0,2);
    func_00115D70((float *)&local_5c,pfVar6,-fVar10);
    local_78 = local_5c;
    local_74 = ppfStack_58;
    ppfStack_70 = local_54;
    func_00115D70((float *)&local_5c,(float *)&local_78,DAT_0030902c);
    local_98 = local_5c;
    local_94 = ppfStack_58;
    local_90 = local_54;
    func_00115C54((float *)&local_84,(float *)&local_68,(float *)&local_98);
    func_00115CE4((float *)&local_84,&fStack_50,(float *)&local_84);
    func_00115C54((float *)&local_84,(float *)&local_84,param_2);
    local_a8 = (float **)CONCAT22((*(undefined2 *)((char *)&local_a8 + 2)),0xa4);
    local_88 = (float **)0xa4;
    *(undefined2 *)(piVar7 + 10) = 0xa4;
    piVar7[1] = (int)local_84;
    piVar7[2] = local_80;
    piVar7[3] = local_7c;
    func_004356B4(piVar7);
    piVar7 = *(int **)(param_1 + 0x420);
    piVar7[1] = (int)local_84;
    piVar7[2] = local_80;
    piVar7[3] = local_7c;
    local_a8 = (float **)pppfVar3;
    *(undefined2 *)(piVar7 + 10) = uVar2;
  }
  return func_004356B4(piVar7);
}

