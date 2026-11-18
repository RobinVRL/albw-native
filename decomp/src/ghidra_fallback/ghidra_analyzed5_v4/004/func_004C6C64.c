#include "ghidra_types.h"

extern int func_003B6ECC(void);
extern int func_003B6EFC(undefined4 *param_1,int param_2);
extern int func_003B7144(uint param_1);
extern int func_004ACC90(int param_1,undefined4 param_2,float *param_3);
extern int func_004EF418(int param_1,byte *param_2,int param_3,int param_4);
extern int *DAT_004c6d1c;
extern int *DAT_004c6d20;

// USA 004C6C64 <- EU 004C6C3C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// GLOBAL DAT_004c6d1c int *
// GLOBAL DAT_004c6d20 int *

undefined4 func_004C6C64(int param_1,int param_2,uint param_3,float *param_4,undefined4 param_5)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 ((byte *)(albw_frame + 0x0))
  #define local_3c (*(uint *)(albw_frame + 0x4))
  #define local_38 (*(undefined2 *)(albw_frame + 0x8))
  #define local_36 (*(undefined1 *)(albw_frame + 0xa))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define fStack_30 (*(float *)(albw_frame + 0x10))
  #define fStack_2c (*(float *)(albw_frame + 0x14))
  if (param_2 == 0) {
    bVar2 = func_003B7144(param_3);
  }
  else {
    bVar2 = func_003B6ECC();
  }
  piVar1 = DAT_004c6d1c;
  local_38 = 0;
  local_40[0] = 7;
  local_36 = 1;
  local_3c = (uint)bVar2;
  iVar3 = func_004EF418(*DAT_004c6d1c,local_40,4,0);
  uVar4 = 0;
  if (iVar3 != 0) {
    local_34 = *param_4;
    fStack_30 = param_4[1];
    fStack_2c = param_4[2];
    if (param_2 != 0) {
      func_003B6EFC((undefined4 *)(param_1 + 0x52c),(uint)bVar2);
      *(undefined4 **)(param_1 + 0x51c) = (undefined4 *)(param_1 + 0x52c);
      *(undefined1 *)(param_1 + 0x5ac) = 1;
    }
    uVar4 = *(undefined4 *)(*piVar1 + 0x1c);
    *(undefined1 *)(param_1 + 0x520) = *(undefined1 *)(*piVar1 + 0x18);
    *(undefined4 *)(param_1 + 0x524) = uVar4;
    piVar1 = DAT_004c6d20;
    *(undefined2 *)(param_1 + 0x528) = 0xffff;
    *(undefined1 *)(param_1 + 0x52a) = 0;
    func_004ACC90(*piVar1,param_5,&local_34);
    uVar4 = 1;
  }
  return uVar4;
}

