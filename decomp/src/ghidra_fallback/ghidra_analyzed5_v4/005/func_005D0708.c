#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern int DAT_005d0824;
extern undefined4 *DAT_005d0828;
extern undefined4 DAT_005d0848;
extern undefined4 DAT_005d084c;
extern undefined4 DAT_005d0850;
extern undefined4 *DAT_005d0854;
extern undefined4 *DAT_005d0874;
extern undefined4 *DAT_005d088c;
extern undefined4 *DAT_005d08a8;
extern undefined4 *DAT_005d08c4;
extern undefined4 *DAT_005d08e0;
extern undefined4 *DAT_005d0900;
extern undefined4 *DAT_005d0920;
extern undefined4 *DAT_005d0940;
extern char s_cmn_fileformat_ask_005d0878[];
extern char s_cmn_fileformat_ask_00_005d0890[];
extern char s_cmn_fileformat_ask_01_005d08ac[];
extern char s_cmn_fileformat_confirm_005d08c8[];
extern char s_cmn_fileformat_confirm_00_005d08e4[];
extern char s_cmn_fileformat_confirm_01_005d0904[];
extern char s_cmn_fileformat_formatted_005d0944[];
extern char s_cmn_fileformat_formatting_005d0924[];
extern char s_cmn_fileselect_initialized_005d0858[];
extern char s_cmn_fileselect_preparing_005d082c[];

// USA 005D0708 <- EU 005D06E0 (Ghidra, non-matching)
// GLOBAL DAT_005d0824 int
// GLOBAL DAT_005d0828 undefined4 *
// GLOBAL DAT_005d0848 undefined4
// GLOBAL DAT_005d084c undefined4
// GLOBAL DAT_005d0850 undefined4
// GLOBAL DAT_005d0854 undefined4 *
// GLOBAL DAT_005d0874 undefined4 *
// GLOBAL DAT_005d088c undefined4 *
// GLOBAL DAT_005d08a8 undefined4 *
// GLOBAL DAT_005d08c4 undefined4 *
// GLOBAL DAT_005d08e0 undefined4 *
// GLOBAL DAT_005d0900 undefined4 *
// GLOBAL DAT_005d0920 undefined4 *
// GLOBAL DAT_005d0940 undefined4 *
// GLOBAL s_cmn_fileformat_ask_005d0878 string
// GLOBAL s_cmn_fileformat_ask_00_005d0890 string
// GLOBAL s_cmn_fileformat_ask_01_005d08ac string
// GLOBAL s_cmn_fileformat_confirm_005d08c8 string
// GLOBAL s_cmn_fileformat_confirm_00_005d08e4 string
// GLOBAL s_cmn_fileformat_confirm_01_005d0904 string
// GLOBAL s_cmn_fileformat_formatted_005d0944 string
// GLOBAL s_cmn_fileformat_formatting_005d0924 string
// GLOBAL s_cmn_fileselect_initialized_005d0858 string
// GLOBAL s_cmn_fileselect_preparing_005d082c string

undefined4 func_005D0708(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_005d0824;
  *(undefined4 *)(DAT_005d0824 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  uVar3 = DAT_005d0848;
  puVar2 = DAT_005d0828;
  *DAT_005d0828 = 0;
  puVar2[1] = 0;
  puVar2[3] = s_cmn_fileselect_preparing_005d082c;
  puVar2[2] = uVar3;
  puVar2 = DAT_005d0854;
  DAT_005d0854[1] = s_cmn_fileselect_initialized_005d0858;
  *puVar2 = uVar3;
  puVar2 = DAT_005d0874;
  DAT_005d0874[1] = s_cmn_fileformat_ask_005d0878;
  *puVar2 = uVar3;
  puVar2 = DAT_005d088c;
  DAT_005d088c[1] = s_cmn_fileformat_ask_00_005d0890;
  *puVar2 = uVar3;
  puVar2 = DAT_005d08a8;
  DAT_005d08a8[1] = s_cmn_fileformat_ask_01_005d08ac;
  *puVar2 = uVar3;
  puVar2 = DAT_005d08c4;
  DAT_005d08c4[1] = s_cmn_fileformat_confirm_005d08c8;
  *puVar2 = uVar3;
  puVar2 = DAT_005d08e0;
  DAT_005d08e0[1] = s_cmn_fileformat_confirm_00_005d08e4;
  *puVar2 = uVar3;
  puVar2 = DAT_005d0900;
  DAT_005d0900[1] = s_cmn_fileformat_confirm_01_005d0904;
  *puVar2 = uVar3;
  puVar2 = DAT_005d0920;
  DAT_005d0920[1] = s_cmn_fileformat_formatting_005d0924;
  *puVar2 = uVar3;
  puVar2 = DAT_005d0940;
  DAT_005d0940[1] = s_cmn_fileformat_formatted_005d0944;
  *puVar2 = uVar3;
  return func_005902C0(puVar2);
}

