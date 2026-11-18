#include "ghidra_types.h"

extern int func_00457510(int param_1);
extern int func_004576CC(int param_1,uint param_2,int param_3,undefined4 param_4);
extern int func_0045918C(int param_1);
extern int func_00459388(int param_1);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int func_0066D544(undefined4 *param_1,char param_2);
extern int *DAT_00457304;
extern int DAT_00457308;
extern int *DAT_00457318;
extern char s_SE_S_BACK_0045731c[];
extern char s_SE_S_DECIDE_0045730c[];

// USA 004571B0 <- EU 00457188 (Ghidra, non-matching)
// GLOBAL DAT_00457304 int *
// GLOBAL DAT_00457308 int
// GLOBAL DAT_00457318 int *
// GLOBAL s_SE_S_BACK_0045731c string
// GLOBAL s_SE_S_DECIDE_0045730c string

undefined4 func_004571B0(int param_1)

{
  int iVar1;
  uint uVar2;
  int in_r3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  func_0045918C(param_1);
  iVar1 = DAT_00457308;
  if (*(char *)(param_1 + 0x224) != '\0') {
    in_r3 = *DAT_00457304;
    uVar2 = *(uint *)(in_r3 + (uint)*(byte *)(param_1 + 0x70) * 400 + 0x20);
    if ((uVar2 & 1) != 0) {
      return func_00459388(param_1);
    }
    if ((uVar2 & 2) != 0) {
      func_004576CC(param_1,7,0,in_r3);
      return func_00459388(param_1);
    }
  }
  if (*(char *)(*(int *)(param_1 + 0x1c4) + 0x8c) == '\0') {
    if (*(char *)(*(int *)(param_1 + 0x1e0) + 0x8c) != '\0') {
      func_00457510(param_1);
      func_0066D544((undefined4 *)(param_1 + 0x17c),'\x1d');
      local_14 = s_SE_S_BACK_0045731c;
      local_18 = iVar1;
      return func_00533078(*(undefined4 *)(param_1 + 0x1e0),&local_18,0);
    }
    if ((*(char *)(param_1 + 0x224) != '\0') &&
       ((*(uint *)(*DAT_00457304 + (uint)*(byte *)(param_1 + 0x70) * 400 + 0x20) & 0xcc0000) != 0))
    {
      if (*(int *)(param_1 + 0x210) != 7) {
        return func_004576CC(param_1,7,1,in_r3);
      }
      return func_004576CC(param_1,0,1,in_r3);
    }
  }
  else {
    func_00457510(param_1);
    func_0066D544((undefined4 *)(param_1 + 0x17c),'\x19');
    local_14 = s_SE_S_DECIDE_0045730c;
    local_18 = iVar1;
    func_00587F74(*DAT_00457318,&local_18,0);
  }
  return 0;
}

