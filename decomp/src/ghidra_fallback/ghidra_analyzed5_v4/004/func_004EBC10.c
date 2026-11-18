#include "ghidra_types.h"

extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_004B070C(int param_1);
extern int func_00556A1C(int param_1);
extern int func_0056D3E4(int param_1,uint *param_2);
extern int func_0057F260(int param_1);
extern int func_00689024(undefined4 *param_1);
extern undefined8 func_00689928(int *param_1,int *param_2,uint param_3);
extern int iRam004ebce0;
extern int *DAT_004ebcd0;
extern char s__s__s_004ebcd4[];
extern char s_cf_004ebcd4[];

// USA 004EBC10 <- EU 004EBBE8 (Ghidra, non-matching)
// GLOBAL DAT_004ebcd0 int *
// GLOBAL UNK_004ebce0 int
// GLOBAL s_cf_004ebcd4 string

undefined4 func_004EBC10(int param_1,int *param_2)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 (*(int *)(albw_frame + 0x0))
  #define local_6c (*(uint * *)(albw_frame + 0x4))
  #define iStack_20 (*(int *)(albw_frame + 0x50))
  #define iStack_1c (*(int *)(albw_frame + 0x54))
  if (*(int *)(param_1 + 0x58) == 0) {
    return 0;
  }
  pbVar2 = (byte *)func_00556A1C(*DAT_004ebcd0);
  iVar3 = func_004B070C((uint)*pbVar2);
  if (iVar3 != 0) {
    func_00689024(&local_70);
    (**(code **)(*param_2 + 8))(param_2);
    func_004994B0((int)&local_70,s__s__s_004ebcd4,param_2[1],iVar3);
    (**(code **)(local_70 + 8))(&local_70);
    puVar4 = func_0057F260(*(int *)(*(int *)(param_1 + 0x24) + 0x140));
    uVar5 = func_0056D3E4((int)puVar4,local_6c);
    iVar1 = iRam004ebce0;
    if (uVar5 != 0xffffffff) {
      iStack_1c = (int)"_"; /* EU 004EBCDC */
      iStack_20 = iRam004ebce0;
      func_00689928(param_2,&iStack_20,0xffffffff);
      iStack_20 = iVar1;
      iStack_1c = iVar3;
      func_00689928(param_2,&iStack_20,0xffffffff);
      return 1;
    }
  }
  return 0;
}

