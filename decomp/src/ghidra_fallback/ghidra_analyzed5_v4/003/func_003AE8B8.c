#include "ghidra_types.h"

extern int func_0010B830(undefined4 *param_1);
extern int func_0025D640(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4, undefined4 param_5,int param_6,byte param_7);
extern int func_0049BE9C(int param_1,undefined4 param_2);
extern undefined4 DAT_003ae978;
extern int DAT_003ae97c;
extern undefined4 DAT_003ae980;
extern undefined4 DAT_003ae984;
extern char s_BackgroundLoad_003ae968[];

// USA 003AE8B8 <- EU 003AE894 (Ghidra, non-matching)
// GLOBAL DAT_003ae978 undefined4
// GLOBAL DAT_003ae97c int
// GLOBAL DAT_003ae980 undefined4
// GLOBAL DAT_003ae984 undefined4
// GLOBAL s_BackgroundLoad_003ae968 string

undefined4 * func_003AE8B8(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  uVar1 = DAT_003ae978;
  local_14 = s_BackgroundLoad_003ae968;
  local_18 = DAT_003ae978;
  piVar5 = func_0025D640(param_1,(int)&local_18,param_2,0xf,0x2800,2,0);
  iVar2 = DAT_003ae97c;
  *piVar5 = DAT_003ae97c;
  piVar5[6] = iVar2 + 0x54;
  puVar6 = func_0010B830(piVar5 + 0x2c);
  uVar3 = DAT_003ae980;
  puVar6[7] = uVar1;
  uVar4 = DAT_003ae984;
  puVar6[8] = uVar3;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0x20;
  puVar6[0xc] = 0;
  puVar6[0xd] = 0;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  puVar6[0x10] = 0;
  puVar6[0x13] = uVar4;
  puVar6[0x12] = uVar1;
  puVar6[0x11] = 0;
  *(undefined1 *)(puVar6 + 0x14) = 7;
  *(undefined1 *)((int)puVar6 + 0x51) = 4;
  *(undefined1 *)((int)puVar6 + 0x52) = 0;
  *(undefined1 *)((int)puVar6 + 0x53) = 0;
  *(undefined1 *)(puVar6 + 0x15) = 0;
  puVar6[0x16] = 0;
  *(undefined1 *)(puVar6 + 0x17) = 0;
  func_0049BE9C((int)(puVar6 + -0x2c),1);
  return puVar6 + -0x2c;
}

