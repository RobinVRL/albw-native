#include "ghidra_types.h"

extern int func_00100744(int param_1,uint param_2,undefined4 param_3,uint param_4);
extern int func_0010C1B8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int func_003C8874(undefined4 *param_1,short *param_2,undefined4 param_3);
extern int func_003C8BD8(int *param_1);
extern int func_003DABC4(int param_1,int param_2,int *param_3,int param_4,uint param_5);
extern int func_003DB130(undefined4 param_1,undefined1 *param_2,int *param_3);
extern int func_0056463C(int param_1,int param_2,int param_3,uint param_4);
extern int *DAT_003dab04;
extern char u_ngword___d_txt_003daae4[];

// USA 003DA934 <- EU 003DA914 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// GLOBAL DAT_003dab04 int *
// GLOBAL u_ngword:/%d.txt_003daae4 unicode

int func_003DA934(int param_1,undefined4 *param_2,undefined4 param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  _Alignas(8) unsigned char albw_frame[0xe0];
  #define local_dc (*(int *)(albw_frame + 0x4))
  #define local_d8 ((int *)(albw_frame + 0x8))
  #define asStack_c0 ((short *)(albw_frame + 0x20))
  #define local_3c ((byte *)(albw_frame + 0xa4))
  #define iStack_34 (*(int *)(albw_frame + 0xac))
  #define puStack_30 (*(undefined4 * *)(albw_frame + 0xb0))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0xb4))
  #define local_28 (*(int *)(albw_frame + 0xb8))
  iStack_34 = param_1;
  puStack_30 = param_2;
  uStack_2c = param_3;
  local_28 = param_4;
  iVar2 = func_0056463C(param_1,(int)param_2,param_4,param_5);
  if (iVar2 < 0) {
    return iVar2;
  }
  if (param_5 != 0) {
    puVar3 = param_2 + -1;
    if ((param_5 & 1) != 0) {
      *param_2 = 0;
      puVar3 = param_2;
    }
    for (uVar5 = param_5 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
      puVar3[1] = 0;
      puVar3 = puVar3 + 2;
      *puVar3 = 0;
    }
  }
  func_003DB130(param_1,local_3c,&local_dc);
  iVar2 = 0;
  if (0 < local_dc) {
    do {
      func_00100744((int)asStack_c0,0x40,u_ngword___d_txt_003daae4,(uint)local_3c[iVar2]);
      local_d8[1] = 0;
      local_d8[0] = *DAT_003dab04;
      piVar6 = (int *)0x1;
      *(int *)((int)local_d8 + *(int *)(local_d8[0] + -0x30)) = DAT_003dab04[3];
      local_d8[4] = 0;
      local_d8[5] = 0;
      local_d8[2] = 0;
      local_d8[3] = 0;
      iVar4 = func_003C8874(local_d8 + 1,asStack_c0,1);
      iVar1 = -(iVar4 >> 0x1f);
      if (iVar1 != 0) {
joined_r0x003daa18:
        if ((local_d8[1] & 0xfffffffeU) == 0) {
          return iVar4;
        }
        if ((local_d8[1] & 1U) == 0) {
          func_003C8BD8((int *)(local_d8[1] & 0xfffffffe));
          return iVar4;
        }
                    /* WARNING: Subroutine does not return */
        func_0010C1B8(local_d8[1],iVar1,piVar6);
      }
      piVar6 = local_d8;
      *(byte *)(param_1 + 0x1b) = local_3c[iVar2];
      iVar4 = func_003DABC4(param_1,(int)param_2,piVar6,local_28,param_5);
      iVar1 = -(iVar4 >> 0x1f);
      if (iVar1 != 0) goto joined_r0x003daa18;
      if ((local_d8[1] & 0xfffffffeU) != 0) {
                    /* WARNING: Subroutine does not return */
        if ((local_d8[1] & 1U) != 0) {
          func_0010C1B8(local_d8[1],0,piVar6);
        }
        func_003C8BD8((int *)(local_d8[1] & 0xfffffffe));
        local_d8[1] = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_dc);
  }
  return 0;
}

