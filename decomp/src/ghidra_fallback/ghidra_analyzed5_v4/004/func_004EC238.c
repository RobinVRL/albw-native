#include "ghidra_types.h"

extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_004B070C(int param_1);
extern int func_0056D3E4(int param_1,uint *param_2);
extern int func_0057F260(int param_1);
extern int func_00689024(undefined4 *param_1);
extern undefined8 func_00689928(int *param_1,int *param_2,uint param_3);
extern int iRam004ec2f8;
extern char s__s__s_004ec2ec[];
extern char s_cf_004ec2ec[];

// USA 004EC238 <- EU 004EC210 (Ghidra, non-matching)
// GLOBAL UNK_004ec2f8 int
// GLOBAL s_cf_004ec2ec string

undefined4 func_004EC238(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 (*(int *)(albw_frame + 0x0))
  #define local_6c (*(uint * *)(albw_frame + 0x4))
  #define iStack_20 (*(int *)(albw_frame + 0x50))
  #define iStack_1c (*(int *)(albw_frame + 0x54))
  if (*(int *)(param_1 + 0x5c) == 0) {
    return 0;
  }
  iVar2 = func_004B070C((uint)*(byte *)(*(int *)(param_1 + 0x5c) + 0x392));
  if (iVar2 != 0) {
    func_00689024(&local_70);
    (**(code **)(*param_2 + 8))(param_2);
    func_004994B0((int)&local_70,s__s__s_004ec2ec,param_2[1],iVar2);
    (**(code **)(local_70 + 8))(&local_70);
    puVar3 = func_0057F260(*(int *)(*(int *)(param_1 + 0x24) + 0x140));
    uVar4 = func_0056D3E4((int)puVar3,local_6c);
    iVar1 = iRam004ec2f8;
    if (uVar4 != 0xffffffff) {
      iStack_1c = (int)"_"; /* EU 004EC2F4 */
      iStack_20 = iRam004ec2f8;
      func_00689928(param_2,&iStack_20,0xffffffff);
      iStack_20 = iVar1;
      iStack_1c = iVar2;
      func_00689928(param_2,&iStack_20,0xffffffff);
      return 1;
    }
  }
  return 0;
}

