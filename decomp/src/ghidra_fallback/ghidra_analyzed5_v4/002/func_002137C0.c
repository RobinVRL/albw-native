#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_001D6FD0(undefined4 *param_1,uint param_2,int param_3,int *param_4,int param_5);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern undefined8 func_0058AB74(int param_1);
extern int iRam0021389c;
extern int *piRam002138a0;
extern char s_SE_GueldMan_V_DAMAGE_00213884[];

// USA 002137C0 <- EU 002137C0 (Ghidra, non-matching)
// GLOBAL UNK_0021389c int
// GLOBAL UNK_002138a0 int *
// GLOBAL s_SE_GueldMan_V_DAMAGE_00213884 string

undefined8 func_002137C0(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint extraout_r1;
  uint extraout_r1_00;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define iStack_18 (*(int *)(albw_frame + 0x8))
  #define pcStack_14 (*(char * *)(albw_frame + 0xc))
  uVar2 = (uint)*(byte *)(param_1 + 0x8c0);
  if (uVar2 == 7) {
    uVar1 = param_2 & 0xff;
    bVar4 = 0x1d < uVar1;
    bVar3 = uVar1 == 0x1e;
    if (!bVar3) {
      uVar1 = uVar1 - 0xe;
      bVar4 = 2 < uVar1;
    }
    if (!bVar4 || (bVar3 || uVar1 == 3)) {
      uVar5 = func_0058AB74(param_1);
      uVar2 = (uint)((ulonglong)uVar5 >> 0x20);
      if ((int)uVar5 != 6) {
        func_004FABDC(param_1,6,0xffffffff,0);
        pcStack_14 = s_SE_GueldMan_V_DAMAGE_00213884;
        iStack_18 = iRam0021389c;
        func_00150A84((int *)param_1,&iStack_18,0);
        uVar2 = extraout_r1;
        if (0 < *(int *)(param_1 + 0x9bc)) {
          func_001D6FD0((undefined4 *)(param_1 + 0x3d0),0,1,piRam002138a0,-1);
          *(int *)(param_1 + 0x9bc) = *(int *)(param_1 + 0x9bc) + -1;
          uVar2 = extraout_r1_00;
        }
      }
    }
    param_2 = 0;
  }
  return CONCAT44(uVar2,param_2);
}

