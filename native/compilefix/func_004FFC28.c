/* compilefix: USA 004FFC28 (EU 004FFC00), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier 'BADSPACEBASE'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - ((int)(BADSPACEBASE *)0 + ADDR) + n (a pc-relative address) -> s_cf_<ADDR+n> (string in the code section) [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
extern char s_cf_004fff44[];
#include "compilefix.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004905E0(float fparam_0);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_00520FC0(void);
extern int func_0058A7D4(void);
extern int iRam004fff54;
extern undefined4 uRam004fff40;
extern undefined4 *puRam004fff3c;
extern float DAT_004fff1c;
extern float DAT_004fff20;
extern float DAT_004fff24;
extern float DAT_004fff28;
extern float DAT_004fff2c;
extern int DAT_004fff30;
extern float DAT_004fff34;
extern undefined4 DAT_004fff38;

// USA 004FFC28 <- EU 004FFC00 (Ghidra, non-matching)
// GLOBAL DAT_004fff1c float
// GLOBAL DAT_004fff20 float
// GLOBAL DAT_004fff24 float
// GLOBAL DAT_004fff28 float
// GLOBAL DAT_004fff2c float
// GLOBAL DAT_004fff30 int
// GLOBAL DAT_004fff34 float
// GLOBAL DAT_004fff38 undefined4
// GLOBAL UNK_004fff3c undefined4 *
// GLOBAL UNK_004fff40 undefined4
// GLOBAL UNK_004fff54 int

undefined4 func_004FFC28(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  float *pfVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint in_fpscr;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define local_28 (*(float *)(albw_frame + 0x18))
  #define local_24 (*(float *)(albw_frame + 0x1c))
  #define iStack_20 (*(int *)(albw_frame + 0x20))
  #define pcStack_1c (*(char * *)(albw_frame + 0x24))
  pfVar3 = (float *)func_00520FC0();
  fVar11 = *pfVar3;
  fVar9 = fVar11 - *(float *)(param_1 + 8);
  fVar10 = pfVar3[2] - *(float *)(param_1 + 0x10);
  fVar9 = fVar9 * fVar9 + fVar10 * fVar10;
  fVar10 = *(float *)(param_1 + 0x8e8) * *(float *)(param_1 + 0x8e8);
  uVar5 = in_fpscr & 0xfffffff | (uint)(fVar10 < fVar9) << 0x1f | (uint)(fVar10 == fVar9) << 0x1e;
  uVar8 = uVar5 | (uint)(NAN(fVar10) || NAN(fVar9)) << 0x1c;
  bVar1 = (byte)(uVar5 >> 0x18);
  if ((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(uVar8 >> 0x1c) & 1)) {
    fVar9 = DAT_004fff20;
    fVar10 = DAT_004fff1c;
    func_00115C54(&local_38,(float *)(param_1 + 8),(float *)(param_1 + 0x3d0));
    func_00115D70(&local_38,&local_38,DAT_004fff24);
    puVar4 = (uint *)func_0058A7D4();
    uVar5 = func_00111A64(puVar4);
    fVar11 = (float)VectorUnsignedToFloat(uVar5,(byte)(uVar8 >> 0x15) & 3);
    fVar10 = fVar11 * DAT_004fff28 * fVar9 + fVar10;
    puVar4 = (uint *)func_0058A7D4();
    uVar5 = func_00111A64(puVar4);
    pfVar3 = (float *)(DAT_004fff30 + (uVar5 >> 0x18) * 0x10);
    fVar9 = (float)VectorUnsignedToFloat(uVar5 & 0xffffff,(byte)(uVar8 >> 0x15) & 3);
    local_38 = local_38 + (*pfVar3 + pfVar3[1] * fVar9 * DAT_004fff2c) * fVar10;
    fVar9 = (float)VectorUnsignedToFloat(uVar5 & 0xffffff,(byte)(uVar8 >> 0x15) & 3);
    local_30 = local_30 + (pfVar3[2] + pfVar3[3] * fVar9 * DAT_004fff2c) * fVar10;
    *(undefined4 *)(param_1 + 0x8e8) = *(undefined4 *)(param_1 + 0x8e4);
  }
  else {
    local_34 = pfVar3[1];
    local_30 = pfVar3[2];
    *(float *)(param_1 + 0x8e8) = *(float *)(param_1 + 0x8e4) + DAT_004fff1c;
    local_38 = fVar11;
  }
  func_00115C70(&local_2c,&local_38,(float *)(param_1 + 0x3d0));
  local_28 = DAT_004fff34;
  fVar9 = DAT_004fff34;
  func_00115DC8(&local_2c);
  if (local_24 == fVar9 && local_2c == fVar9) {
    iVar6 = 0;
  }
  else if (local_24 < fVar9) {
    if (local_2c < fVar9) {
      if (local_2c < local_24) {
        iVar6 = func_004905E0(local_24 / local_2c);
        iVar6 = -0x40000000 - iVar6;
      }
      else {
        iVar6 = func_004905E0(local_2c / local_24);
        iVar6 = iVar6 + -0x80000000;
      }
    }
    else {
      local_24 = -local_24;
      if (local_24 < local_2c) {
        iVar6 = func_004905E0(local_24 / local_2c);
        iVar6 = iVar6 + 0x40000000;
      }
      else {
        iVar6 = func_004905E0(local_2c / local_24);
        iVar6 = -0x80000000 - iVar6;
      }
    }
  }
  else if (local_2c < fVar9) {
    local_2c = -local_2c;
    if (local_24 < local_2c) {
      iVar6 = func_004905E0(local_24 / local_2c);
      iVar6 = iVar6 + -0x40000000;
    }
    else {
      iVar6 = func_004905E0(local_2c / local_24);
      iVar6 = -iVar6;
    }
  }
  else if (local_24 < local_2c) {
    iVar6 = func_004905E0(local_24 / local_2c);
    iVar6 = 0x40000000 - iVar6;
  }
  else {
    iVar6 = func_004905E0(local_2c / local_24);
  }
  *(int *)(param_1 + 0x8ec) = iVar6;
  *(float *)(param_1 + 0x8e0) = fVar9;
  uVar2 = DAT_004fff38;
  *(undefined4 *)(param_1 + 0x928) = 0x23;
  *(undefined4 *)(param_1 + 0x92c) = uVar2;
  *(undefined4 *)(param_1 + 0x924) = 0;
  func_004FABDC(param_1,1,4,0);
  *(undefined4 *)(param_1 + 0x900) = *(undefined4 *)(param_1 + 0x8fc);
  uVar2 = uRam004fff40;
  uVar7 = *puRam004fff3c;
  *(undefined4 *)(param_1 + 0x90c) = 0x14;
  *(undefined4 *)(param_1 + 0x904) = uVar7;
  *(undefined4 *)(param_1 + 0x910) = uVar2;
  *(undefined4 *)(param_1 + 0x908) = 0;
  *(undefined4 *)(param_1 + 0x918) = 0;
  iStack_20 = iRam004fff54;
  *(undefined4 *)(param_1 + 0x920) = 0;
  pcStack_1c = (char *)((int)s_cf_004fff44);
  return func_00150A84((int *)param_1,&iStack_20,0);
}

