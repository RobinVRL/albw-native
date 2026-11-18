#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00457510(int param_1);
extern int func_004576CC(int param_1,uint param_2,int param_3,undefined4 param_4);
extern int func_0045918C(int param_1);
extern int func_00459388(int param_1);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int func_0066D544(undefined4 *param_1,char param_2);
extern int *DAT_00458640;
extern int *DAT_00458644;
extern int DAT_00458648;
extern undefined DAT_0045865c;
extern char s_SE_S_DECIDE_S_0045864c[];
extern char s__SE_S_BACK_0045865f[];
extern undefined4 _DAT_0045865c;

// GLOBAL DAT_00458640 int *
// GLOBAL DAT_00458644 int *
// GLOBAL DAT_00458648 int
// GLOBAL DAT_0045865c undefined
// GLOBAL s_SE_S_DECIDE_S_0045864c string
// USA 0045845C <- EU 00458438 (Ghidra, function missing from the decomp table)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_0045845C(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  float fparam_0;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined2 *puVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define iStack_20 (*(int *)(albw_frame + 0x0))
  #define pcStack_1c (*(char * *)(albw_frame + 0x4))
  func_0045918C(param_1);
  iVar2 = DAT_00458648;
  piVar1 = DAT_00458644;
  piVar4 = DAT_00458640;
  if (*(char *)(param_1 + 0x224) != '\0') {
    param_4 = (uint)*(byte *)(param_1 + 0x70) * 0x19;
    uVar3 = *(uint *)(*DAT_00458640 + (uint)*(byte *)(param_1 + 0x70) * 400 + 0x20);
    if ((uVar3 & 1) != 0) {
      return func_00459388(param_1);
    }
    if ((uVar3 & 2) != 0) {
      func_004576CC(param_1,7,0,param_4);
      return func_00459388(param_1);
    }
  }
  if (*(char *)(*(int *)(param_1 + 0x1d0) + 0x8c) == '\0') {
    if (*(char *)(*(int *)(param_1 + 0x1d4) + 0x8c) == '\0') {
      if (*(char *)(*(int *)(param_1 + 0x1e0) + 0x8c) != '\0') {
        func_00457510(param_1);
        func_0066D544((undefined4 *)(param_1 + 0x17c),'\a');
        pcStack_1c = s__SE_S_BACK_0045865f + 1;
        iStack_20 = iVar2;
        return func_00533078(*(undefined4 *)(param_1 + 0x1e0),&iStack_20,0);
      }
      if (*(char *)(param_1 + 0x224) == '\0') {
        return 0;
      }
      if ((*(uint *)(*DAT_00458640 + (uint)*(byte *)(param_1 + 0x70) * 400 + 0x20) & 0x220000) != 0)
      {
        uVar3 = *(int *)(param_1 + 0x210) + 1;
        if ((int)uVar3 < 8) {
          if (uVar3 == 5) {
            uVar3 = 7;
          }
        }
        else {
          uVar3 = 3;
        }
        func_004576CC(param_1,uVar3,1,param_4);
      }
      if ((*(uint *)(*piVar4 + (uint)*(byte *)(param_1 + 0x70) * 400 + 0x20) & 0x110000) == 0) {
        return 0;
      }
      uVar3 = *(int *)(param_1 + 0x210) - 1;
      if ((int)uVar3 < 3) {
        uVar3 = 7;
      }
      else if (uVar3 == 6) {
        uVar3 = 4;
      }
      return func_004576CC(param_1,uVar3,1,param_4);
    }
    *(undefined1 *)(param_1 + 0x234) = 1;
    fparam_0 = ALBW_AS_F32(_DAT_0045865c);
    piVar4 = (int *)(param_1 + 0x1e4);
    if (*(uint *)(param_1 + 0x214) < 3) {
      piVar4 = piVar4 + *(uint *)(param_1 + 0x214);
    }
    iVar5 = *(int *)(*piVar4 + 0xfc);
    *(undefined1 *)(iVar5 + 0x158) = 1;
    puVar6 = (undefined2 *)(iVar5 + 0x20);
    *puVar6 = 0;
    func_002317C0(puVar6,fparam_0);
  }
  pcStack_1c = s_SE_S_DECIDE_S_0045864c;
  iStack_20 = iVar2;
  func_00587F74(*piVar1,&iStack_20,0);
  return func_0066D544((undefined4 *)(param_1 + 0x17c),'\x04');
}

