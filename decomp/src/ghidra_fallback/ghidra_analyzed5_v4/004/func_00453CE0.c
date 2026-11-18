#include "ghidra_types.h"

extern int func_001B6C04(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00367D48(int param_1,undefined4 *param_2);
extern int func_00367FB4(int param_1,undefined2 param_2);
extern int func_00368074(int param_1,int param_2);
extern int func_00368398(int param_1,int *param_2);
extern int func_003694B4(int param_1,int param_2,int param_3);
extern int func_003B7194(int *param_1,uint param_2);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_005583F8(char *param_1);
extern int func_0066D168(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00453df8;
extern int DAT_00453dfc;
extern undefined DAT_00453e00;
extern undefined4 DAT_00453e1c;
extern char s__SE_S_CROSS_BOARD_APPEAR_00453e03[];
extern undefined4 _DAT_00453e00;

// USA 00453CE0 <- EU 00453CB8 (Ghidra, non-matching)
// GLOBAL DAT_00453df8 int *
// GLOBAL DAT_00453dfc int
// GLOBAL DAT_00453e00 undefined
// GLOBAL DAT_00453e1c undefined4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_00453CE0(int param_1)

{
  float fparam_0;
  char *pcVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  #define local_28 ((int *)(albw_frame + 0x18))
  #define local_14 (*(char * *)(albw_frame + 0x2c))
  func_001B6C04(param_1);
  if ((*DAT_00453df8 != 0) && (pcVar1 = *(char **)(*DAT_00453df8 + 0x51c), pcVar1 != (char *)0x0)) {
    local_34 = pcVar1 + 0x10;
    local_38 = DAT_00453dfc;
    func_00368398(*(int *)(param_1 + 0x98),&local_38);
    func_00368074(*(int *)(param_1 + 0x98),(int)(pcVar1 + 0x28));
    iVar2 = func_005583F8(pcVar1);
    func_003694B4(*(int *)(param_1 + 0x98),iVar2,0);
    local_28[3] = 0xffffffff;
    local_28[0] = 0;
    local_28[1] = 0;
    local_28[2] = 0;
    iVar2 = func_003B7194(local_28,(int)pcVar1[6]);
    if (iVar2 != 0) {
      func_00367D48(*(int *)(param_1 + 0x98),local_28);
    }
    func_00367FB4(*(int *)(param_1 + 0x98),(short)pcVar1[7]);
  }
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0xb2) = 2;
  fparam_0 = ALBW_AS_F32(_DAT_00453e00);
  *(undefined2 *)(param_1 + 0xb0) = 0;
  func_002317C0((undefined2 *)(param_1 + 0xb0),fparam_0);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x2e) = 1;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  func_0066D168((undefined4 *)(param_1 + 0x74),0);
  local_14 = s__SE_S_CROSS_BOARD_APPEAR_00453e03 + 1;
  local_28[4] = DAT_00453e1c;
  func_00533078(param_1,local_28 + 4,0);
  iVar2 = *(int *)(param_1 + 0xa0);
  if (iVar2 != 0) {
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
  }
  return;
}

