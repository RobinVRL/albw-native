/* compilefix: USA 002D6348 (EU 002D6324), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier 's_'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - Ghidra string label with punctuation (s_T<SE_..._ADDR + n) -> s_cf_<ADDR+n>, the same code-section address (checked: add rX,pc,#imm in the ARM) [3]
 *  - implicit float<->int conversions (Ghidra COPY between a float and an int-typed variable or
 *    pool word, e.g. `fVar = _DAT_xxx;`, `puVar[3] = fVar;`) made bit copies [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
extern char s_cf_002d69fb[];
extern char s_cf_002d6ef3[];
extern char s_cf_002d6ef4[];
#include "compilefix.h"

extern int func_00110848(int param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00115D88(float *param_1,float *param_2,float fparam_0);
extern int func_001DCE44(int param_1,int param_2,int param_3);
extern int func_001E8618(int param_1);
extern int func_002D55D0(int param_1,uint param_2);
extern int func_002D55E8(int param_1);
extern int func_002D6048(int param_1);
extern int func_004356B4(int *param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A9120(undefined4 param_1,int param_2);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004E9BEC(int param_1,int *param_2,int param_3);
extern int func_004EB5E8(int param_1);
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern int func_0052E454(int param_1,float *param_2,int param_3,float fparam_0);
extern int func_0052E620(int param_1,int param_2);
extern int func_0052EE94(int param_1);
extern int func_0053ECB4(int param_1);
extern int func_0053EDD8(int param_1);
extern int func_0054C970(int param_1);
extern int func_00552FDC(int param_1,float fparam_0);
extern float func_00553058(int param_1);
extern int func_00553094(int param_1);
extern int func_005531F8(int param_1,int *param_2);
extern float DAT_002d664c;
extern int *DAT_002d6650;
extern undefined4 DAT_002d6654;
extern float DAT_002d6658;
extern char *DAT_002d665c;
extern char *DAT_002d6660;
extern int *DAT_002d6680;
extern float DAT_002d6684;
extern float DAT_002d6688;
extern float DAT_002d668c;
extern float DAT_002d6690;
extern float DAT_002d69d4;
extern float DAT_002d69d8;
extern float DAT_002d69dc;
extern undefined4 DAT_002d69e0;
extern undefined4 DAT_002d69e4;
extern int DAT_002d69e8;
extern undefined4 *DAT_002d69ec;
extern float DAT_002d69f0;
extern float DAT_002d69f4;
extern undefined DAT_002d69f8;
extern undefined4 DAT_002d6d80;
extern undefined DAT_002d6d84;
extern undefined DAT_002d6d8c;
extern float DAT_002d6d94;
extern float DAT_002d6d98;
extern int *DAT_002d6d9c;
extern int DAT_002d6eec;
extern undefined DAT_002d6ef0;
extern char s_SE_PL_DASH_002d6664[];
extern char s_SE_PL_DASH_WAIT_002d6670[];
extern char s__SE_PL_DASH_FOOTSTEPS_002d69fb[];
extern undefined4 _DAT_002d69f8;
extern undefined4 _DAT_002d6ef0;

// USA 002D6348 <- EU 002D6324 (Ghidra, non-matching)
// GLOBAL DAT_002d664c float
// GLOBAL DAT_002d6650 int *
// GLOBAL DAT_002d6654 undefined4
// GLOBAL DAT_002d6658 float
// GLOBAL DAT_002d665c char *
// GLOBAL DAT_002d6660 char *
// GLOBAL DAT_002d6680 int *
// GLOBAL DAT_002d6684 float
// GLOBAL DAT_002d6688 float
// GLOBAL DAT_002d668c float
// GLOBAL DAT_002d6690 float
// GLOBAL DAT_002d69d4 float
// GLOBAL DAT_002d69d8 float
// GLOBAL DAT_002d69dc float
// GLOBAL DAT_002d69e0 undefined4
// GLOBAL DAT_002d69e4 undefined4
// GLOBAL DAT_002d69e8 int
// GLOBAL DAT_002d69ec undefined4 *
// GLOBAL DAT_002d69f0 float
// GLOBAL DAT_002d69f4 float
// GLOBAL DAT_002d69f8 undefined
// GLOBAL DAT_002d6d80 undefined4
// GLOBAL DAT_002d6d84 undefined
// GLOBAL DAT_002d6d8c undefined
// GLOBAL DAT_002d6d94 float
// GLOBAL DAT_002d6d98 float
// GLOBAL DAT_002d6d9c int *
// GLOBAL DAT_002d6eec int
// GLOBAL DAT_002d6ef0 undefined
// GLOBAL s_cf_002d6ef3 string
// GLOBAL s_cf_002d69fb string
// GLOBAL s_SE_PL_DASH_002d6664 string
// GLOBAL s_SE_PL_DASH_WAIT_002d6670 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_002D6348(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float *pfVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  char *pcVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  char *pcVar18;
  undefined4 uVar19;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_88 (*(char * *)(albw_frame + 0x8))
  #define local_84 (*(char * *)(albw_frame + 0xc))
  #define local_80 (*(char * *)(albw_frame + 0x10))
  #define local_7c (*(char * *)(albw_frame + 0x14))
  #define local_78 (*(float *)(albw_frame + 0x18))
  #define local_74 (*(char * *)(albw_frame + 0x1c))
  #define local_70 (*(char * *)(albw_frame + 0x20))
  #define fStack_6c (*(float *)(albw_frame + 0x24))
  #define pcStack_68 (*(char * *)(albw_frame + 0x28))
  #define local_60 (*(char * *)(albw_frame + 0x30))
  #define local_5c (*(char * *)(albw_frame + 0x34))
  #define local_58 (*(char * *)(albw_frame + 0x38))
  #define local_54 (*(char * *)(albw_frame + 0x3c))
  #define local_50 (*(float *)(albw_frame + 0x40))
  #define local_4c (*(char * *)(albw_frame + 0x44))
  #define local_48 (*(char * *)(albw_frame + 0x48))
  #define fStack_44 (*(float *)(albw_frame + 0x4c))
  #define local_40 (*(char * *)(albw_frame + 0x50))
  #define local_3c (*(float *)(albw_frame + 0x54))
  #define local_38 (*(char * *)(albw_frame + 0x58))
  pcVar11 = DAT_002d6660;
  pcVar18 = DAT_002d665c;
  fVar16 = DAT_002d6658;
  piVar10 = DAT_002d6650;
  switch(param_2) {
  case 0x44:
    func_0051D2CC(*(int **)(param_1 + 0x3c),*(int *)(param_1 + 0x58),DAT_002d664c);
    iVar6 = func_002D55E8(param_1);
    if (iVar6 != 0) {
      return 0;
    }
    uVar8 = func_0054C970(*(int *)(param_1 + 0x48));
    if (uVar8 != 0) {
      local_7c = s_SE_PL_DASH_002d6664;
      local_80 = pcVar11;
      func_004E9BEC(*piVar10,(int *)&local_80,0);
      local_7c = s_SE_PL_DASH_WAIT_002d6670;
      local_80 = pcVar11;
      func_004E9BEC(*piVar10,(int *)&local_80,0);
      if (*(uint *)(*(int *)(param_1 + 0x2c) + 0x44) < 0x1e) {
        return 0;
      }
      **(undefined4 **)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x58);
      return func_002D55D0(param_1,0x45);
    }
    return func_002D55D0(param_1,(uint)(ALBW_AS_F32(pcVar18) < *(float *)(*(int *)(param_1 + 0x48) + 0x24)));
  case 0x45:
    uVar19 = DAT_002d6654;
    fVar16 = DAT_002d664c;
    fVar17 = DAT_002d6658;
    iVar6 = func_002D55E8(param_1);
    if (iVar6 != 0) {
      return 0;
    }
    if (*(int *)(*DAT_002d6680 + 0x44) != 0) {
      pfVar3 = *(float **)(param_1 + 0x34);
      *pfVar3 = ALBW_AS_F32(pcVar18);
      pfVar3[1] = ALBW_AS_F32(pcVar18);
      pfVar3[2] = ALBW_AS_F32(pcVar18);
      return func_002D55D0(param_1,0);
    }
    iVar6 = *(int *)(param_1 + 0x50);
    if (((*(byte *)(iVar6 + 0x324) & 1) != 0 || (*(byte *)(iVar6 + 0x324) & 8) != 0) ||
       (bVar7 = 0, *(char *)(iVar6 + 0x168) != '\0')) {
      bVar7 = 1;
    }
    *(byte *)(iVar6 + 0x52c) = bVar7 ^ 1;
    bVar7 = *(byte *)(*(int *)(param_1 + 0x50) + 0x324);
    if (((bVar7 & 1) == 0 && (bVar7 & 8) == 0) &&
       (*(char *)(*(int *)(param_1 + 0x50) + 0x168) == '\0')) {
      fVar15 = DAT_002d668c;
      uVar8 = func_0052E454(*(int *)(param_1 + 0x28),(float *)(*(int *)(param_1 + 0x28) + 0x3d0),0,
                            DAT_002d668c);
      if (uVar8 != 0) {
        func_004D80A4((float *)&local_80,**(int **)(param_1 + 0x3c) + 0x40000000,fVar16);
        local_7c = pcVar18;
        func_00115C54((float *)&local_4c,*(float **)(param_1 + 0x30),(float *)&local_80);
        local_74 = local_4c;
        local_70 = local_48;
        fStack_6c = fStack_44;
        func_00115C70((float *)&local_4c,*(float **)(param_1 + 0x30),(float *)&local_80);
        local_58 = local_4c;
        local_54 = local_48;
        local_50 = fStack_44;
        uVar8 = func_0052E454(*(int *)(param_1 + 0x28),(float *)&local_74,0,fVar15);
        if ((uVar8 != 0) &&
           (uVar8 = func_0052E454(*(int *)(param_1 + 0x28),(float *)&local_58,0,fVar15), uVar8 != 0)
           ) {
          pfVar3 = *(float **)(param_1 + 0x38);
          *pfVar3 = ALBW_AS_F32(pcVar18);
          pfVar3[1] = ALBW_AS_F32(pcVar18);
          pfVar3[2] = ALBW_AS_F32(pcVar18);
          fVar16 = func_00553058(*(undefined4 *)(param_1 + 0x50));
          *(float *)(*(int *)(param_1 + 0x34) + 4) =
               *(float *)(*(int *)(param_1 + 0x34) + 4) - fVar16 * DAT_002d6690;
          *(undefined1 *)(*(int *)(param_1 + 0x50) + 0x52c) = 0;
          return func_002D55D0(param_1,7);
        }
      }
    }
    else {
      func_004D80A4((float *)&local_74,**(uint **)(param_1 + 0x3c),DAT_002d6684);
      pfVar3 = *(float **)(param_1 + 0x38);
      local_70 = pcVar18;
      func_00115D70((float *)&local_58,(float *)&local_74,DAT_002d6688);
      local_80 = local_58;
      local_7c = local_54;
      local_78 = local_50;
      func_00115C54(pfVar3,pfVar3,(float *)&local_80);
    }
    fVar15 = func_00553058(*(undefined4 *)(param_1 + 0x50));
    fVar16 = DAT_002d69d4;
    *(float *)(*(int *)(param_1 + 0x34) + 4) =
         *(float *)(*(int *)(param_1 + 0x34) + 4) - fVar15 * DAT_002d69d4;
    iVar6 = func_0053ECB4(*(int *)(param_1 + 0x4c));
    local_58 = *(char **)(iVar6 + 0xc);
    local_50 = *(float *)(iVar6 + 0x2c);
    local_54 = *(char **)(*(int *)(param_1 + 0x30) + 4);
    func_004D80A4((float *)&local_4c,**(uint **)(param_1 + 0x3c),DAT_002d69d8);
    local_48 = pcVar18;
    func_00115C54((float *)&local_40,*(float **)(param_1 + 0x30),(float *)&local_58);
    local_70 = local_40;
    fStack_6c = local_3c;
    pcStack_68 = local_38;
    func_00115D88((float *)&local_40,(float *)&local_70,fVar16);
    local_7c = local_40;
    local_78 = local_3c;
    local_74 = local_38;
    func_00115C54((float *)&local_40,(float *)&local_4c,(float *)&local_7c);
    *(char **)(param_1 + 0x88) = local_40;
    fVar16 = DAT_002d69dc;
    *(float *)(param_1 + 0x8c) = local_3c;
    *(char **)(param_1 + 0x90) = local_38;
    uVar1 = DAT_002d69e0;
    *(float *)(param_1 + 0x8c) = local_3c + fVar16;
    uVar2 = DAT_002d69e4;
    *(undefined4 *)(param_1 + 0xdc) = DAT_002d69e4;
    *(undefined4 *)(param_1 + 0xe0) = uVar1;
    *(undefined4 *)(param_1 + 0xe4) = uVar2;
    func_004356B4((int *)(param_1 + 0x84));
    if (10 < *(uint *)(*(int *)(param_1 + 0x2c) + 0x44)) {
      iVar6 = *(int *)(*(int *)(param_1 + 0x48) + 0x14);
      fVar15 = *(float *)(iVar6 + 0x118);
      fVar16 = -*(float *)(iVar6 + 0x11c);
      func_004D80A4(&local_78,**(uint **)(param_1 + 0x3c),fVar17);
      local_74 = pcVar18;
      if ((fVar15 * local_78 + ALBW_AS_F32(pcVar18) * ALBW_AS_F32(pcVar18) + fVar16 * ALBW_AS_F32(local_70) <
           ALBW_AS_F32(pcVar18)) &&
         (DAT_002d69e8 <
          (int)ALBW_AS_U32(SQRT(fVar15 * fVar15 + ALBW_AS_F32(pcVar18) * ALBW_AS_F32(pcVar18) + fVar16 * fVar16)))) {
        *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x4d0) = uVar19;
        return func_002D55D0(param_1,0x49);
      }
    }
    if ((4 < *(uint *)(*(int *)(param_1 + 0x2c) + 0x44)) &&
       ((bVar14 = func_00553094(*(int *)(param_1 + 0x50)), bVar14 || (1 < *(int *)(param_1 + 0x16c))
        ))) {
      pfVar3 = *(float **)(param_1 + 0x38);
      *pfVar3 = ALBW_AS_F32(pcVar18);
      pfVar3[1] = ALBW_AS_F32(pcVar18);
      pfVar3[2] = ALBW_AS_F32(pcVar18);
      func_002D55D0(param_1,0x46);
      return func_004A9120(*DAT_002d69ec,param_1 + 0xf0);
    }
    iVar6 = func_00552FDC(*(int *)(param_1 + 0x50),DAT_002d69f0);
    if ((iVar6 != 0) &&
       (iVar6 = func_005531F8(*(int *)(param_1 + 0x50),*(int **)(param_1 + 0x3c)), iVar6 != 0)) {
      pfVar3 = *(float **)(param_1 + 0x38);
      *pfVar3 = ALBW_AS_F32(pcVar18);
      pfVar3[1] = ALBW_AS_F32(pcVar18);
      pfVar3[2] = ALBW_AS_F32(pcVar18);
      return func_002D55D0(param_1,2);
    }
    iVar6 = *(int *)(param_1 + 0x50);
    fVar17 = **(float **)(param_1 + 0x30) - *(float *)(param_1 + 0x170);
    fVar15 = (*(float **)(param_1 + 0x30))[2] - *(float *)(param_1 + 0x178);
    fVar16 = ALBW_AS_F32(_DAT_002d69f8);
    if (((*(uint *)(iVar6 + 0x328) & 2) != 0) && (*(char *)(iVar6 + 0x33c) == '\t')) {
      fVar16 = DAT_002d69f4;
    }
    if (SQRT(fVar17 * fVar17 + fVar15 * fVar15) < fVar16) {
      bVar13 = (*(byte *)(iVar6 + 0x324) & 1) == 0;
      bVar12 = (*(byte *)(iVar6 + 0x324) & 8) == 0;
      bVar14 = bVar13 && bVar12;
      if (bVar13 && bVar12) {
        bVar14 = *(char *)(iVar6 + 0x168) == '\0';
      }
      if (!bVar14) {
        *(int *)(param_1 + 0x16c) = *(int *)(param_1 + 0x16c) + 1;
        goto LAB_002d6974;
      }
    }
    *(undefined4 *)(param_1 + 0x16c) = 0;
LAB_002d6974:
    puVar4 = *(undefined4 **)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x170) = *puVar4;
    *(undefined4 *)(param_1 + 0x174) = puVar4[1];
    *(undefined4 *)(param_1 + 0x178) = puVar4[2];
    local_5c = s_SE_PL_DASH_002d6664;
    local_60 = pcVar11;
    func_004E9BEC(*piVar10,(int *)&local_60,0);
    local_5c = s__SE_PL_DASH_FOOTSTEPS_002d69fb + 1;
    local_60 = pcVar11;
    return func_004E9BEC(*piVar10,(int *)&local_60,0);
  case 0x46:
    *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x100) = DAT_002d6d80;
    *(char **)(*(int *)(param_1 + 0x50) + 0x4d0) = pcVar18;
    fVar17 = func_00553058(*(undefined4 *)(param_1 + 0x50));
    *(float *)(*(int *)(param_1 + 0x34) + 4) = *(float *)(*(int *)(param_1 + 0x34) + 4) - fVar17;
    if ((*(uint *)(*(int *)(param_1 + 0x2c) + 0x44) < 6) ||
       (*(float *)(param_1 + 0x78) <= *(float *)(param_1 + 0x80))) {
      func_002D6048(param_1);
      fVar15 = func_00553058(*(undefined4 *)(param_1 + 0x50));
      fVar17 = DAT_002d6d98;
      fVar15 = *(float *)(param_1 + 0x7c) - fVar15;
      *(float *)(param_1 + 0x7c) = fVar15;
      fVar15 = *(float *)(param_1 + 0x80) + fVar15;
      *(float *)(param_1 + 0x80) = fVar15;
      *(float *)(*(int *)(param_1 + 0x28) + 0x724) = fVar15 - *(float *)(param_1 + 0x78);
      fVar17 = (fVar17 * ((*(float *)(param_1 + 0x80) - *(float *)(param_1 + 0x78)) - ALBW_AS_F32(pcVar18)
                         )) / DAT_002d6d94 + fVar16;
      if ((int)ALBW_AS_U32(fVar17) < 0x3f800000) {
        fVar17 = fVar16;
      }
      *(float *)(*(int *)(param_1 + 0x4c) + 0xfc) = fVar17;
      return 0;
    }
    iVar6 = *(int *)(param_1 + 0x50);
    *(undefined1 *)(iVar6 + 0x167) = 0;
    *(char **)(iVar6 + 0x17c) = pcVar18;
    *(float *)(iVar6 + 0x180) = fVar16;
    *(undefined1 *)(*(int *)(param_1 + 0x50) + 0x52b) = 0;
    *(char **)(*(int *)(param_1 + 0x28) + 0x724) = pcVar18;
    if (((*(uint *)(*(int *)(param_1 + 0x50) + 0x328) & 0x80) != 0) &&
       (*(char *)(*(int *)(param_1 + 0x50) + 0x33c) == '\f')) {
      bVar14 = func_0052EE94(*(int *)(param_1 + 0x28));
      if (bVar14) {
        iVar6 = *(int *)(param_1 + 0x28);
        piVar10 = (int *)(param_1 + 0x154);
        if (*(int *)(iVar6 + 0x344) == 0) {
          *piVar10 = 0;
          *(undefined4 *)(param_1 + 0x158) = 0;
        }
        else {
          iVar5 = *piVar10;
          if ((iVar5 != 0) && (*(int *)(iVar5 + 0x1c) == *(int *)(param_1 + 0x158))) {
            func_00110848(iVar5);
          }
          func_004A1B9C((int *)&local_80,*(int *)(iVar6 + 0x344),(uint *)&DAT_002d6d8c);
          *piVar10 = (int)local_80;
          *(char **)(param_1 + 0x158) = local_7c;
        }
        *(float *)(*(int *)(param_1 + 0x4c) + 0x100) = fVar16;
        *(float *)(*(int *)(param_1 + 0x4c) + 0xfc) = fVar16;
        return func_002D55D0(param_1,0x3f);
      }
      return func_002D55D0(param_1,0x12);
    }
    iVar6 = *(int *)(param_1 + 0x28);
    piVar9 = (int *)(param_1 + 0x154);
    if (*(int *)(iVar6 + 0x344) == 0) {
      *piVar9 = 0;
      *(undefined4 *)(param_1 + 0x158) = 0;
    }
    else {
      iVar5 = *piVar9;
      if ((iVar5 != 0) && (*(int *)(iVar5 + 0x1c) == *(int *)(param_1 + 0x158))) {
        func_00110848(iVar5);
      }
      func_004A1B9C((int *)&local_80,*(int *)(iVar6 + 0x344),(uint *)&DAT_002d6d84);
      *piVar9 = (int)local_80;
      *(char **)(param_1 + 0x158) = local_7c;
    }
    *(float *)(*(int *)(param_1 + 0x4c) + 0x100) = fVar16;
    *(float *)(*(int *)(param_1 + 0x4c) + 0xfc) = fVar16;
    func_002D55D0(param_1,(uint)(ALBW_AS_F32(pcVar18) < *(float *)(*(int *)(param_1 + 0x48) + 0x24)));
    return func_004EB5E8(*piVar10);
  case 0x47:
    iVar6 = func_002D55E8(param_1);
    if (iVar6 != 0) {
      return 0;
    }
    iVar6 = func_0053EDD8(*(int *)(param_1 + 0x4c) + 0x3c);
    if (iVar6 == 0) {
      return 0;
    }
    *(float *)(*(int *)(param_1 + 0x4c) + 0x100) = fVar16;
    if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= ALBW_AS_F32(pcVar18)) {
LAB_002d6cc8:
      uVar8 = 0;
      goto LAB_002d6ccc;
    }
    break;
  case 0x48:
    *(char **)(*(int *)(param_1 + 0x34) + 4) = DAT_002d665c;
    *(undefined1 *)(*(int *)(param_1 + 0x50) + 0x166) = 0;
    *(char **)(*(int *)(param_1 + 0x4c) + 0x100) = pcVar18;
    if (*(uint *)(*(int *)(param_1 + 0x2c) + 0x44) < 0x10) {
      return 0;
    }
    pcVar11 = (char *)(*(int *)(param_1 + 0x2c) + 0x20);
    bVar14 = func_0052E620(*(int *)(param_1 + 0x28),1);
    if (bVar14) {
      *pcVar11 = '\b';
    }
    piVar10 = DAT_002d6d9c;
    if ((((**(uint **)(*(int *)(param_1 + 0x48) + 0x14) & 1) != 0) && (*pcVar11 == '\b')) &&
       (iVar6 = func_001DCE44(*(int *)(param_1 + 0x28),0,0), iVar6 != 0)) {
      func_001E8618(*(int *)(*piVar10 + 0x18));
      *(float *)(*(int *)(param_1 + 0x4c) + 0x100) = fVar16;
      return 0;
    }
    if (*(int *)(*(int *)(param_1 + 0x2c) + 0x44) != 0x2d) {
      return 0;
    }
    func_001E8618(*(int *)(*piVar10 + 0x18));
    *(float *)(*(int *)(param_1 + 0x4c) + 0x100) = fVar16;
    if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= ALBW_AS_F32(pcVar18)) goto LAB_002d6cc8;
    break;
  case 0x49:
    uVar19 = DAT_002d6654;
    iVar6 = func_002D55E8(param_1);
    if (iVar6 != 0) {
      return 0;
    }
    fVar17 = **(float **)(param_1 + 0x34);
    fVar16 = (*(float **)(param_1 + 0x34))[2];
    fVar16 = SQRT(fVar17 * fVar17 + ALBW_AS_F32(pcVar18) * ALBW_AS_F32(pcVar18) + fVar16 * fVar16);
    if (((int)ALBW_AS_U32(fVar16) < DAT_002d6eec) &&
       (ALBW_AS_F32(pcVar18) < *(float *)(*(int *)(param_1 + 0x48) + 0x24))) {
      return func_002D55D0(param_1,9);
    }
    if (_DAT_002d6ef0 <= (int)ALBW_AS_U32(fVar16)) {
      *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x4d0) = uVar19;
      if (*(char *)(param_1 + 0x17c) != '\0') {
        if (10 < *(uint *)(*(int *)(param_1 + 0x2c) + 0x44)) {
          bVar7 = *(byte *)(*(int *)(param_1 + 0x50) + 0x324);
          bVar13 = (bVar7 & 1) == 0;
          bVar12 = (bVar7 & 8) == 0;
          bVar14 = bVar13 && bVar12;
          if (bVar13 && bVar12) {
            bVar14 = *(char *)(*(int *)(param_1 + 0x50) + 0x168) == '\0';
          }
          if (bVar14) goto LAB_002d6edc;
        }
        local_84 = s_cf_002d6ef4;
        local_88 = pcVar11;
        return func_004E9BEC(*piVar10,(int *)&local_88,0);
      }
LAB_002d6edc:
      *(undefined1 *)(param_1 + 0x17c) = 0;
      return 0;
    }
    if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= ALBW_AS_F32(pcVar18)) goto LAB_002d6cc8;
    break;
  default:
    return 0;
  }
  uVar8 = 1;
LAB_002d6ccc:
  return func_002D55D0(param_1,uVar8);
}

