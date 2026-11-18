#include "ghidra_types.h"

extern int func_0010C1B8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int func_0025C92C(int param_1,int param_2);
extern int func_003C7D28(int param_1,byte *param_2,int param_3);
extern int func_003C8BD8(int *param_1);
extern int func_003C9DCC(uint *param_1,int *param_2,int param_3,uint param_4,int param_5);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_004A143C(byte *param_1,uint param_2);
extern int *DAT_0025c470;
extern int DAT_0025c474;
extern undefined4 *DAT_0025c478;
extern uint *DAT_0025c47c;
extern int *DAT_0025c488;
extern char s__s__s_0025c480[];
extern char s_cf_0025c480[];

// USA 0025C32C <- EU 0025C354 (Ghidra, non-matching)
// GLOBAL DAT_0025c470 int *
// GLOBAL DAT_0025c474 int
// GLOBAL DAT_0025c478 undefined4 *
// GLOBAL DAT_0025c47c uint *
// GLOBAL DAT_0025c488 int *
// GLOBAL s_cf_0025c480 string

int * func_0025C32C(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 extraout_r1;
  byte *pbVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define iStack_6c (*(int *)(albw_frame + 0x4))
  #define local_68 ((int *)(albw_frame + 0x8))
  #define local_4c (*(byte * *)(albw_frame + 0x24))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x28))
  #define local_44 ((byte *)(albw_frame + 0x2c))
  #define uStack_15 (*(undefined1 *)(albw_frame + 0x5b))
  iVar5 = *DAT_0025c470;
  local_4c = local_44;
  uStack_48 = 0x30;
  uStack_15 = 0;
  local_44[0] = 0;
  local_68[6] = DAT_0025c474;
  func_004994B0((int)(local_68 + 6),s__s__s_0025c480,*DAT_0025c47c,*DAT_0025c478);
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  local_68[4] = 0;
  local_68[5] = 0;
  local_68[0] = *DAT_0025c488;
  *(int *)((int)local_68 + *(int *)(local_68[0] + -0x30)) = DAT_0025c488[3];
  (**(code **)(local_68[6] + 8))(local_68 + 6);
  pbVar4 = (byte *)0x0;
  iVar1 = func_003C7D28((int)local_68,local_4c,0);
  if (-1 < iVar1) {
    pbVar4 = (byte *)(iVar5 + 0x4bd8);
    uVar2 = func_004A143C(pbVar4,0x1fc);
    *(uint *)(iVar5 + 0x4dd4) = uVar2;
    iStack_6c = 0;
    func_003C9DCC((uint *)(local_68 + 1),&iStack_6c,(int)pbVar4,0x200,1);
  }
  func_0025C92C(param_1,0);
  piVar3 = (int *)0x0;
  if ((local_68[1] & 0xfffffffeU) != 0) {
                    /* WARNING: Subroutine does not return */
    if ((local_68[1] & 1U) != 0) {
      func_0010C1B8(local_68[1],extraout_r1,pbVar4);
    }
    piVar3 = func_003C8BD8((int *)(local_68[1] & 0xfffffffe));
  }
  return piVar3;
}

