#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005e4208;
extern undefined4 *DAT_005e420c;
extern undefined4 DAT_005e4220;
extern undefined4 DAT_005e4224;
extern undefined4 DAT_005e4228;
extern undefined4 *DAT_005e422c;
extern undefined4 DAT_005e4254;
extern undefined4 *DAT_005e4258;
extern undefined4 DAT_005e4278;
extern char s_Gm_SRCJudgeT_005e4210[];
extern char s_InDraw_005e4270[];
extern char s_InLose_005e4268[];
extern char s_InOutWin_005e425c[];
extern char s_N_Draw_00_005e4248[];
extern char s_N_Lose_00_005e423c[];
extern char s_N_Win_00_005e4230[];

// USA 005E4170 <- EU 005E4148 (Ghidra, non-matching)
// GLOBAL DAT_005e4208 undefined4 *
// GLOBAL DAT_005e420c undefined4 *
// GLOBAL DAT_005e4220 undefined4
// GLOBAL DAT_005e4224 undefined4
// GLOBAL DAT_005e4228 undefined4
// GLOBAL DAT_005e422c undefined4 *
// GLOBAL DAT_005e4254 undefined4
// GLOBAL DAT_005e4258 undefined4 *
// GLOBAL DAT_005e4278 undefined4
// GLOBAL s_Gm_SRCJudgeT_005e4210 string
// GLOBAL s_InDraw_005e4270 string
// GLOBAL s_InLose_005e4268 string
// GLOBAL s_InOutWin_005e425c string
// GLOBAL s_N_Draw_00_005e4248 string
// GLOBAL s_N_Lose_00_005e423c string
// GLOBAL s_N_Win_00_005e4230 string

undefined4 func_005E4170(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005e4208;
  *DAT_005e4208 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005e4220;
  puVar1 = DAT_005e420c;
  *DAT_005e420c = 0;
  puVar1[1] = 0;
  puVar1[3] = s_Gm_SRCJudgeT_005e4210;
  puVar1[2] = uVar2;
  puVar1 = DAT_005e422c;
  DAT_005e422c[1] = s_N_Win_00_005e4230;
  *puVar1 = uVar2;
  puVar1[3] = s_N_Lose_00_005e423c;
  puVar1[2] = uVar2;
  puVar1[4] = uVar2;
  puVar1[5] = s_N_Draw_00_005e4248;
  puVar1 = DAT_005e4258;
  DAT_005e4258[1] = s_InOutWin_005e425c;
  *puVar1 = uVar2;
  puVar1[3] = s_InLose_005e4268;
  puVar1[2] = uVar2;
  puVar1[4] = uVar2;
  puVar1[5] = s_InDraw_005e4270;
  return func_005902C0(0);
}

