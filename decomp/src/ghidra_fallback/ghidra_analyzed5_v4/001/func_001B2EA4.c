#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FB208(int param_1,int param_2,float *param_3,undefined1 param_4,int param_5);
extern int func_0065B158(undefined4 *param_1,undefined1 param_2);
extern int iRam001b2f60;
extern undefined4 uRam001b2f64;
extern undefined4 DAT_001b2f4c;
extern char s_SE_Stalfos_LAND_001b2f50[];

// USA 001B2EA4 <- EU 001B2EA4 [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_001b2f4c undefined4
// GLOBAL UNK_001b2f60 int
// GLOBAL UNK_001b2f64 undefined4
// GLOBAL s_SE_Stalfos_LAND_001b2f50 string

void func_001B2EA4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define iStack_18 (*(int *)(albw_frame + 0x8))
  #define pcStack_14 (*(char * *)(albw_frame + 0xc))
  uVar2 = DAT_001b2f4c;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_001b2f4c;
  *(undefined4 *)(param_1 + 0x3e0) = uVar2;
  *(undefined4 *)(param_1 + 0x3e4) = uVar2;
  func_004FABDC(param_1,4,2,0);
  pcStack_14 = s_SE_Stalfos_LAND_001b2f50;
  iStack_18 = iRam001b2f60;
  func_00150A84((int *)param_1,&iStack_18,0);
  *(undefined4 *)(param_1 + 0x4f0) = uRam001b2f64;
  iVar1 = func_004FB208(param_1,1,(float *)0x0,0,0);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x3dc) = uVar2;
    *(undefined4 *)(param_1 + 0x3e0) = uVar2;
    *(undefined4 *)(param_1 + 0x3e4) = uVar2;
    func_0065B158((undefined4 *)(param_1 + 0x8bc),9);
  }
  return;
}

