#include "ghidra_types.h"

extern int func_0010B830(undefined4 *param_1);
extern int func_0025D640(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4, undefined4 param_5,int param_6,byte param_7);
extern int func_0049BE9C(int param_1,undefined4 param_2);
extern undefined4 DAT_003aea68;
extern int DAT_003aea7c;
extern undefined4 DAT_003aea80;
extern undefined4 DAT_003aea84;
extern char s_BackgrounLoad_003aea6c[];

// USA 003AE9AC <- EU 003AE988 (Ghidra, non-matching)
// GLOBAL DAT_003aea68 undefined4
// GLOBAL DAT_003aea7c int
// GLOBAL DAT_003aea80 undefined4
// GLOBAL DAT_003aea84 undefined4
// GLOBAL s_BackgrounLoad_003aea6c string

undefined4 * func_003AE9AC(undefined4 *param_1,int *param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  uVar1 = DAT_003aea68;
  local_1c = s_BackgrounLoad_003aea6c;
  local_20 = DAT_003aea68;
  piVar4 = func_0025D640(param_1,(int)&local_20,param_2,param_3,0x2800,2,0);
  iVar2 = DAT_003aea7c;
  *piVar4 = DAT_003aea7c;
  piVar4[6] = iVar2 + 0x54;
  puVar5 = func_0010B830(piVar4 + 0x2c);
  uVar3 = DAT_003aea80;
  puVar5[7] = uVar1;
  puVar5[8] = uVar3;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0x20;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  uVar3 = DAT_003aea84;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0;
  puVar5[0x10] = 0;
  puVar5[0x13] = uVar3;
  puVar5[0x12] = uVar1;
  puVar5[0x11] = 0;
  *(undefined1 *)(puVar5 + 0x14) = 7;
  *(undefined1 *)((int)puVar5 + 0x51) = 4;
  *(undefined1 *)((int)puVar5 + 0x52) = 0;
  *(undefined1 *)((int)puVar5 + 0x53) = 0;
  *(undefined1 *)(puVar5 + 0x15) = 0;
  puVar5[0x16] = 0;
  *(undefined1 *)(puVar5 + 0x17) = 0;
  func_0049BE9C((int)(puVar5 + -0x2c),param_4 ^ 1);
  return puVar5 + -0x2c;
}

