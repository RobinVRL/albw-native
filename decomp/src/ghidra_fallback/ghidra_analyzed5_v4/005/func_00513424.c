#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_004CF478(int param_1,int param_2);
extern int iRam005134dc;
extern int DAT_005134d8;
extern char s_SE_KinSta_APPEAR_005134c4[];

// USA 00513424 <- EU 005133FC (Ghidra, non-matching)
// GLOBAL DAT_005134d8 int
// GLOBAL UNK_005134dc int
// GLOBAL s_SE_KinSta_APPEAR_005134c4 string

void func_00513424(int *param_1)

{
  uint *puVar1;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 (*(int *)(albw_frame + 0x8))
  #define local_64 (*(char * *)(albw_frame + 0xc))
  if (*(char *)(param_1[0x147] + 0x30) == '\0') {
    local_64 = s_SE_KinSta_APPEAR_005134c4;
    local_68 = DAT_005134d8;
    func_00150A84(param_1,&local_68,0);
  }
  func_004CF478(param_1[0x147],1);
  func_00151148(param_1[0x148],1);
  if ((char)param_1[0x152] == '\a') {
    puVar1 = (uint *)func_002C11E8(&local_68,5,6,0);
    func_0016898C(param_1[300],puVar1);
  }
  else {
    puVar1 = (uint *)func_002C11E8(&local_68,1,6,0);
    func_0016898C(param_1[300],puVar1);
  }
  param_1[0xf8] = iRam005134dc;
  *(undefined1 *)((int)param_1 + 0x559) = 1;
  return;
}

