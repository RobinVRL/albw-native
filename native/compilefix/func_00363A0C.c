/* compilefix: USA 00363A0C (EU 003639E8), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier 's_'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - Ghidra string label with punctuation (s_T<SE_..._ADDR + n) -> s_cf_<ADDR+n>, the same code-section address (checked: add rX,pc,#imm in the ARM) [7]
 *  - implicit float<->int conversions (Ghidra COPY between a float and an int-typed variable or
 *    pool word, e.g. `fVar = _DAT_xxx;`, `puVar[3] = fVar;`) made bit copies [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
extern char s_cf_00363d5b[];
extern char s_cf_00363d5c[];
extern char s_cf_00364562[];
extern char s_cf_00364744[];
#include "compilefix.h"

extern int func_00114608(uint param_1,uint param_2);
extern int func_001DC3C4(int param_1,undefined4 param_2,int param_3);
extern int func_001DC928(int param_1,int param_2);
extern int func_001DD48C(int param_1,int param_2,undefined4 param_3);
extern int func_001DE958(int param_1);
extern int func_0028C328(int param_1);
extern int func_0028C388(int param_1);
extern int func_0028C8EC(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0028D7A4(int param_1,float fparam_0);
extern int func_002914A0(int param_1);
extern int func_002D13A4(int param_1,char param_2,float fparam_0);
extern int func_004D8054(float *param_1,uint param_2,float fparam_0);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004EA104(int param_1,int *param_2,int param_3);
extern int func_004EAF8C(int param_1,int *param_2,int param_3);
extern int func_004EB77C(int param_1);
extern int func_004ED46C(int param_1,int param_2);
extern int func_0052E7D8(int param_1,int param_2);
extern int func_0052E8A0(int param_1);
extern undefined4 DAT_00363d50;
extern float DAT_00363d54;
extern undefined DAT_00363d58;
extern int DAT_00363d6c;
extern int *DAT_00363d70;
extern undefined DAT_00363d9c;
extern int *DAT_00364118;
extern int *DAT_003641a8;
extern undefined DAT_003641ac;
extern float DAT_00364554;
extern char *DAT_00364558;
extern char *DAT_0036455c;
extern undefined DAT_00364560;
extern undefined4 DAT_00364578;
extern undefined DAT_0036457c;
extern char s_ASE_PL_DAMAGE_LAVA_003641af[];
extern char s_MSE_PV_DAMAGE_00363d9f[];
extern char s_SE_PL_DAMAGE_CHEW_UP_00364770[];
extern char s_SE_PL_DAMAGE_DROWN_0036413c[];
extern char s_SE_PL_DAMAGE_DROWN_SAND_00364164[];
extern char s_SE_PL_DAMAGE_ELEC_003641d8[];
extern char s_SE_PL_DAMAGE_FAINT_00364200[];
extern char s_SE_PL_DAMAGE_ICE_00363d74[];
extern char s_SE_PL_DROWN_SAND_0036417c[];
extern char s_SE_PL_FALL_VALLEY_00364128[];
extern char s_SE_PV_DAMAGE_BELCH_0036475c[];
extern char s_SE_PV_DAMAGE_CHEW_UP_00364788[];
extern char s_SE_PV_DAMAGE_DROWN_00364150[];
extern char s_SE_PV_DAMAGE_DROWN_SAND_00364190[];
extern char s_SE_PV_DAMAGE_ELEC_003641ec[];
extern char s_SE_PV_DAMAGE_FAINT_00364214[];
extern char s_SE_PV_DAMAGE_FIRE_003641c4[];
extern char s_SE_PV_DAMAGE_ICE_00363d88[];
extern char s_SE_PV_FALL_0036411c[];
extern char s_SE_PV_GRABED_00364598[];
extern char s___SE_PL_DAMAGE_FIRE_00364562[];
extern char s___SE_PL_TORNADE_DRIVE_UP_0036457e[];
extern char s_ff__SE_PL_DAMAGE_BELCH_00364744[];
extern undefined4 _DAT_00363d58;
extern undefined4 _DAT_00363d9c;
extern undefined4 _DAT_003641ac;
extern undefined4 _DAT_00364560;
extern undefined4 _DAT_0036457c;

// USA 00363A0C <- EU 003639E8 (Ghidra, non-matching)
// GLOBAL DAT_00363d50 undefined4
// GLOBAL DAT_00363d54 float
// GLOBAL DAT_00363d58 undefined
// GLOBAL DAT_00363d6c int
// GLOBAL DAT_00363d70 int *
// GLOBAL DAT_00363d9c undefined
// GLOBAL DAT_00364118 int *
// GLOBAL DAT_003641a8 int *
// GLOBAL DAT_003641ac undefined
// GLOBAL DAT_00364554 float
// GLOBAL DAT_00364558 char *
// GLOBAL DAT_0036455c char *
// GLOBAL DAT_00364560 undefined
// GLOBAL DAT_00364578 undefined4
// GLOBAL DAT_0036457c undefined
// GLOBAL s_cf_00364562 string
// GLOBAL s_,?SE_PL_TORNADE_DRIVE_UP_0036457e string
// GLOBAL s_cf_00363d5b string
// GLOBAL s_ASE_PL_DAMAGE_LAVA_003641af string
// GLOBAL s_MSE_PV_DAMAGE_00363d9f string
// GLOBAL s_SE_PL_DAMAGE_CHEW_UP_00364770 string
// GLOBAL s_SE_PL_DAMAGE_DROWN_0036413c string
// GLOBAL s_SE_PL_DAMAGE_DROWN_SAND_00364164 string
// GLOBAL s_SE_PL_DAMAGE_ELEC_003641d8 string
// GLOBAL s_SE_PL_DAMAGE_FAINT_00364200 string
// GLOBAL s_SE_PL_DAMAGE_ICE_00363d74 string
// GLOBAL s_SE_PL_DROWN_SAND_0036417c string
// GLOBAL s_SE_PL_FALL_VALLEY_00364128 string
// GLOBAL s_SE_PV_DAMAGE_BELCH_0036475c string
// GLOBAL s_SE_PV_DAMAGE_CHEW_UP_00364788 string
// GLOBAL s_SE_PV_DAMAGE_DROWN_00364150 string
// GLOBAL s_SE_PV_DAMAGE_DROWN_SAND_00364190 string
// GLOBAL s_SE_PV_DAMAGE_ELEC_003641ec string
// GLOBAL s_SE_PV_DAMAGE_FAINT_00364214 string
// GLOBAL s_SE_PV_DAMAGE_FIRE_003641c4 string
// GLOBAL s_SE_PV_DAMAGE_ICE_00363d88 string
// GLOBAL s_SE_PV_FALL_0036411c string
// GLOBAL s_SE_PV_GRABED_00364598 string
// GLOBAL s_cf_00364744 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_00363A0C(int param_1,short *param_2)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  float *pfVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  undefined4 uVar12;
  uint extraout_r1;
  undefined4 uVar13;
  int *in_r3;
  int iVar14;
  uint *puVar15;
  float fparam_0;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(char * *)(albw_frame + 0x14))
  uVar13 = 0;
  piVar11 = &local_38;
  func_001DC3C4(*(int *)(param_1 + 0x28),DAT_00363d50,0);
  func_002914A0(*(int *)(param_1 + 0x2c));
  func_0028C328(*(int *)(param_1 + 0x4c));
  func_0028C8EC(*(int *)(param_1 + 0x4c),2,uVar13,in_r3);
  fparam_0 = DAT_00363d54;
  pfVar8 = *(float **)(param_1 + 0x34);
  puVar15 = (uint *)(param_2 + 4);
  *pfVar8 = DAT_00363d54;
  pfVar8[2] = fparam_0;
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(*(int *)(param_1 + 0x30) + 4);
  *(char *)(param_1 + 0x94) = (char)param_2[8];
  bVar1 = *(byte *)(param_2 + 9);
  *(byte *)(param_1 + 0x98) = bVar1;
  fVar17 = *(float *)(param_2 + 6);
  *(undefined1 *)(param_1 + 0x9b) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  fVar4 = ALBW_AS_F32(_DAT_00363d58);
  fVar16 = fparam_0;
  if (((char)param_2[2] == '\a') && (*param_2 != 0x3d)) {
    *(undefined1 *)(param_1 + 0x9b) = 1;
    fVar16 = fVar4;
    fVar17 = fparam_0;
  }
  *(undefined4 *)(param_1 + 0x58) = **(undefined4 **)(param_1 + 0x3c);
  piVar5 = DAT_00363d70;
  iVar6 = DAT_00363d6c;
  iVar14 = local_30;
  switch(param_2[1]) {
  case 0xb:
  case 0xd:
  case 0x1d:
  case 0x1f:
    uVar10 = *puVar15;
    *(uint *)(param_1 + 0x58) = uVar10;
    func_004D8054(*(float **)(param_1 + 0x34),uVar10,-fVar17);
    piVar11 = DAT_00363d70;
    iVar6 = DAT_00363d6c;
    *(float *)(*(int *)(param_1 + 0x34) + 4) = *(float *)(*(int *)(param_1 + 0x34) + 4) + fVar16;
    local_34 = s_cf_00363d5c;
    local_38 = iVar6;
    func_004EA104(*piVar11,&local_38,0);
    cVar2 = *(char *)(param_1 + 0x98);
    iVar14 = local_30;
    goto joined_r0x00363bd4;
  case 0xc:
  case 0xe:
  case 0x1e:
  case 0x20:
    uVar10 = *puVar15;
    *(uint *)(param_1 + 0x58) = uVar10;
    func_004D8054(*(float **)(param_1 + 0x34),uVar10,fVar17);
    piVar11 = DAT_00363d70;
    iVar6 = DAT_00363d6c;
    *(float *)(*(int *)(param_1 + 0x34) + 4) = *(float *)(*(int *)(param_1 + 0x34) + 4) + fVar16;
    local_34 = s_cf_00363d5c;
    local_38 = iVar6;
    func_004EA104(*piVar11,&local_38,0);
    cVar2 = *(char *)(param_1 + 0x98);
    iVar14 = local_30;
joined_r0x00363bd4:
    local_30 = iVar6;
    if (cVar2 == '\0') {
LAB_00363d1c:
      local_2c = s_MSE_PV_DAMAGE_00363d9f + 1;
      func_004EAF8C(*piVar11,&local_30,0);
      func_0028C388(*(int *)(param_1 + 0x4c));
      iVar14 = local_30;
    }
    break;
  case 0xf:
    *(uint *)(param_1 + 0x58) = *puVar15;
    func_002D13A4(param_1 + 0x70,0,fVar17);
    piVar11 = DAT_00363d70;
    iVar6 = DAT_00363d6c;
    *(float *)(*(int *)(param_1 + 0x34) + 4) = *(float *)(*(int *)(param_1 + 0x34) + 4) + fVar16;
    local_34 = s_cf_00363d5c;
    local_38 = iVar6;
    func_004EA104(*piVar11,&local_38,0);
    cVar2 = *(char *)(param_1 + 0x98);
    iVar14 = local_30;
    goto joined_r0x00363d18;
  case 0x10:
    *(uint *)(param_1 + 0x58) = *puVar15;
    puVar15 = *(uint **)(param_1 + 0x3c);
    uVar18 = func_00114608(_DAT_00363d9c,(uint)bVar1);
    *puVar15 = (int)uVar18 + *puVar15 & 0xe0000000;
    func_002D13A4(param_1 + 0x70,1,fVar17);
    piVar11 = DAT_00363d70;
    iVar6 = DAT_00363d6c;
    *(float *)(*(int *)(param_1 + 0x34) + 4) = *(float *)(*(int *)(param_1 + 0x34) + 4) + fVar16;
    local_34 = s_cf_00363d5c;
    local_38 = iVar6;
    func_004EA104(*piVar11,&local_38,0);
    cVar2 = *(char *)(param_1 + 0x98);
    iVar14 = local_30;
joined_r0x00363d18:
    local_30 = iVar6;
    if (cVar2 != '\0') break;
    goto LAB_00363d1c;
  case 0x11:
    *(undefined1 *)(*DAT_00364118 + 0xfa9) = 1;
    func_0028C8EC(*(int *)(param_1 + 0x4c),1,uVar13,in_r3);
    *(undefined1 *)(param_1 + 0x97) = 1;
    if (*(char *)(*(int *)(param_1 + 0x2c) + 0xb0) == '\0') {
      func_001DD48C(*(int *)(param_1 + 0x28),-2,1);
    }
    piVar11 = DAT_00363d70;
    func_004EB77C(*DAT_00363d70);
    iVar14 = DAT_00363d6c;
    local_34 = s_SE_PV_FALL_0036411c;
    local_38 = DAT_00363d6c;
    func_004EA104(*piVar11,&local_38,0);
    local_34 = s_SE_PL_FALL_VALLEY_00364128;
    local_38 = iVar14;
    func_004EA104(*piVar11,&local_38,0);
    iVar14 = local_30;
    break;
  case 0x12:
    func_0028C8EC(*(int *)(param_1 + 0x4c),5,uVar13,in_r3);
    *(undefined1 *)(param_1 + 0x97) = 1;
    if (*(char *)(*(int *)(param_1 + 0x2c) + 0xb0) == '\0') {
      func_001DD48C(*(int *)(param_1 + 0x28),-2,1);
    }
    piVar11 = DAT_00363d70;
    iVar14 = DAT_00363d6c;
    local_34 = s_SE_PL_DAMAGE_DROWN_0036413c;
    local_38 = DAT_00363d6c;
    func_004EA104(*DAT_00363d70,&local_38,0);
    local_34 = s_SE_PV_DAMAGE_DROWN_00364150;
    local_38 = iVar14;
    func_004EAF8C(*piVar11,&local_38,0);
    iVar14 = local_30;
    break;
  case 0x13:
    func_0028C8EC(*(int *)(param_1 + 0x4c),5,uVar13,in_r3);
    *(undefined1 *)(param_1 + 0x97) = 1;
    if (*(char *)(*(int *)(param_1 + 0x2c) + 0xb0) == '\0') {
      func_001DD48C(*(int *)(param_1 + 0x28),-2,1);
    }
    *(float *)(*(int *)(param_1 + 0x34) + 4) = fparam_0;
    func_001DC928(*(int *)(param_1 + 0x28),0);
    piVar11 = DAT_00363d70;
    iVar14 = DAT_00363d6c;
    local_34 = s_SE_PL_DAMAGE_DROWN_SAND_00364164;
    local_38 = DAT_00363d6c;
    func_004EA104(*DAT_00363d70,&local_38,0);
    local_34 = s_SE_PL_DROWN_SAND_0036417c;
    local_38 = iVar14;
    func_004EA104(*piVar11,&local_38,0);
    local_34 = s_SE_PV_DAMAGE_DROWN_SAND_00364190;
    local_38 = iVar14;
    func_004EAF8C(*piVar11,&local_38,0);
    iVar14 = local_30;
    break;
  case 0x14:
    *(undefined1 *)(*DAT_00364118 + 0xfa9) = 1;
    func_0028C8EC(*(int *)(param_1 + 0x4c),5,uVar13,in_r3);
    *(undefined1 *)(param_1 + 0x97) = 0;
    if (*(char *)(*(int *)(param_1 + 0x2c) + 0xb0) == '\0') {
      func_001DD48C(*(int *)(param_1 + 0x28),-2,1);
    }
    piVar11 = DAT_003641a8;
    *(undefined4 *)(param_1 + 0xf0) = 0;
    iVar6 = _DAT_003641ac;
    iVar14 = DAT_00363d6c;
    iVar9 = *piVar11;
    *(float *)(param_1 + 0xf4) =
         *(float *)(*(int *)(param_1 + 0x30) + 8) - *(float *)(*(int *)(iVar9 + 0x18) + 0x1c4);
    *(float *)(param_1 + 0xf8) = fparam_0;
    *(float *)(param_1 + 0xfc) = fparam_0;
    if ((int)ALBW_AS_U32((*(float *)(*(int *)(iVar9 + 0x18) + 0x1b4) - *(float *)(*(int *)(param_1 + 0x30) + 4)))
        < iVar6) {
      *(undefined1 *)(param_1 + 0x99) = 1;
    }
    piVar11 = DAT_00363d70;
    local_34 = s_ASE_PL_DAMAGE_LAVA_003641af + 1;
    local_38 = iVar14;
    func_004EA104(*DAT_00363d70,&local_38,0);
    local_34 = s_SE_PV_DAMAGE_FIRE_003641c4;
    local_38 = iVar14;
    func_004EAF8C(*piVar11,&local_38,0);
    iVar14 = local_30;
    break;
  case 0x15:
    local_34 = s_SE_PL_DAMAGE_ELEC_003641d8;
    local_38 = DAT_00363d6c;
    func_004EA104(*DAT_00363d70,&local_38,0);
    iVar14 = local_30;
    if (*(char *)(param_1 + 0x98) == '\0') {
      local_2c = s_SE_PV_DAMAGE_ELEC_003641ec;
      local_30 = iVar6;
      func_004EAF8C(*piVar5,&local_30,0);
      iVar14 = local_30;
    }
    break;
  case 0x16:
    local_34 = s_SE_PL_DAMAGE_FAINT_00364200;
    local_38 = DAT_00363d6c;
    func_004EA104(*DAT_00363d70,&local_38,0);
    local_34 = s_SE_PV_DAMAGE_FAINT_00364214;
    local_38 = iVar6;
    func_004EAF8C(*piVar5,&local_38,0);
    uVar10 = *puVar15;
    *(uint *)(param_1 + 0x58) = uVar10;
    func_004D8054(*(float **)(param_1 + 0x34),uVar10,-fVar17);
    iVar14 = local_30;
    if (*(char *)(param_1 + 0x98) == '\0') {
      func_0028C388(*(int *)(param_1 + 0x4c));
      iVar14 = local_30;
    }
    break;
  case 0x17:
    *(uint *)(param_1 + 0x58) = *puVar15;
    puVar15 = *(uint **)(param_1 + 0x3c);
    uVar18 = func_00114608(_DAT_00363d9c,(uint)bVar1);
    fVar17 = fVar17 * DAT_00364554;
    *puVar15 = (int)uVar18 + *puVar15 & 0xe0000000;
    *(undefined4 *)(param_1 + 0x90) = 0;
    func_004D80A4((float *)(param_1 + 0xd8),*(uint *)(param_1 + 0x58),fVar17);
    *(float *)(*(int *)(param_1 + 0x34) + 4) = *(float *)(*(int *)(param_1 + 0x34) + 4) + fVar16;
    *(undefined1 *)(param_1 + 0x96) = *(undefined1 *)((int)param_2 + 0x11);
    piVar11 = DAT_00363d70;
    iVar6 = DAT_00363d6c;
    iVar14 = local_30;
    if (*(char *)(param_1 + 0x98) == '\0') {
      local_34 = DAT_00364558;
      local_38 = DAT_00363d6c;
      func_004EA104(*DAT_00363d70,&local_38,0);
      local_38 = iVar6;
      local_34 = DAT_0036455c;
      func_004EAF8C(*piVar11,&local_38,0);
      iVar14 = local_30;
    }
    break;
  case 0x18:
    *(undefined4 *)(*(int *)(param_1 + 0x34) + 4) = _DAT_00364560;
    local_34 = s___SE_PL_DAMAGE_FIRE_00364562 + 2;
    local_38 = iVar6;
    func_004EA104(*piVar5,&local_38,0);
    iVar14 = local_30;
    if (*(char *)(param_1 + 0x98) == '\0') {
      local_2c = s_SE_PV_DAMAGE_FIRE_003641c4;
      local_30 = iVar6;
      func_004EAF8C(*piVar5,&local_30,0);
      iVar14 = local_30;
    }
    break;
  case 0x19:
    *(undefined4 *)(*(int *)(param_1 + 0x34) + 4) = DAT_00364578;
    func_0028D7A4(*(int *)(param_1 + 0x4c) + 0x3c,fparam_0);
    func_0028D7A4(*(int *)(param_1 + 0x4c) + 0x5c,fparam_0);
    func_0028C8EC(*(int *)(param_1 + 0x4c),1,uVar13,in_r3);
    piVar5 = DAT_00363d70;
    iVar6 = DAT_00363d6c;
    local_34 = DAT_00364558;
    local_38 = DAT_00363d6c;
    func_004EA104(*DAT_00363d70,&local_38,0);
    iVar14 = local_30;
    if (*(char *)(param_1 + 0x98) != '\0') break;
    local_30 = iVar6;
    piVar11 = &local_30;
    local_2c = DAT_0036455c;
    iVar14 = *piVar5;
    goto LAB_003643c0;
  case 0x1a:
    *(undefined4 *)(*(int *)(param_1 + 0x34) + 4) = _DAT_0036457c;
    func_0028D7A4(*(int *)(param_1 + 0x4c) + 0x3c,fparam_0);
    func_0028D7A4(*(int *)(param_1 + 0x4c) + 0x5c,fparam_0);
    func_0028C8EC(*(int *)(param_1 + 0x4c),4,uVar13,in_r3);
    piVar11 = DAT_00363d70;
    iVar6 = DAT_00363d6c;
    local_2c = s___SE_PL_TORNADE_DRIVE_UP_0036457e + 2;
    local_30 = DAT_00363d6c;
    func_004EA104(*DAT_00363d70,&local_30,0);
    iVar14 = local_30;
    if (*(char *)(param_1 + 0x98) == '\0') {
      local_38 = iVar6;
      local_34 = DAT_00364558;
      func_004EA104(*piVar11,&local_38,0);
      local_38 = iVar6;
      local_34 = DAT_0036455c;
      func_004EAF8C(*piVar11,&local_38,0);
      func_0028C388(*(int *)(param_1 + 0x4c));
      iVar14 = local_30;
    }
    break;
  case 0x1b:
    iVar14 = *(int *)(param_1 + 0x4c);
    uVar12 = 2;
    goto LAB_003644bc;
  case 0x1c:
    func_0028D7A4(*(int *)(param_1 + 0x4c) + 0x3c,fparam_0);
    func_0028D7A4(*(int *)(param_1 + 0x4c) + 0x5c,fparam_0);
    uVar12 = 1;
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 10);
    iVar14 = *(int *)(param_1 + 0x4c);
LAB_003644bc:
    func_0028C8EC(iVar14,uVar12,uVar13,in_r3);
    iVar14 = local_30;
    break;
  case 0x21:
    func_0028D7A4(*(int *)(param_1 + 0x4c) + 0x3c,fparam_0);
    func_0028D7A4(*(int *)(param_1 + 0x4c) + 0x5c,fparam_0);
    piVar11 = DAT_00363d70;
    iVar14 = DAT_00363d6c;
    local_34 = s_SE_PL_DAMAGE_ICE_00363d74;
    local_38 = DAT_00363d6c;
    func_004EA104(*DAT_00363d70,&local_38,0);
    local_34 = s_SE_PV_DAMAGE_ICE_00363d88;
    local_38 = iVar14;
    func_004EAF8C(*piVar11,&local_38,0);
    iVar14 = local_30;
    break;
  case 0x22:
    local_38 = DAT_00363d6c;
    local_34 = s_SE_PV_GRABED_00364598;
    iVar14 = *DAT_00363d70;
LAB_003643c0:
    func_004EAF8C(iVar14,piVar11,0);
    iVar14 = local_30;
    break;
  case 0x23:
    local_34 = s_SE_PV_GRABED_00364598;
    local_38 = DAT_00363d6c;
    func_004EAF8C(*DAT_00363d70,&local_38,0);
    *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0xc);
    iVar14 = local_30;
    break;
  case 0x24:
    *(float *)(*(int *)(param_1 + 0x34) + 4) =
         *(float *)(*(int *)(param_1 + 0x34) + 4) + ALBW_AS_F32((*(undefined4 *)((char *)&s_ff__SE_PL_DAMAGE_BELCH_00364744 + 0)));
    func_004ED46C(*DAT_003641a8,4);
    func_0028C8EC(*(int *)(param_1 + 0x4c),1,uVar13,in_r3);
    piVar11 = DAT_00363d70;
    iVar14 = DAT_00363d6c;
    local_34 = s_ff__SE_PL_DAMAGE_BELCH_00364744 + 4;
    local_38 = DAT_00363d6c;
    func_004EA104(*DAT_00363d70,&local_38,0);
    local_34 = s_SE_PV_DAMAGE_BELCH_0036475c;
    local_38 = iVar14;
    func_004EAF8C(*piVar11,&local_38,0);
    iVar14 = func_0052E7D8(*(int *)(param_1 + 0x28),-*(int *)(param_1 + 0xec));
    func_001DD48C(*(int *)(param_1 + 0x28),iVar14,1);
    iVar14 = local_30;
    break;
  case 0x26:
    **(undefined4 **)(param_1 + 0x3c) = 0;
    func_0028C8EC(*(int *)(param_1 + 0x4c),1,uVar13,in_r3);
    piVar11 = DAT_00363d70;
    iVar14 = DAT_00363d6c;
    local_34 = s_SE_PL_DAMAGE_CHEW_UP_00364770;
    local_38 = DAT_00363d6c;
    func_004EA104(*DAT_00363d70,&local_38,0);
    local_34 = s_SE_PV_DAMAGE_CHEW_UP_00364788;
    local_38 = iVar14;
    func_004EAF8C(*piVar11,&local_38,0);
    iVar14 = local_30;
    break;
  case 0x27:
    func_004D8054(*(float **)(param_1 + 0x34),*puVar15,-fVar17);
    *(float *)(*(int *)(param_1 + 0x34) + 4) = *(float *)(*(int *)(param_1 + 0x34) + 4) + fVar16;
    iVar14 = **(int **)(param_1 + 0x3c);
    uVar18 = func_00114608(_DAT_00363d9c,extraout_r1);
    *(uint *)(param_1 + 0x58) = (int)uVar18 + iVar14 & 0xe0000000;
    func_001DE958(*(int *)(param_1 + 0x28));
    func_0028C8EC(*(int *)(param_1 + 0x4c),0,uVar13,in_r3);
    *(bool *)(param_1 + 0x95) = *param_2 == 0x27;
    iVar14 = local_30;
    break;
  case 0x28:
    *(undefined1 *)(param_1 + 0x9a) = 0;
    *(undefined1 *)(param_1 + 0xd5) = 0;
  }
  local_30 = iVar14;
  bVar7 = func_0052E8A0(*(int *)(param_1 + 0x28));
  bVar7 = !bVar7;
  sVar3 = 0;
  if (!bVar7) {
    sVar3 = param_2[1];
  }
  if (!bVar7 && sVar3 != 0x14) {
    if ((!bVar7 && sVar3 != 0x14) && (bVar7 || 0x13 < sVar3)) {
      if (sVar3 == 0x18 || sVar3 == 0x1a) {
        return;
      }
      if (sVar3 == 0x24) {
        return;
      }
    }
    else {
      if (sVar3 == 0x11 || sVar3 == 0x12) {
        return;
      }
      if (sVar3 == 0x13) {
        return;
      }
    }
    *(float *)(*(int *)(param_1 + 0x34) + 4) = fparam_0;
  }
  return;
}

