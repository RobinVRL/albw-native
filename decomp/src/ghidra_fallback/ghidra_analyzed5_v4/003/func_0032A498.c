#include "ghidra_types.h"

extern int func_001507D8(int param_1,int *param_2,int param_3);
extern undefined8 func_0058AB74(int param_1);
extern int func_00665670(undefined4 *param_1,undefined1 param_2);
extern int DAT_0032a504;
extern char s_SE_BlackShueyes_BODY_ATTACK_0032a4e8[];

// USA 0032A498 <- EU 0032A474 (Ghidra, non-matching)
// GLOBAL DAT_0032a504 int
// GLOBAL s_SE_BlackShueyes_BODY_ATTACK_0032a4e8 string

int func_0032A498(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  local_10 = DAT_0032a504;
  local_c = s_SE_BlackShueyes_BODY_ATTACK_0032a4e8;
  func_001507D8(param_1,&local_10,0);
  uVar2 = func_0058AB74(param_1);
  if ((int)uVar2 == 0xc) {
    *(int *)(param_1 + 1000) = *(int *)(param_1 + 0xc3c) + *(int *)(param_1 + 1000);
  }
  iVar1 = *(int *)(param_1 + 0x994) + *(int *)(param_1 + 0xa6c);
  if (iVar1 == 0) {
    iVar1 = func_00665670((undefined4 *)(param_1 + 0xba8),9);
  }
  return iVar1;
}

