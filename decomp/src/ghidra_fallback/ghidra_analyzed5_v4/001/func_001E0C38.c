#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010B954(int param_1,int param_2,int *param_3,int param_4,int param_5);
extern int func_001339A4(int *param_1,int param_2);
extern int func_001E0F00(int param_1,uint param_2);
extern int DAT_001e0e28;
extern undefined4 *DAT_001e0e2c;
extern undefined4 DAT_001e0e30;
extern undefined4 DAT_001e0e68;
extern undefined4 DAT_001e0e6c;
extern int *DAT_001e0e70;
extern undefined4 *DAT_001e0e74;
extern undefined4 DAT_001e0eac;
extern char s_Dbg_Course_001e0e90[];
extern char s_Dbg_Game_001e0e84[];
extern char s_Dbg_Root_001e0e78[];
extern char s_Dbg_StageHead_001e0e9c[];
extern char s_Res_Course_001e0e4c[];
extern char s_Res_Game_001e0e40[];
extern char s_Res_Root_001e0e34[];
extern char s_Res_StageHead_001e0e58[];
extern char s_cf_001e0e34[];
extern char s_cf_001e0e40[];
extern char s_cf_001e0e4c[];
extern char s_cf_001e0e58[];
extern char s_cf_001e0e78[];
extern char s_cf_001e0e84[];
extern char s_cf_001e0e90[];
extern char s_cf_001e0e9c[];

// USA 001E0C38 <- EU 001E0C38 (Ghidra, non-matching)
// GLOBAL DAT_001e0e28 int
// GLOBAL DAT_001e0e2c undefined4 *
// GLOBAL DAT_001e0e30 undefined4
// GLOBAL DAT_001e0e68 undefined4
// GLOBAL DAT_001e0e6c undefined4
// GLOBAL DAT_001e0e70 int *
// GLOBAL DAT_001e0e74 undefined4 *
// GLOBAL DAT_001e0eac undefined4
// GLOBAL s_cf_001e0e90 string
// GLOBAL s_cf_001e0e84 string
// GLOBAL s_cf_001e0e78 string
// GLOBAL s_cf_001e0e9c string
// GLOBAL s_cf_001e0e4c string
// GLOBAL s_cf_001e0e40 string
// GLOBAL s_cf_001e0e34 string
// GLOBAL s_cf_001e0e58 string

undefined4 func_001E0C38(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint *puVar9;
  
  func_001E0F00(param_1,2);
  uVar2 = DAT_001e0e30;
  puVar1 = DAT_001e0e2c;
  iVar4 = DAT_001e0e28;
  if (((*(uint *)(DAT_001e0e28 + 0xc) & 1) == 0) &&
     (iVar3 = func_00100174((int *)(DAT_001e0e28 + 0xc)), iVar3 != 0)) {
    puVar1[1] = s_Res_Root_001e0e34;
    *puVar1 = uVar2;
    puVar1[3] = s_Res_Game_001e0e40;
    puVar1[2] = uVar2;
    puVar1[5] = s_Res_Course_001e0e4c;
    puVar1[4] = uVar2;
    puVar1[7] = s_Res_StageHead_001e0e58;
    puVar1[6] = uVar2;
  }
  if (((*(uint *)(iVar4 + 8) & 1) == 0) &&
     (iVar4 = func_00100174(DAT_001e0e70), puVar8 = DAT_001e0e74, iVar4 != 0)) {
    DAT_001e0e74[1] = s_Dbg_Root_001e0e78;
    *puVar8 = uVar2;
    puVar8[3] = s_Dbg_Game_001e0e84;
    puVar8[2] = uVar2;
    puVar8[5] = s_Dbg_Course_001e0e90;
    puVar8[4] = uVar2;
    puVar8[6] = uVar2;
    puVar8[7] = s_Dbg_StageHead_001e0e9c;
  }
  puVar9 = (uint *)(param_1 + 0x1fa4);
  if (1 < (int)*puVar9) {
    return 0;
  }
  do {
    puVar8 = (undefined4 *)(param_1 + 0x10);
    uVar5 = *puVar9 + 1;
    *puVar9 = uVar5;
    if (uVar5 < 7) {
      puVar8 = puVar8 + uVar5 * 0xca;
    }
    piVar6 = func_0010B954(0,(int)(puVar1 + uVar5 * 2),*(int **)(param_1 + 0x1fa8),1,0);
    *puVar8 = piVar6;
    puVar8[1] = 0;
    puVar7 = (undefined4 *)(param_1 + 0x10);
    puVar8[2] = 0;
    puVar8[3] = 0;
    uVar5 = *puVar9;
    if (uVar5 < 7) {
      puVar7 = puVar7 + uVar5 * 0xca;
    }
    iVar4 = param_1 + 0x10;
    *(undefined4 *)(param_1 + 0x1fa8) = *puVar7;
    if (uVar5 < 7) {
      iVar4 = iVar4 + uVar5 * 0x328;
    }
    *(int *)(param_1 + 0x1fac) = iVar4 + 0xc;
  } while ((int)uVar5 < 2);
  return func_001339A4(*(int **)(param_1 + 0x1fb0),2);
}

