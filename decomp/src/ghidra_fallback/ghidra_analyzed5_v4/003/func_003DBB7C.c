#include "ghidra_types.h"

extern int func_00104800(void);
extern int func_0010DE90(undefined4 *param_1);
extern int func_003D2C00(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int func_003DC2E4(void);
extern int func_003DC8F0(char *param_1);
extern int func_003DCBF8(int param_1,undefined2 param_2);
extern int func_003DD78C(undefined1 *param_1);
extern int func_003DE544(uint *param_1,int param_2);
extern char *DAT_003dbbf0;
extern uint DAT_003dbbf4;
extern uint *DAT_003dbbf8;
extern int DAT_003dbbfc;
extern char *DAT_003dbc00;
extern undefined4 *DAT_003dbc04;
extern undefined4 DAT_003dbc08;
extern undefined4 DAT_003dbc0c;
extern undefined4 DAT_003dbc10;

// USA 003DBB7C <- EU 003DBB5C (Ghidra, non-matching)
// GLOBAL DAT_003dbbf0 char *
// GLOBAL DAT_003dbbf4 uint
// GLOBAL DAT_003dbbf8 uint *
// GLOBAL DAT_003dbbfc int
// GLOBAL DAT_003dbc00 char *
// GLOBAL DAT_003dbc04 undefined4 *
// GLOBAL DAT_003dbc08 undefined4
// GLOBAL DAT_003dbc0c undefined4
// GLOBAL DAT_003dbc10 undefined4

uint func_003DBB7C(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  undefined1 *puVar5;
  
  pcVar2 = DAT_003dbbf0;
  uVar4 = DAT_003dbbf4;
  if (((*DAT_003dbbf0 == '\0') && (uVar4 = func_00104800(), -1 < (int)uVar4)) &&
     (uVar4 = func_003DE544(DAT_003dbbf8,0), pcVar3 = DAT_003dbc00, -1 < (int)uVar4)) {
    cVar1 = *(char *)(DAT_003dbbfc + 0xc0);
    pcVar2[4] = cVar1;
    func_003DCBF8((int)pcVar3,(short)cVar1);
    func_0010DE90(DAT_003dbc04);
    func_003DC8F0(DAT_003dbc00);
    puVar5 = (undefined1 *)func_003DC2E4();
    func_003DD78C(puVar5);
    func_003D2C00(DAT_003dbc10,DAT_003dbc0c,DAT_003dbc08);
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2[5] = '\x01';
    *pcVar2 = '\x01';
    uVar4 = 0;
  }
  return uVar4;
}

